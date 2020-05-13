/*
 * SortOrder.h
 *
 * Specifies the sorting direction of a sorting option.
 */

#ifndef _SortOrder_H_
#define _SortOrder_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Specifies the sorting direction of a sorting option.
 *
 *  \ingroup Models
 *
 */

class SortOrder : public Object {
public:
	/*! \brief Constructor.
	 */
	SortOrder();
	SortOrder(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SortOrder();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _SortOrder_H_ */
