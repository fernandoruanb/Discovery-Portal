#include "../../../includes/University/Library/Reservation.hpp"

Reservation::Reservation(unsigned long long int id, unsigned long long int userId, unsigned long long int resourceId, ReservationType type, ReservationStatus status) :
	_id(id),
	_userId(userId),
	_resourceId(resourceId),
	_type(type),
	_status(status)
{
	std::cout << "Reservation " << id << " created" << std::endl;
}

Reservation::~Reservation(void) {
	std::cout << "Reservation destroyed" << std::endl;
}

unsigned long long int	Reservation::getId(void) const {
	return (this->_id);
}

unsigned long long int	Reservation::getUserId(void) const {
	return (this->_userId);
}

unsigned long long int	Reservation::getResourceId(void) const {
	return (this->_resourceId);
}

ReservationType	Reservation::getReservationType(void) const {
	return (this->_reservationType);
}

ReservationStatus	Reservation::getReservationStatus(void) const {
	return (this->_reservationStatus);
}

std::string	Reservation::getStartDate(void) const {
	return (this->_startDate);
}

std::string	Reservation::getEndDate(void) const {
	return (this->_endDate);
}

void	Reservation::setId(unsigned long long int id) {
	this->_id = id;
}

void	Reservation::setUserId(unsigned long long int userId) {
	this->_userId = userId;
}

void	Reservation::setResourceId(unsigned long long int resourceId) {
	this->_resourceId = resourceId;
}

void	Reservation::setReservationType(ReservationType reservationType) {
	this->_reservationType = reservationType;
}

void	Reservation::setReservationStatus(ReservationStatus reservationStatus) {
	this->_reservationStatus = reservationStatus;
}

void	Reservation::setStartDate(std::string startDate) {
	this->_startDate = startDate;
}

void	Reservation::setEndDate(std::string endDate) {
	this->_endDate = endDate;
}	
