#ifndef USERS_HPP
# define USERS_HPP

# include <iostream>
# include <string>

class Users {
	private:
		int	_id;
		std::string	_name;
		std::string	_email;
		std::string	_password;
		Users(void); // I do not intend to have empty Users, default users
		
	public:
		Users(std::string name, std::string email, std::string password);
		std::string	getName(void) const;
		std::string	getEmail(void) const;
		void	setName(std::string name);
		void	setEmail(std::string email);
}

#endif /* USERS_HPP */
