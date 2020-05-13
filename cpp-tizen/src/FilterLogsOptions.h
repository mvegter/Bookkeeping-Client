/*
 * FilterLogsOptions.h
 *
 * Specifies the log related filter requirements for a request.
 */

#ifndef _FilterLogsOptions_H_
#define _FilterLogsOptions_H_


#include <string>
#include "LogOrigin.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Specifies the log related filter requirements for a request.
 *
 *  \ingroup Models
 *
 */

class FilterLogsOptions : public Object {
public:
	/*! \brief Constructor.
	 */
	FilterLogsOptions();
	FilterLogsOptions(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FilterLogsOptions();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	LogOrigin getOrigin();

	/*! \brief Set 
	 */
	void setOrigin(LogOrigin  origin);

private:
	LogOrigin origin;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FilterLogsOptions_H_ */
