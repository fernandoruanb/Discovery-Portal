#include "../includes/Database/Database.hpp"

int main(void) {
	Database db("dbname=discovery_portal user=postgres host=localhost port=5432");

	pqxx::work tx(db.getConnection());
	pqxx::result result = tx.exec("SELECT 1");

	std::cout << result[0][0].as<int>() << std::endl;

	tx.commit();

	return (0);
}
