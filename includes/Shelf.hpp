#ifndef SHELF_HPP
# define SHELF_HPP

# include "./Book.hpp"
# include <iostream>
# include <vector>
# include <algorithm>
# include <string>

class Shelf{
	private:
		unsigned long long int	_id;
		std::string	_code;
		std::string	_section;
		unsigned short int	_floor;
		unsigned int	_capacity;
		bool	_available;
		std::vector<Book> _books;
		Shelf(void);
		Shelf(const Shelf &other);
		Shelf& operator=(const Shelf &other);
	public:

		// constructors and destructors

		Shelf(unsigned long long int id, std::string code, std::string section, unsigned short int floor);
		~Shelf(void);
		
		// getters

		unsigned long long int	getId(void) const;
		std::string	getCode(void) const;
		std::string	getSection(void) const;
		std::vector<Book>	getBooks(void) const;
		unsigned short int	getFloor(void) const;
		unsigned int	getCapacity(void) const;
		bool	getAvailable(void) const;

		// setters

		void	setId(unsigned long long int id);
		void	setCode(std::string code);
		void	setSection(std::string section);
		void	setFloor(unsigned long long int floor);
		void	setCapacity(unsigned int capacity);
		void	setAvailable(bool available);
		void	setBooks(std::vector<Book> books);

		// methods

		bool	insertNewBook(const Book &book); // check and insert a new book on the shelf
		bool	removeBook(unsigned long long int id); // remove book by id
};

#endif /* SHELF_HPP */
