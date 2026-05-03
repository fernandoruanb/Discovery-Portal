#include "../includes/Books.hpp"

Books::Books(std::string title, std::string author, int year) : _title(title), _author(author), _year(year) {
	cout << "Book " << title << " created" << std::endl;
}

Books::~Books(void) {
	cout << "Book destroyed" << std::endl;
}

std::string Books::getAuthor(void) const {
	return this->_author;
}

std::string Books::getTitle(void) const {
	return this->_title;
}

int	Books::getYear(void) const {
	return this->_year;
}
