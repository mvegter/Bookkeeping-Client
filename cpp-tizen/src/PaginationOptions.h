/*
 * PaginationOptions.h
 *
 * Specifies the pagination requirements of a request.
 */

#ifndef _PaginationOptions_H_
#define _PaginationOptions_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Specifies the pagination requirements of a request.
 *
 *  \ingroup Models
 *
 */

class PaginationOptions : public Object {
public:
	/*! \brief Constructor.
	 */
	PaginationOptions();
	PaginationOptions(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PaginationOptions();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The numbers of items to return.
	 */
	int getLimit();

	/*! \brief Set The numbers of items to return.
	 */
	void setLimit(int  limit);
	/*! \brief Get The number of items to skip before starting to collect the result set.
	 */
	int getOffset();

	/*! \brief Set The number of items to skip before starting to collect the result set.
	 */
	void setOffset(int  offset);

private:
	int limit;
	int offset;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PaginationOptions_H_ */
