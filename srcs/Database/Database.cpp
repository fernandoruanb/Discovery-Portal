#include "../../includes/Database/Database.hpp"

Database::Database(const std::string&	connectionString) : _connection(connectionString) {
	if (this->_connection->is_open())
		std::cout << "Connection to the database created" << std::endl;
	else
		std::cout << "Connection to the database not created" << std::endl;
}

Database::~Database(void) {
	if (this->_connection->is_open()) // the second -> is because it is a pointer
		this->_connection.close(); // to guarantee to close, I know the destructor does it automatically
	std::cout << "Connection to the database destroyed" << std::endl;
}

pqxx::connection&	Database::getConnection(void){
	return (this->_connection);
}
