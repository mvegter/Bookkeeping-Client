/*
 * LogTreeResponse.h
 *
 * Response containing a single log tree.
 */

#ifndef _LogTreeResponse_H_
#define _LogTreeResponse_H_


#include <string>
#include "LogTree.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Response containing a single log tree.
 *
 *  \ingroup Models
 *
 */

class LogTreeResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	LogTreeResponse();
	LogTreeResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LogTreeResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	LogTree getData();

	/*! \brief Set 
	 */
	void setData(LogTree  data);

private:
	LogTree data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LogTreeResponse_H_ */
