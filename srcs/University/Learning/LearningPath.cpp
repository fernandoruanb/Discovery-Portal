#include "../../../includes/University/Learning/LearningPath.hpp"

LearningPath::LearningPath(unsigned long long int id, std::string title, std::string description, std::string level) :
	_id(id),
	_title(title),
	_description(description),
	_level(level),
	_courseIds(),
	_articleIds(),
	_bookIds()
{
	std::cout << "LearningPath " << title << " created" << std::endl;
}

~LearningPath(void) {
	std::cout << "LearningPath destroyed" << std::endl;
}

unsigned long long int	LearningPath::getId(void) const {
	return (this->_id);
}

std::string	LearningPath::getTitle(void) const {
	return (this->_title);
}

std::string	LearningPath::getDescription(void) const {
	return (this->_description);
}

std::string	LearningPath::getLevel(void) const {
	return (this->_level);
}

std::vector<unsigned long long int>	LearningPath::getCourseIds(void) const {
	return (this->_courseIds);
}

std::vector<unsigned long long int>	LearningPath::getArticleIds(void) const {
	return (this->_articleIds);
}

std::vector<unsigned long long int>	LearningPath::getBookIds(void) const {
	return (this->_bookIds);
}

void	LearningPath::setId(unsigned long long int id) {
	this->_id = id;
}

void	LearningPath::setTitle(std::string title) {
	this->_title = title;
}

void	LearningPath::setDescription(std::string description) {
	this->_description = description;
}

void	LearningPath::setLevel(std::string level) {
	this->_level = level;
}

void	LearningPath::setCourseIds(std::vector<unsigned long long int> courseIds) {
	this->_courseIds = courseIds;
}

void	LearningPath::setArticleIds(std::vector<unsigned long long int> articleIds) {
	this->_articleIds = articleIds;
}

void	LearningPath::setBookIds(std::vector<unsigned long long int> bookIds) {
	this->_bookIds = bookIds;
}

bool	LearningPath::insertNewCourse(unsigned long long int courseId) {
	std::vector<unsigned long long int>::iterator it;

	it = std::find_if(
		this->_courseIds.begin(), 
		this->courseIds.end(),
		[courseId](const LearningPath &path) {
			return path.getId() == courseId;
		}
	);

	if (it == this->_courseIds.end()) {
		this->courseIds.push_back(courseId);
		return true;
	}
	return false;
}

bool    LearningPath::insertNewArticle(unsigned long long int articleId) {
        std::vector<unsigned long long int>::iterator it;

        it = std::find_if(
                this->_articleIds.begin(),
                this->articleIds.end(),
                [articleId](const LearningPath &path) {
                        return path.getId() == articleId;
                }
        );

        if (it == this->_articleIds.end()) {
                this->articleIds.push_back(articleId);
                return true;
        }
        return false;
}

bool    LearningPath::insertNewBook(unsigned long long int bookId) {
        std::vector<unsigned long long int>::iterator it;

        it = std::find_if(
                this->_bookIds.begin(),
                this->bookIds.end(),
                [bookId](const LearningPath &path) {
                        return path.getId() == bookId;
                }
        );

        if (it == this->_bookIds.end()) {
                this->bookIds.push_back(bookId);
                return true;
        }
        return false;
}

bool	LearningPath::removeCourse(unsigned long long int courseId) {
	std::vector<unsigned long long int>::iterator it;

	it = std::find_if(
		this->_courseIds.begin(), 
		this->_courseIds.end(),
		[courseId](const LearningPath &path) {
			return path.getId() == courseId;
		}
	);

	if (it == this->_courseIds.end())
		return false;
	this->_courseIds.erase(it);
	return true;
}

bool    LearningPath::removeArticle(unsigned long long int articleId) {
        std::vector<unsigned long long int>::iterator it;

        it = std::find_if(
                this->_articleIds.begin(), 
                this->_articleIds.end(),
                [articleId](const LearningPath &path) {
                        return path.getId() == articleId;
                }
        );

        if (it == this->_articleIds.end())
                return false;
        this->_articleIds.erase(it);
        return true;
}

bool    LearningPath::removeBook(unsigned long long int bookId) {
        std::vector<unsigned long long int>::iterator it;

        it = std::find_if(
                this->_bookIds.begin(), 
                this->_bookIds.end(),
                [bookId](const LearningPath &path) {
                        return path.getId() == bookId;
                }
        );

        if (it == this->_bookIds.end())
                return false;
        this->_bookIds.erase(it);
        return true;
}

