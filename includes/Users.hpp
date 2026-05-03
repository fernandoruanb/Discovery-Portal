#ifndef USER_HPP
# define USER_HPP

# include <iostream>
# include <string>

class User {
	private:
		unsigned long long int	_id;
		std::string	_registrationNumber; // institutional number
		std::string	_name;
		std::string	_email;
		std::string	_course;
		std::string	_level; // novice, reader, master...
		std::string	_password;
		std::string	_role; // teacher, student, admin, librarian
		std::string	_status; // actived, suspended, blocked, graduated

		// to avoid copies, we do not want them

		Users(void); // I do not intend to have empty Users, default users
		Users(const User& other);
		Users& operator=(const User& other);
		
	public:
		User(std::string name, std::string email, std::string password, std::string registrationNumber);
		~User(void);

		// getters

		unsigned long long int	getId(void) const;
		std::string	getRegistrationNumber(void) const;
		std::string	getName(void) const;
		std::string	getEmail(void) const;
		std::string	getCourse(void)	const; // to check popularity by course of student
		std::string	getLevel(void) const; // to congratulate the student that read a lot
		std::string	getRole(void) const;
		std::string	getStatus(void) const;

		// setters

		void	setName(std::string name);
		void	setEmail(std::string email);
		void	setCourse(std::string course);
		void	setLevel(std::string level);
		void	setRole(std::string role);
		void	setStatus(std::string status);
};

#endif /* USER_HPP */
