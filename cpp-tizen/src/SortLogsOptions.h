/*
 * SortLogsOptions.h
 *
 * Specifies the sorting requirements of a request.
 */

#ifndef _SortLogsOptions_H_
#define _SortLogsOptions_H_


#include <string>
#include "SortOrder.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Specifies the sorting requirements of a request.
 *
 *  \ingroup Models
 *
 */

class SortLogsOptions : public Object {
public:
	/*! \brief Constructor.
	 */
	SortLogsOptions();
	SortLogsOptions(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SortLogsOptions();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	SortOrder getId();

	/*! \brief Set 
	 */
	void setId(SortOrder  id);
	/*! \brief Get 
	 */
	SortOrder getText();

	/*! \brief Set 
	 */
	void setText(SortOrder  text);

private:
	SortOrder id;
	SortOrder text;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SortLogsOptions_H_ */
