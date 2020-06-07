/*
 * ArrayOfSubsystemsResponseMeta.h
 *
 * The metadata related to an array of subsystems response.
 */

#ifndef _ArrayOfSubsystemsResponseMeta_H_
#define _ArrayOfSubsystemsResponseMeta_H_


#include <string>
#include "PaginationMeta.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The metadata related to an array of subsystems response.
 *
 *  \ingroup Models
 *
 */

class ArrayOfSubsystemsResponseMeta : public Object {
public:
	/*! \brief Constructor.
	 */
	ArrayOfSubsystemsResponseMeta();
	ArrayOfSubsystemsResponseMeta(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ArrayOfSubsystemsResponseMeta();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	PaginationMeta getPage();

	/*! \brief Set 
	 */
	void setPage(PaginationMeta  page);

private:
	PaginationMeta page;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ArrayOfSubsystemsResponseMeta_H_ */
