/*
 * CreateLog.h
 *
 * Describes an intervention or an event that happened.
 */

#ifndef _CreateLog_H_
#define _CreateLog_H_


#include <string>
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

class CreateLog : public Object {
public:
	/*! \brief Constructor.
	 */
	CreateLog();
	CreateLog(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CreateLog();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

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

private:
	std::string title;
	std::string text;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CreateLog_H_ */
