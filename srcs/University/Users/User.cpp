#include "../../../includes/University/Users/User.hpp"

User::User(std::string name, std::string email, std::string password, std::string registrationNumber): 
	_name(name), 
	_email(email), 
	_password(password),
	_registrationNumber(registrationNumber),
	_role(""),
	_status(""),
	_course("")
{
	cout << "User " << name << " created" << std::endl;
}

User::~User(void) {
	cout << "User destroyed" << std::endl;
}

std::string	User::getName(void) const {
	return (this->_name);
}

std::string	User::getEmail(void) const {
	return (this->_email);
}

std::string	User::getCourse(void) const {
	return (this->_course);
}

std::string	User::getLevel(void) const {
	return (this->_level);
}

std::string	User::getRole(void) const {
	return (this->_role);
}

std::string	User::getStatus(void) const {
	return (this->_status);
}

void	User::setName(std::string name) {
	this->_name = name;
}

void	User::setEmail(std::string email) {
	this->_email = email;
}

void	User::setCourse(std::string course) {
	this->_course = course;
}

void	User::setCourse(std::string level) {
	this->_level = level;
}

void	User::setRole(std::string role) {
	this->_role = role;
}

void	User::setStatus(std::string status) {
	this->_status = status;
}
