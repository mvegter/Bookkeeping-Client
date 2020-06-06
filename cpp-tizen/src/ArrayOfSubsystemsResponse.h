/*
 * ArrayOfSubsystemsResponse.h
 *
 * Response containing multiple subsystems.
 */

#ifndef _ArrayOfSubsystemsResponse_H_
#define _ArrayOfSubsystemsResponse_H_


#include <string>
#include "ArrayOfSubsystemsResponseMeta.h"
#include "Subsystem.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Response containing multiple subsystems.
 *
 *  \ingroup Models
 *
 */

class ArrayOfSubsystemsResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	ArrayOfSubsystemsResponse();
	ArrayOfSubsystemsResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ArrayOfSubsystemsResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ArrayOfSubsystemsResponseMeta getMeta();

	/*! \brief Set 
	 */
	void setMeta(ArrayOfSubsystemsResponseMeta  meta);
	/*! \brief Get A list of Subsystem objects.
	 */
	std::list<Subsystem> getData();

	/*! \brief Set A list of Subsystem objects.
	 */
	void setData(std::list <Subsystem> data);

private:
	ArrayOfSubsystemsResponseMeta meta;
	std::list <Subsystem>data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ArrayOfSubsystemsResponse_H_ */
