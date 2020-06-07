/*
 * Subsystem.h
 *
 * A label attached to something for the purpose of identification.
 */

#ifndef _Subsystem_H_
#define _Subsystem_H_


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

class Subsystem : public Object {
public:
	/*! \brief Constructor.
	 */
	Subsystem();
	Subsystem(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Subsystem();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The unique identifier of this entity.
	 */
	long long getId();

	/*! \brief Set The unique identifier of this entity.
	 */
	void setId(long long  id);
	/*! \brief Get The label value of the subsystem.
	 */
	std::string getName();

	/*! \brief Set The label value of the subsystem.
	 */
	void setName(std::string  name);
	/*! \brief Get Date when the subsystem was created.
	 */
	std::string getCreatedAt();

	/*! \brief Set Date when the subsystem was created.
	 */
	void setCreatedAt(std::string  createdAt);
	/*! \brief Get Date when the subsystem was last updated.
	 */
	std::string getUpdateAt();

	/*! \brief Set Date when the subsystem was last updated.
	 */
	void setUpdateAt(std::string  updateAt);

private:
	long long id;
	std::string name;
	std::string createdAt;
	std::string updateAt;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Subsystem_H_ */
