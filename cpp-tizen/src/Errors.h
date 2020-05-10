/*
 * Errors.h
 *
 * A list of Error objects.
 */

#ifndef _Errors_H_
#define _Errors_H_


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


/*! \brief A list of Error objects.
 *
 *  \ingroup Models
 *
 */

class Errors : public Object {
public:
	/*! \brief Constructor.
	 */
	Errors();
	Errors(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Errors();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A list of Error objects.
	 */
	std::list<Error> getErrors();

	/*! \brief Set A list of Error objects.
	 */
	void setErrors(std::list <Error> errors);

private:
	std::list <Error>errors;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Errors_H_ */
