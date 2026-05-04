#ifndef SHELF_HPP
# define SHELF_HPP

# include <iostream>
# include <string>

class Shelf{
	private:
		unsigned long long int	_id;
		std::string	_code;
		std::string	_section;
		unsigned short int	_floor;
		unsigned int	_capacity;
		bool	_available;
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
};

#endif /* SHELF_HPP */
