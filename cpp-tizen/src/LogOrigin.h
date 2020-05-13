/*
 * LogOrigin.h
 *
 * Type of creator.
 */

#ifndef _LogOrigin_H_
#define _LogOrigin_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Type of creator.
 *
 *  \ingroup Models
 *
 */

class LogOrigin : public Object {
public:
	/*! \brief Constructor.
	 */
	LogOrigin();
	LogOrigin(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LogOrigin();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _LogOrigin_H_ */
