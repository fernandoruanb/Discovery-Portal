#include "../../includes/Database/Database.hpp"

Database::Database(const std::string&	connectionString) : 
	_connection(connectionString) {
	std::cout << "Connection to the database created" << std::endl;
}

Database::~Database(void) {
	std::cout << "Connection to the database destroyed" << std::endl;
}

pqxx::connection&	Database::getConnection(void){
	return (this->_connection);
}
