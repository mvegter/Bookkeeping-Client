/*
 * PaginationMeta.h
 *
 * The metadata related to pagination.
 */

#ifndef _PaginationMeta_H_
#define _PaginationMeta_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The metadata related to pagination.
 *
 *  \ingroup Models
 *
 */

class PaginationMeta : public Object {
public:
	/*! \brief Constructor.
	 */
	PaginationMeta();
	PaginationMeta(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PaginationMeta();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The total number of pages which contain data.
	 */
	int getPageCount();

	/*! \brief Set The total number of pages which contain data.
	 */
	void setPageCount(int  pageCount);
	/*! \brief Get The total number of elements in the collection
	 */
	int getTotalCount();

	/*! \brief Set The total number of elements in the collection
	 */
	void setTotalCount(int  totalCount);

private:
	int pageCount;
	int totalCount;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PaginationMeta_H_ */
