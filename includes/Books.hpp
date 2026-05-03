#ifndef BOOKS_HPP
# define BOOKS_HPP

# include <iostream>
# include <string>

class Books {
	private:
		int	_id;
		std::string	_title;
		std::string	_author;
		int	_year;
		Book(void); // I do not intend to have empty initializors of Books
	public:
		Book(std::string title, std::string author, int year);
		~Book(void);

		std::string getTitle(void) const;
		std::string getAuthor(void) const;
		int getYear(void) const;
}

#endif /* BOOKS_HPP */
