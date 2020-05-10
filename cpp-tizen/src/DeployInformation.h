/*
 * DeployInformation.h
 *
 * 
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


/*! \brief 
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

	/*! \brief Get 
	 */
	long long getAge();

	/*! \brief Set 
	 */
	void setAge(long long  age);
	/*! \brief Get 
	 */
	long long getStart();

	/*! \brief Set 
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
