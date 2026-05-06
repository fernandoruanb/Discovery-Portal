#include "../../../includes/University/Library/Article.hpp"

Article::Article(unsigned long long int id, std::string title, std::string author, std::string category, std::string language) :
	_id(id),
	_title(title),
	_author(author),
	_category(category),
	_language(language)
{
	std::cout << "Article " << title << " created" << std::endl;
}

Article::~Article(void) {
	std::cout << "Article destroyed" << std::endl;
}

unsigned long long int	Article::getId(void) const {
	return (this->_id);
}

std::string	Article::getTitle(void) const {
	return (this->_title);
}

std::string	Article::getAuthor(void) const {
	return (this->_author);
}

std::string	Article::getCategory(void) const {
	return (this->_category);

std::string	Article::getLanguage(void) const {
	return (this->_content);
}

std::string	Article::getContent(void) const {
	return (this->_createdAt);
}

bool	Article::getPublished(void) const {
	return (this->_published);
}

void	Article::setId(unsigned long long int id) {
	this->_id = id;
}

void	Article::setTitle(std::string title) {
	this->_title = title;
}

void	Article::setAuthor(std::string author) {
	this->author = author;
}

void	Article::setCategory(std::string category) {
	this->_category = category;
}

void	Article::setContent(std::string content) {
	this->_content = content;
}

void	Article::setCreatedAt(std::string created_at) {
	this->_createdAt = created_at;
}

void	Article::setPublished(bool published) {
	this->published = published;
}
