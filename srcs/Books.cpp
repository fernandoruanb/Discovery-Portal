#include "../includes/Books.hpp"

Books::Books(std::string title, std::string author, std::string category, std::string language) : 
	_title(title), 
	_author(author), 
	_category(category), 
	_language(language),
	_isbn(""),
	_publisher(""),
	_edition(""),
	_description(""),
	_keywords(),
	_year(0),
	_numberOfPages(0),
	_volume(0)
{
	cout << "Book " << title << " created" << std::endl;
}

Books::~Books(void) {
	cout << "Book destroyed" << std::endl;
}

unsigned long long int	Books::getId(void) const {
	return (this->_id);
}

unsigned short int	Books::getNumberOfPages(void) const {
	return (this->_numberOfPages);
}

int	Books::getVolume(void) const {
	return (this->_volume);
}

std::string	Books::getISBN(void) const {
	return (this->_isbn);
}

std::string	Books::getTitle(void) const {
	return (this->_title);
}

std::string	Books::getAuthor(void) const {
	return (this->_author);
}

std::string	Books::getCategory(void) const {
	return (this->_category);
}

std::string	Books::getPublisher(void) const {
	return (this->_publisher);
}

std::string	Books::getEdition(void) const {
	return (this->_edition);
}

std::string	Books::getLanguage(void) const {
	return (this->_language);
}

std::string	Books::getDescription(void) const {
	return (this->_description);
}

std::vector<std::string>	Books::getKeywords(void) const {
	return (this->_keywords);
}

void	Books::setId(unsigned long long int id) {
	this->_id = id;
}

void	Books::setNumberOfPages(unsigned short int numberOfPages) {
	this->_numberOfPages = numberOfPages;
}

void	Books::setVolume(unsigned short int volume) {
	this->_volume = volume;
}

void	Books::setISBN(std::string isbn) {
	this->_isbn = isbn;
}

void	Books::setTitle(std::string title) {
	this->_title = title;
}

void	Books::setAuthor(std::string author) {
	this->_author = author;
}

void	Books::setCategory(std::string category) {
	this->_category = category;
}

void	Books::setEdition(std::string edition) {
	this->_edition = edition;
}

void	Books::setLanguage(std::string language) {
	this->_language = language;
}

void	Books::setDescription(std::string description) {
	this->_description = description;
}

void	Books::setKeywords(vector<std::string> keywords) {
	this->_keywords = keywords;
}

void	Books::insertNewKeyword(std::string keyword) {
	this->_keywords.push_back(keyword);
}
