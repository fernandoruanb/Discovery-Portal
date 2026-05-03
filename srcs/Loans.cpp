#include "../includes/Loans.hpp"

Loan::Loan(int id, int bookId, std::string loanDate, std::string returnDate) :
_id(id), _bookId(bookId),_loanDate(loanDate),_returnDate(returnDate) {
	std::cout << "Loan created" << std::endl;
};

Loan::~Loan(void) {
	std::cout << "Loan destroyed" << std::endl;
}

Loan::~
int	Loans::getUserId(void) const {
	return (this->_userId);
}

int	Loans::getBookId(void) const {
	return (this->_bookId);
}

bool	Loans::isReturned(void) const {
	return (this->returned);
}

void	Loans::markAsReturned(void) const {
	this->_returned = true;
}
