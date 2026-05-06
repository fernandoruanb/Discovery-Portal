#include "../includes/Table.hpp"

Table::Table(unsigned long long int id, std::string code, std::string location, unsigned short int capacity) :
	_id(id),
	_code(code),
	_location(location),
	_capacity(capacity),
	_hasPowerOutlet(false),
	_hasComputer(false),
	_isAvailable(false)
{
	std::cout << "Table " << code << " created" << std::endl;
}

Table::Table(void) {
	std::cout << "Table destroyed" << std::endl;
}

unsigned long long int	Table::getId(void) const {
	return (this->_id);
};

std::string	Table::getCode(void) const {
	return (this->_code);
}

std::string	Table::getLocation(void) const {
	return (this->_location);
}

unsigned short int	Table::getCapacity(void) const {
	return (this->_capacity);
}

bool	Table::getHasPowerOutlet(void) const {
	return (this->_hasPowerOutlet);
}

bool	Table::getHasComputer(void) const {
	return (this->_hasComputer);
}

bool	Table::getIsAvailable(void) const {
	return (this->_isAvailable);
}

void	Table::setId(unsigned long long int id) {
	this->_id = id;
}

void	Table::setCode(std::string code) {
	this->_code = code;
}

void	Table::setLocation(std::string location) {
	this->_location = location;
}

void	Table::setCapacity(unsigned short int capacity) {
	this->_capacity = capacity;
}

void	Table::setHasPowerOutlet(bool power) {
	this->_hasPowerOutlet = power;
}

void	Table::setIsAvailable(bool available) {
	this->_isAvailable = available;
}
