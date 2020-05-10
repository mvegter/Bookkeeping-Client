/*
 * ErrorResponse.h
 *
 * 
 */

#ifndef _ErrorResponse_H_
#define _ErrorResponse_H_


#include <string>
#include "Error.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ErrorResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	ErrorResponse();
	ErrorResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ErrorResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<Error> getErrors();

	/*! \brief Set 
	 */
	void setErrors(std::list <Error> errors);

private:
	std::list <Error>errors;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ErrorResponse_H_ */
