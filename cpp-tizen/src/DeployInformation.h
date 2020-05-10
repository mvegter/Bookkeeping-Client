/*
 * DeployInformation.h
 *
 * Deploy information
 */

#ifndef _DeployInformation_H_
#define _DeployInformation_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Deploy information
 *
 *  \ingroup Models
 *
 */

class DeployInformation : public Object {
public:
	/*! \brief Constructor.
	 */
	DeployInformation();
	DeployInformation(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DeployInformation();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The number of seconds that the server is online.
	 */
	long long getAge();

	/*! \brief Set The number of seconds that the server is online.
	 */
	void setAge(long long  age);
	/*! \brief Get The unix timestamp of the moment that the the server went online.
	 */
	long long getStart();

	/*! \brief Set The unix timestamp of the moment that the the server went online.
	 */
	void setStart(long long  start);

private:
	long long age;
	long long start;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DeployInformation_H_ */
