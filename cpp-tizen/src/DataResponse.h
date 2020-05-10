/*
 * DataResponse.h
 *
 * 
 */

#ifndef _DataResponse_H_
#define _DataResponse_H_


#include <string>
#include "OneOf<array,object>.h"
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

class DataResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	DataResponse();
	DataResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DataResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	OneOf&lt;array,object&gt; getData();

	/*! \brief Set 
	 */
	void setData(OneOf&lt;array,object&gt;  data);

private:
	OneOf&lt;array,object&gt; data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DataResponse_H_ */
