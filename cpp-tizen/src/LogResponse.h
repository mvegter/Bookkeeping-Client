/*
 * LogResponse.h
 *
 * Response containing a single log.
 */

#ifndef _LogResponse_H_
#define _LogResponse_H_


#include <string>
#include "Log.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Response containing a single log.
 *
 *  \ingroup Models
 *
 */

class LogResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	LogResponse();
	LogResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LogResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	Log getData();

	/*! \brief Set 
	 */
	void setData(Log  data);

private:
	Log data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LogResponse_H_ */
