/*
 * ArrayOfTagsResponse.h
 *
 * Response containing multiple tags.
 */

#ifndef _ArrayOfTagsResponse_H_
#define _ArrayOfTagsResponse_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Response containing multiple tags.
 *
 *  \ingroup Models
 *
 */

class ArrayOfTagsResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	ArrayOfTagsResponse();
	ArrayOfTagsResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ArrayOfTagsResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A list of Tag objects.
	 */
	std::list<std::string> getData();

	/*! \brief Set A list of Tag objects.
	 */
	void setData(std::list <std::string> data);

private:
	std::list <std::string>data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ArrayOfTagsResponse_H_ */
