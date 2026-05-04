#ifndef LOAN_HPP
# define LOAN_HPP

# include <iostream>
# include <string>

class Loans {
	private:
		// all ids

		int	_id;
		int	_userId;
		int	_bookId;

		// the details of the Loan

		std::string	_loanDate;
		std::string	_dueDate;
		std::string	_returnDate;

		// devolution

		bool	_returned;

		Loan(void); // I do not intend to have empty loans
		Loan(const Loan &other);
		Loan& operator=(const Loan &other);

	public:
		Loan(int userId, int bookId, std::string loanDate, std::string _returnDate);
		~Loan(void);

		// getters

		int	getId(void) const;
		int	getUserId(void) const;
		int	getBookId(void) const;
		std::string	getLoanDate(void) const;
		std::string	getDueDate(void) const;
		std::string	getReturnDate(void) const;

		// setters

		void	setId(unsigned long long int id);
		void	setUserId(unsigned long long int userId);
		void	setBookId(unsigned long long int bookId);
		void	setLoanDate(std::string loanDate);
		void	setDueDate(std::string dueDate);
		void	setReturnDate(std::string returnDate);	

		// methods

		bool	isReturned(void) const;
		void	markAsReturned(void);
};

#endif /* LOAN_HPP */
