/*
 * FilterLogsTagOptions.h
 *
 * Specifies the tag related filter requirements for a request.
 */

#ifndef _FilterLogsTagOptions_H_
#define _FilterLogsTagOptions_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Specifies the tag related filter requirements for a request.
 *
 *  \ingroup Models
 *
 */

class FilterLogsTagOptions : public Object {
public:
	/*! \brief Constructor.
	 */
	FilterLogsTagOptions();
	FilterLogsTagOptions(char* str);

	/*! \brief Destructor.
	 */
	virtual ~FilterLogsTagOptions();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get CSV style string of EntityIds.
	 */
	std::string getValues();

	/*! \brief Set CSV style string of EntityIds.
	 */
	void setValues(std::string  values);
	/*! \brief Get The operation indicating the relation between the data.
	 */
	std::string getOperation();

	/*! \brief Set The operation indicating the relation between the data.
	 */
	void setOperation(std::string  operation);

private:
	std::string values;
	std::string operation;
	void __init();
	void __cleanup();

};
}
}

#endif /* _FilterLogsTagOptions_H_ */
