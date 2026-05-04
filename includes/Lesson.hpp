#ifndef LESSON_HPP
# define LESSON_HPP

# include <iostream>
# include <string>

class Lesson {
	private:
		unsigned long long int	_id;
		unsigned long long int	_courseId;
		std::string	_title;
		std::string	_content;
		unsigned long long int	_order;
		std::string	_duration;
		bool	_published;
		Lesson(void);
		Lesson(const Lesson &other);
		Lesson&	operator=(const Lesson &other);
	public:

		// constructors and destructors

		Lesson(unsigned long long int _id, unsigned long long int _courseId, std::string title, std::string content);
		~Lesson(void);

		// getters

		unsigned long long int	getId(void) const;
		unsigned long long int	getCourseId(void) const;
		std::string	getTitle(void) const;
		std::string	getContent(void) const;
		unsigned long long int	getOrder(void) const;
		std::string	getDuration(void) const;
		bool	getPublished(void) const;
		
		// setters

		void	setId(unsigned long long int id);
		void	setCourseId(unsigned long long int courseId);
		void	setTitle(std::string title);
		void	setContent(std::string content);
		void	setOrder(unsigned long long int order);
		void	setDuration(std::string duration);
		void	setPublished(bool published);
};

#endif /* LESSON_HPP */
