#include "../includes/Database/Database.hpp"

int main(void) {
	try {
		Database db("dbname=discovery_portal user=discovery_user host=localhost port=5432 password=discovery_pass");

		pqxx::work tx(db.getConnection());
		pqxx::result result = tx.exec("SELECT 1");

		std::cout << result[0][0].as<int>() << std::endl;

		tx.commit();
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}

	return (0);
}
