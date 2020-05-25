/*
 * LogTree.h
 *
 * Describes an intervention or an event that happened.
 */

#ifndef _LogTree_H_
#define _LogTree_H_


#include <string>
#include "LogOrigin.h"
#include "LogSubtype.h"
#include "Tag.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Describes an intervention or an event that happened.
 *
 *  \ingroup Models
 *
 */

class LogTree : public Object {
public:
	/*! \brief Constructor.
	 */
	LogTree();
	LogTree(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LogTree();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The unique identifier of this entity.
	 */
	long long getId();

	/*! \brief Set The unique identifier of this entity.
	 */
	void setId(long long  id);
	/*! \brief Get Name of the author.
	 */
	std::string getAuthorId();

	/*! \brief Set Name of the author.
	 */
	void setAuthorId(std::string  authorId);
	/*! \brief Get Title of the log.
	 */
	std::string getTitle();

	/*! \brief Set Title of the log.
	 */
	void setTitle(std::string  title);
	/*! \brief Get Body of the log.
	 */
	std::string getText();

	/*! \brief Set Body of the log.
	 */
	void setText(std::string  text);
	/*! \brief Get Unix timestamp of the creation date time.
	 */
	long long getCreationTime();

	/*! \brief Set Unix timestamp of the creation date time.
	 */
	void setCreationTime(long long  creationTime);
	/*! \brief Get 
	 */
	LogOrigin getOrigin();

	/*! \brief Set 
	 */
	void setOrigin(LogOrigin  origin);
	/*! \brief Get 
	 */
	LogSubtype getSubtype();

	/*! \brief Set 
	 */
	void setSubtype(LogSubtype  subtype);
	/*! \brief Get A list of Tag objects.
	 */
	std::list<Tag> getTags();

	/*! \brief Set A list of Tag objects.
	 */
	void setTags(std::list <Tag> tags);
	/*! \brief Get The unique identifier of this entity.
	 */
	long long getRootLogId();

	/*! \brief Set The unique identifier of this entity.
	 */
	void setRootLogId(long long  rootLogId);
	/*! \brief Get The unique identifier of this entity.
	 */
	long long getParentLogId();

	/*! \brief Set The unique identifier of this entity.
	 */
	void setParentLogId(long long  parentLogId);
	/*! \brief Get A list of Log tree objects.
	 */
	std::list<LogTree> getChildren();

	/*! \brief Set A list of Log tree objects.
	 */
	void setChildren(std::list <LogTree> children);

private:
	long long id;
	std::string authorId;
	std::string title;
	std::string text;
	long long creationTime;
	LogOrigin origin;
	LogSubtype subtype;
	std::list <Tag>tags;
	long long rootLogId;
	long long parentLogId;
	std::list <LogTree>children;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LogTree_H_ */
