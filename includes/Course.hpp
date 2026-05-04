#ifndef COURSE_HPP
# define COURSE_HPP

# include <iostream>
# include <string>

class	Course {
	private:
		unsigned long long int _id;
		std::string	_title;
		std::string	_instructor;
		std::string	_category;
		std::string	_language;
		std::string	_description;
		std::string	_duration;
		bool	_published;

		Course(void);
		Course(const Course &other);
		Course& operator=(const Course &other);
	public:
		// Constructors and Destructors
		Course(unsigned long long int id, std::string title, std::string instructor, std::string category);
		~Course(void);

		// getters

			unsigned long long int	getId(void) const;
			std::string	getTitle(void) const;
			std::string	getInstructor(void) const;
			std::string	getCategory(void) const;
			std::string	getLanguage(void) const;
			std::string	getDescription(void) const;
			std::string	getDuration(void) const;
			bool	getPublished(void) const;

		// setters
			void	setId(unsigned long long int id);
			void	setTitle(std::string title);
			void	setInstructor(std::string instructor);
			void	setCategory(std::string category);
			void	setLanguage(std::string language);
			void	setDescription(std::string description);
			void	setDuration(std::string duration);
			void	setPublished(bool published);		
};

#endif /* COURSE_HPP */
