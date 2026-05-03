#include "../includes/Users.hpp"

Users::Users(std::string name, std::string email, std::string password): _name(name), _email(email), _password(password) {
	cout << "User " << name << " created" << std::endl;
}

Users::~Users(void) {
	cout << "User destroyed" << std::endl;
}

std::string	Users::getName(void) const {
	return (this->_name);
}

std::string	Users::getEmail(void) const {
	return (this->_email);
}

void	Users::setName(std::string name) {
	this->name = name;
}

void	Users::setEmail(std::string email) {
	this->email = email;
}
