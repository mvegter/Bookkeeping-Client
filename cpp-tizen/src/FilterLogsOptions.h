/*
 * FilterLogsOptions.h
 *
 * Specifies the log related filter requirements for a request.
 */

#ifndef _FilterLogsOptions_H_
#define _FilterLogsOptions_H_


#include <string>
#include "FilterLogsTagOptions.h"
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
	/*! \brief Get The unique identifier of this entity.
	 */
	long long getParentLog();

	/*! \brief Set The unique identifier of this entity.
	 */
	void setParentLog(long long  parentLog);
	/*! \brief Get The unique identifier of this entity.
	 */
	long long getRootLog();

	/*! \brief Set The unique identifier of this entity.
	 */
	void setRootLog(long long  rootLog);
	/*! \brief Get 
	 */
	FilterLogsTagOptions getTag();

	/*! \brief Set 
	 */
	void setTag(FilterLogsTagOptions  tag);

private:
	LogOrigin origin;
	long long parentLog;
	long long rootLog;
	FilterLogsTagOptions tag;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FilterLogsOptions_H_ */
