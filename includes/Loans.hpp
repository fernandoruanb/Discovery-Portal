#ifndef LOANS_HPP
# define LOANS_HPP

# include <iostream>
# include <string>

class Loans {
	private:
		int	_id;
		int	_userId;
		int	_bookId;
		std::string	_loanDate;
		std::string	_returnDate;
		bool	_returned;
		Loan(void); // I do not intend to have empty loans

	public:
		Loan(int userId, int bookId, std::string loanDate, std::string _returnDate);
		~Loan(void);
		int	getUserId(void) const;
		int	getBookId(void) const;
		bool	isReturned(void) const;
		void	markAsReturned(void);
};
