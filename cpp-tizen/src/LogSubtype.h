/*
 * LogSubtype.h
 *
 * The subtype of a Log.
 */

#ifndef _LogSubtype_H_
#define _LogSubtype_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The subtype of a Log.
 *
 *  \ingroup Models
 *
 */

class LogSubtype : public Object {
public:
	/*! \brief Constructor.
	 */
	LogSubtype();
	LogSubtype(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LogSubtype();

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

#endif /* _LogSubtype_H_ */
