#ifndef ARTICLE_HPP
# define ARTICLE_HPP

# include <iostream>
# include <string>

class	Article {
	private:
		unsigned long long int	_id;
		std::string	_title;
		std::string	_author;
		std::string	_category;
		std::string	_language;
		std::string	_content;
		std::string	_createdAt;
		bool	_published;
		Article(void);
		Article(const Article &other);
		Article& operator=(const Article &other);
	public:

		// Constructors and Destructors

		Article(unsigned long long int id, std::string title, std::string, author, std::string category, std::string language);
		~Article(void);

		// getters

		unsigned long long int	getId(void) const;
		std::string	getTitle(void) const;
		std::string	getAuthor(void) const;
		std::string	getCategory(void) const;
		std::string	getLanguage(void) const;
		std::string	getContent(void) const;
		std::string	getCreatedAt(void) const;
		bool	getPublished(void) const;

		// setters

		void	setId(unsigned long long int id);
		void	setTitle(std::string title);
		void	setAuthor(std::string author);
		void	setCategory(std::string category);
		void	setLanguage(std::string language);
		void	setContent(std::string content);
		void	setCreatedAt(std::string createdAt);
		void	setPublished(bool published);
};

#endif /* ARTICLE_HPP */
