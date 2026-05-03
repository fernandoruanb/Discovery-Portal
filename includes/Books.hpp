#ifndef BOOKS_HPP
# define BOOKS_HPP

# include <iostream>
# include <string>
# include <vector>

/*

In this book class, I represent only the books with their system ID, title, author, category and more. Notice that there is no quantity here—everything is structured separately. My focus here is the book and its characteristics; if I need anything additional, this is where it will be added. A book is not a shelf, a shelf is not a table, just as a table is not a user—everything is organized into classes that communicate with each other.

*/

class Books {
	private:
		unsigned long long int	_id; // 0 to 18.446.744.073.709.551.615
		unsigned short int	_numberOfPages; // 0 to 65535
		unsigned short int	_volume;
		unsigned short int	_year;
		std::string	_isbn; // International Standard Book Number
		std::string	_title;
		std::string	_author;
		std::string	_category;
		std::string	_publisher;
		std::string	_edition;
		std::string	_language;
		std::string	_description;
		std::vector<std::string>	_keywords; // to find the book by keywords in the system by a collection
		Book(void); // I do not intend to have empty initializors of Books
	public:
		Book(int isbn, std::string title, std::string author, std::string category, std::string language);
		~Book(void);

		// get each information about the book, getters are forbidden to modificate any data (const)

		unsigned long long int	getId(void) const;
		unsigned short int	getNumberOfPages(void) const;
		short int	getVolume(void) const;
		std::string	getISBN(void) const;
		std::string	getTitle(void) const;
		std::string	getAuthor(void) const;
		std::string	getCategory(void) const;
		std::string	getPublisher(void) const;
		std::string	getEdition(void) const;
		std::string	getLanguage(void) const;
		std::string	getDescription(void) const;
		std::vector<std::string>	getKeywords(void) const;
		unsigned short int	getYear(void) const;
		
		// update each information

		void	setId(unsigned long long int id);
		void	setNumberOfPages(unsigned short int numberOfPages);
		void	setVolume(unsigned short int volume);
		void	setISBN(std::string isbn);
		void	setTitle(std::string title);
		void	setAuthor(std::string author);
		void	setCategory(std::string category);
		void	setPublisher(std::string publisher);
		void	setEdition(std::string edition);
		void	setLanguage(std::string language);
		void	setDescription(std::string description);
		void	setKeywords(std::vector<std::string> keywords);
		void	insertNewKeyword(std::string keyword);
}

#endif /* BOOKS_HPP */
