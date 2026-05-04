#include "../includes/Loan.hpp"

Loan::Loan(int id, int bookId, std::string loanDate, std::string dueDate, std::string returnDate) :
	_id(id), 
	_bookId(bookId),
	_loanDate(loanDate),
	_dueDate(dueDate);
	_returnDate(returnDate) 
{
	std::cout << "Loan created" << std::endl;
};

Loan::~Loan(void) {
	std::cout << "Loan destroyed" << std::endl;
}

int	Loan::getId(void) const {
	return (this->_id);
}

int	Loan::getUserId(void) const {
	return (this->_userId);
}

int	Loan::getBookId(void) const {
	return (this->_bookId);
}

std::string	Loan::getLoanDate(void) const {
	return (this->_loanDate);
}

std::string	Loan::getDueDate(void) const {
	return (this->_dueDate);
}

std::string	Loan::getReturnDate(void) const {
	return (this->_returnDate);
}

void	Loan::setId(unsigned long long int id) {
	this->_id = id;
}

void	Loan::setUserId(unsigned long long int userId) {
	this->_userId = userId;
}

void	Loan::setBookId(unsigned long long int bookId) {
	this->_bookId = bookId;
}

void	Loan::setLoanDate(std::string loanDate) {
	this->_loanDate = loanDate;
}

void	Loan::setDueDate(std::string dueDate) {
	this->_dueDate = dueDate;
}

bool	Loan::isReturned(void) const {
	return (this->returned);
}

void	Loan::markAsReturned(void) const {
	this->_returned = true;
}
