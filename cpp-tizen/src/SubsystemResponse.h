/*
 * SubsystemResponse.h
 *
 * Response containing a single subsystem.
 */

#ifndef _SubsystemResponse_H_
#define _SubsystemResponse_H_


#include <string>
#include "Subsystem.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Response containing a single subsystem.
 *
 *  \ingroup Models
 *
 */

class SubsystemResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	SubsystemResponse();
	SubsystemResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SubsystemResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	Subsystem getData();

	/*! \brief Set 
	 */
	void setData(Subsystem  data);

private:
	Subsystem data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SubsystemResponse_H_ */
