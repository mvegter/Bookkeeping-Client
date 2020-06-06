/*
 * CreateSubsystem.h
 *
 * A label attached to something for the purpose of identification.
 */

#ifndef _CreateSubsystem_H_
#define _CreateSubsystem_H_


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

class CreateSubsystem : public Object {
public:
	/*! \brief Constructor.
	 */
	CreateSubsystem();
	CreateSubsystem(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CreateSubsystem();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The label value of the subsystem.
	 */
	std::string getText();

	/*! \brief Set The label value of the subsystem.
	 */
	void setText(std::string  text);

private:
	std::string text;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CreateSubsystem_H_ */
