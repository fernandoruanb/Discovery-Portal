#ifndef LEARNINGPATH_HPP
# define LEARNINGPATH_HPP

# include "../Library/Book.hpp"
# include "./Article.hpp"
# include "./Course.hpp"
# include <algorithm>
# include <vector>
# include <iostream>
# include <string>

class LearningPath {
	private:
		unsigned long long int	_id;
		std::string	_title;
		std::string	_description;
		std::string	_level;
		std::vector<unsigned long long int>	_courseIds;
		std::vector<unsigned long long int>	_articleIds;
		std::vector<unsigned long long int>	_bookIds;

		LearningPath(void);
		LearningPath(const LearningPath& other);
		LearningPath& operator=(const LearningPath& other);

	public:
		LearningPath(unsigned long long int id, std::string title, std::string description, std::string level);
		~LearningPath(void);

		// getters

		unsigned long long int	getId(void) const;
		std::string	getTitle(void) const;
		std::string	getDescription(void) const;
		std::string	getLevel(void) const;
		std::vector<unsigned long long int>	getCourseIds(void) const;
		std::vector<unsigned long long int>	getArticleIds(void) const;
		std::vector<unsigned long long int>	getBookIds(void) const;
		
		// setters

		void	setId(unsigned long long int id);
		void	setTitle(std::string title);
		void	setDescription(std::string description);
		void	setLevel(std::string level);
		void	setCourseIds(std::vector<unsigned long long int> courseIds);
		void	setArticleIds(std::vector<unsigned long long int> articleIds);
		void	setBookIds(std::vector<unsigned long long int> bookIds);

		// methods

		bool	insertNewCourse(unsigned long long int courseId);
		bool	insertNewArticle(unsigned long long int articleId);
		bool	insertNewBook(unsigned long long int bookId);
		bool	removeCourse(unsigned long long int courseId);
		bool	removeArticle(unsigned long long int removeArticle);
		bool	removeBook(unsigned long long int removeBook);
}

#endif /* LEARNINGPATH_HPP */
