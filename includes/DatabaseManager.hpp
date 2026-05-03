#ifndef DATABASEMANAGER_HPP
# define DATABASEMANAGER_HPP

# include <iostream>
# include <string>
# include "./Books.hpp"

class DatabaseManager {
	private:
		std::string	_host;
		std::string	_databaseName;
		std::string	_user;
		std::string	_password;

	public:
		DatabaseManager(void);
		~DatabaseManager(void);

		void connect(void);
		void insertBook(Book book);
		void listBooks(void);
};

#endif /* DATABASEMANAGER_HPP */
