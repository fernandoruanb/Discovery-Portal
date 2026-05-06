#ifndef DATABASE_HPP
# define DATABASE_HPP

//libpq is for C language and libpqxx for C++ one

# include <pqxx/pqxx> // libpqxx is a library to talk to PostgreSQL
# include <iostream>
# include <string>

class Database {
	private:
		// C++ -> libpqxx -> PostgreSQL

		pqxx::connection	_connection; // direct object to the connection with the database 

		// I do not want empty databases or copy constructors or operators for the same purpose

		Database(void);
		Database(const Database &other);
		Database& operator=(const Database &other);
	public:
		Database(const std::string&	connectionString);
		~Database(void);

		pqxx::connection&	getConnection(void); // I allow to modificate the object Database

		/*It is not necessary to close the connection because it closes automatically 
			during the destruction of the instance of the class Database. 
			Then, without problems with it here
		*/	
};

#endif /* DATABASE_HPP */
