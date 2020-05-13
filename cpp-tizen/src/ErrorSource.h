/*
 * ErrorSource.h
 *
 * An object containing references to the source of the error.
 */

#ifndef _ErrorSource_H_
#define _ErrorSource_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief An object containing references to the source of the error.
 *
 *  \ingroup Models
 *
 */

class ErrorSource : public Object {
public:
	/*! \brief Constructor.
	 */
	ErrorSource();
	ErrorSource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ErrorSource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A pointer to the associated entity in the request document.
	 */
	std::string getPointer();

	/*! \brief Set A pointer to the associated entity in the request document.
	 */
	void setPointer(std::string  pointer);

private:
	std::string pointer;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ErrorSource_H_ */
