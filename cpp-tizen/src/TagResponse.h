/*
 * TagResponse.h
 *
 * Response containing a single tag.
 */

#ifndef _TagResponse_H_
#define _TagResponse_H_


#include <string>
#include "Tag.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Response containing a single tag.
 *
 *  \ingroup Models
 *
 */

class TagResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	TagResponse();
	TagResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TagResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	Tag getData();

	/*! \brief Set 
	 */
	void setData(Tag  data);

private:
	Tag data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TagResponse_H_ */
