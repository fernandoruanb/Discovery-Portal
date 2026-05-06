#ifndef TABLE_HPP
# define TABLE_HPP

# include <iostream>
# include <string>

class Table {
	private:
		unsigned long long int	_id;
		std::string	_code;
		std::string	_location;
		unsigned short int	_capacity;
		bool	_hasPowerOutlet; // energy
		bool	_hasComputer; // computer
		bool	_isAvailable; // disponibility

		// constructors and destructors avoided

		Table(void);
		Table(const Table &other);
		Table& operator=(const Table &other);
	public:
		Table(unsigned long long int id, std::string code, std::string location, unsigned short int capacity);
		~Table(void);

		// getters

		unsigned long long int	getId(void) const;
		std::string	getCode(void) const;
		std::string	getLocation(void) const;
		unsigned short int	getCapacity(void) const;
		bool	getHasPowerOutlet(void) const;
		bool	getHasComputer(void) const;
		bool	getIsAvailable(void) const;

		// setters

		void	setId(unsigned long long int id);
		void	setCode(std::string code);
		void	setLocation(std::string location);
		void	setCapacity(unsigned short int capacity);
		void	setHasPowerOutlet(bool power);
		void	setIsAvailable(bool available);
};

#endif /* TABLE_HPP */
