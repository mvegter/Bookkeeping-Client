/*
 * Tag.h
 *
 * A label attached to something for the purpose of identification.
 */

#ifndef _Tag_H_
#define _Tag_H_


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

class Tag : public Object {
public:
	/*! \brief Constructor.
	 */
	Tag();
	Tag(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Tag();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Id of the tag.
	 */
	long long getId();

	/*! \brief Set Id of the tag.
	 */
	void setId(long long  id);
	/*! \brief Get The label value of the tag.
	 */
	std::string getText();

	/*! \brief Set The label value of the tag.
	 */
	void setText(std::string  text);
	/*! \brief Get Date when the tag was created.
	 */
	std::string getCreatedAt();

	/*! \brief Set Date when the tag was created.
	 */
	void setCreatedAt(std::string  createdAt);
	/*! \brief Get Date when the tag was last updated.
	 */
	std::string getUpdateAt();

	/*! \brief Set Date when the tag was last updated.
	 */
	void setUpdateAt(std::string  updateAt);

private:
	long long id;
	std::string text;
	std::string createdAt;
	std::string updateAt;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Tag_H_ */
