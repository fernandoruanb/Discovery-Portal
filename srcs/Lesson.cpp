#include "../includes/Lesson.hpp"

Lesson::Lesson(unsigned long long int id, unsigned long long int courseId, std::string title, std::string content) :
	_id(id),
	_courseId(courseId),
	_title(title),
	_content(content),
	_order(order),
	_duration(duration),
	_published(false)
{
	std::cout << "Lesson " << title << " created" << std::endl;
}

Lesson::~Lesson(void) {
	std::cout << "Lesson destroyed" << std::endl;
}

unsigned long long int	Lesson::getId(void) const {
	return (this->_id);
}

unsigned long long int	Lesson::getCourseId(void) const {
	return (this->_courseId);
}

std::string	Lesson::getTitle(void) const {
	return (this->_title);
}

std::string	Lesson::getContent(void) const {
	return (this->_content);
}

unsigned long long int	Lesson::getOrder(void) const {
	return (this->_order);
}

std::string	Lesson::getDuration(void) const {
	return (this->_duration);
}

bool	Lesson::getPublished(void) const {
	return (this->_published);
}

void	Lesson::setId(unsigned long long int id) {
	this->_id = id;
}

void	Lesson::setCourseId(unsigned long long int _courseId) {
	this->_courseId = id;
}

void	Lesson::setTitle(std::string title) {
	this->_title = title;
}

void	Lesson::setContent(std::string content) {
	this->_content = content;
}

void	Lesson::setOrder(unsigned long long int order) {
	this->_order = order;
}

void	Lesson::setDuration(std::string duration) {
	this->_duration = duration;
}

void	Lesson::setPublished(bool published) {
	this->published = published;
}
