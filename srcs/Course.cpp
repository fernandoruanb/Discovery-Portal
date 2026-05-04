#include "../includes/Course.hpp"

Course::Course(unsigned long long int id, std::string title, std::string instructor, std::string category):
	_id(id),
	_title(title),
	_instructor(instructor),
	_category(category)
	_language(""),
	_description(""),
	_duration(""),
	_published(false)
{
	std::cout << "Course " << title << " created" << std::endl;
}

Course::~Course(void) {
	std::cout << "Course destroyed" << std::endl;
}

unsigned long long int	Course::getId(void) const {
	return (this->_id);
}

std::string	Course::getTitle(void) const {
	return (this->_title);
}

std::string	Course::getInstructor(void) const {
	return (this->_instructor);
}

std::string	Course::getCategory(void) const {
	return (this->_category);
}

std::string	Course::getLanguage(void) const {
	return (this->_language);
}

std::string	Course::getDescription(void) const {
	return (this->_description);
}

std::string	Course::getDuration(void) const {
	return (this->_duration);
}

bool	Course::getPublished(void) const {
	return (this->_published);
}

void	Course::setId(unsigned long long int id) {
	this->_id = id;
}

void	Course::setTitle(std::string title) {
	this->_title = title;
}

void	Course::setInstructor(std::string instructor) {
	this->_instructor = instructor;
}

void	Course::setCategory(std::string category) {
	this->_category = category;
}

void	Course::setLanguage(std::string language) {
	this->_language = language;
}

void	Course::setDescription(std::string description) {
	this->_description = description;
}

void	Course::setDuration(std::string duration) {
	this->_duration = duration;
}

void	Course::setPublished(bool published) {
	this->_published = published;
}
