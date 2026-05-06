#include "../includes/Shelf.hpp";

Shelf::Shelf(unsigned long long int id, std::string code, std::string section, unsigned short int floor) :
	_id(id),
	_code(code),
	_section(section),
	_floor(floor),
	_books()
{
	std::cout << "Shelf " << code << " created" << std::endl;
}

Shelf::~Shelf(void) {
	std::cout << "Shelf destroyed" << std::endl;
}

std::vector<Book>	Shelf::getBooks(void) const {
	return (this->_books);
}

unsigned long long int	Shelf::getId(void) const {
	return (this->_id);
}

std::string	Shelf::getCode(void) const {
	return (this->_code);
}

std::string	Shelf::getSection(void) const {
	return (this->_section);
}

unsigned short int	Shelf::getFloor(void) const {
	return (this->_floor);
}

unsigned int	Shelf::getCapacity(void) const {
	return (this->_capacity);
}

bool	Shelf::getAvailable(void) const {
	return (this->_available);
}

void	Shelf::setId(unsigned long long int id) {
	this->_id = id;
}

void	Shelf::setCode(std::string code) {
	this->_code = code;
}

void	Shelf::setSection(std::string section) {
	this->_section = section;
}

void	Shelf::setFloor(unsigned long long int floor) {
	this->_floor = floor;
}

void	Shelf::setCapacity(unsigned int capacity) {
	this->_capacity = capacity;
}

void	Shelf::setAvailable(bool available) {
	this->_available = available;
}

void	Shelf::setBooks(const std::vector<Book> books) {
	this->_books = books;
}

bool	Shelf::insertNewBook(const Book &book) {
	std::vector<Book>::iterator it = std::find_if(
		this->_books.begin(), 
		this->_books.end(),
		[&book](const Book &bookChecked) {
			return bookChecked.getId() == book.getId();
		}
	);
	
	if (it == this->_books.end()) {
		this->_books.push_back(book);
		return (true);
	}
	return (false);
}

bool	Shelf::removeBook(unsigned long long int bookId) {
	std::vector<Book>::iterator it = std::find_if(
		this->_books.begin(), 
		this->_books.end(), 
		[bookId](const Book& book)
		{
			return book.getId() == bookId;
		}
	);
	if (it == this->_books.end())
		return (false);
	this->_books_erase(it);
	return (true);
}


