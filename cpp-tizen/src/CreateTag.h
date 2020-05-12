/*
 * CreateTag.h
 *
 * A label attached to something for the purpose of identification.
 */

#ifndef _CreateTag_H_
#define _CreateTag_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A label attached to something for the purpose of identification.
 *
 *  \ingroup Models
 *
 */

class CreateTag : public Object {
public:
	/*! \brief Constructor.
	 */
	CreateTag();
	CreateTag(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CreateTag();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The label value of the tag.
	 */
	std::string getText();

	/*! \brief Set The label value of the tag.
	 */
	void setText(std::string  text);

private:
	std::string text;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CreateTag_H_ */
