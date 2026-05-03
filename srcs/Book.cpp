#include "../includes/Book.hpp"

Book::Book(std::string title, std::string author, std::string category, std::string language) : 
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
	_volume(0),
	_height(0),
	_width(0),
	_thickness(0)
{
	std::cout << "Book " << title << " created" << std::endl;
}

Book::~Book(void) {
	std::cout << "Book destroyed" << std::endl;
}

double	Book::getHeight(void) const {
	return (this->_height);
}

double	Book::getWidth(void) const {
	return (this->_width);
}

double	Book::getThickNess(void) const {
	return (this->_thickness);
}

double	Book::getWeight(void) const {
	return (this->_weight);
}

unsigned long long int	Book::getId(void) const {
	return (this->_id);
}

unsigned short int	Book::getNumberOfPages(void) const {
	return (this->_numberOfPages);
}

int	Book::getVolume(void) const {
	return (this->_volume);
}

std::string	Book::getISBN(void) const {
	return (this->_isbn);
}

std::string	Book::getTitle(void) const {
	return (this->_title);
}

std::string	Book::getAuthor(void) const {
	return (this->_author);
}

std::string	Book::getCategory(void) const {
	return (this->_category);
}

std::string	Book::getPublisher(void) const {
	return (this->_publisher);
}

std::string	Book::getEdition(void) const {
	return (this->_edition);
}

std::string	Book::getLanguage(void) const {
	return (this->_language);
}

std::string	Book::getDescription(void) const {
	return (this->_description);
}

std::vector<std::string>	Book::getKeywords(void) const {
	return (this->_keywords);
}

void	Book::setHeight(double height) {
	this->_height = height;
}

void	Book::setWidth(double width) {
	this->_width = width;
}

void	Book::setThickNess(double thickness) {
	this->_thickness = thickness;
}

void	Book::setWeight(double weight) {
	this->_weight = weight;
}

void	Book::setId(unsigned long long int id) {
	this->_id = id;
}

void	Book::setNumberOfPages(unsigned short int numberOfPages) {
	this->_numberOfPages = numberOfPages;
}

void	Book::setVolume(unsigned short int volume) {
	this->_volume = volume;
}

void	Book::setISBN(std::string isbn) {
	this->_isbn = isbn;
}

void	Book::setTitle(std::string title) {
	this->_title = title;
}

void	Book::setAuthor(std::string author) {
	this->_author = author;
}

void	Book::setCategory(std::string category) {
	this->_category = category;
}

void	Book::setEdition(std::string edition) {
	this->_edition = edition;
}

void	Book::setLanguage(std::string language) {
	this->_language = language;
}

void	Book::setDescription(std::string description) {
	this->_description = description;
}

void	Book::setKeywords(vector<std::string> keywords) {
	this->_keywords = keywords;
}

void	Book::insertNewKeyword(std::string keyword) {
	this->_keywords.push_back(keyword);
}
