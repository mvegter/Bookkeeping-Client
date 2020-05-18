/*
 * Log.h
 *
 * Describes an intervention or an event that happened.
 */

#ifndef _Log_H_
#define _Log_H_


#include <string>
#include "LogOrigin.h"
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

class Log : public Object {
public:
	/*! \brief Constructor.
	 */
	Log();
	Log(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Log();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The unique identifier of this entity.
	 */
	long long getEntryId();

	/*! \brief Set The unique identifier of this entity.
	 */
	void setEntryId(long long  entryId);
	/*! \brief Get Body of the log.
	 */
	std::string getTitle();

	/*! \brief Set Body of the log.
	 */
	void setTitle(std::string  title);
	/*! \brief Get Title of the log.
	 */
	std::string getText();

	/*! \brief Set Title of the log.
	 */
	void setText(std::string  text);
	/*! \brief Get 
	 */
	LogOrigin getOrigin();

	/*! \brief Set 
	 */
	void setOrigin(LogOrigin  origin);
	/*! \brief Get A list of Tag objects.
	 */
	std::list<Tag> getTags();

	/*! \brief Set A list of Tag objects.
	 */
	void setTags(std::list <Tag> tags);

private:
	long long entryId;
	std::string title;
	std::string text;
	LogOrigin origin;
	std::list <Tag>tags;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Log_H_ */
