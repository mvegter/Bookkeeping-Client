/*
 * ApiInformation.h
 *
 * 
 */

#ifndef _ApiInformation_H_
#define _ApiInformation_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ApiInformation : public Object {
public:
	/*! \brief Constructor.
	 */
	ApiInformation();
	ApiInformation(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ApiInformation();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getVersion();

	/*! \brief Set 
	 */
	void setVersion(std::string  version);

private:
	std::string name;
	std::string version;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ApiInformation_H_ */
