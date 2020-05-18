/*
 * ArrayOfLogsResponse.h
 *
 * Response containing multiple logs.
 */

#ifndef _ArrayOfLogsResponse_H_
#define _ArrayOfLogsResponse_H_


#include <string>
#include "ArrayOfLogsResponseMeta.h"
#include "Log.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Response containing multiple logs.
 *
 *  \ingroup Models
 *
 */

class ArrayOfLogsResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	ArrayOfLogsResponse();
	ArrayOfLogsResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ArrayOfLogsResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ArrayOfLogsResponseMeta getMeta();

	/*! \brief Set 
	 */
	void setMeta(ArrayOfLogsResponseMeta  meta);
	/*! \brief Get A list of Log objects.
	 */
	std::list<Log> getData();

	/*! \brief Set A list of Log objects.
	 */
	void setData(std::list <Log> data);

private:
	ArrayOfLogsResponseMeta meta;
	std::list <Log>data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ArrayOfLogsResponse_H_ */
