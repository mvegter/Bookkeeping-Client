#ifndef _TagManager_H_
#define _TagManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ArrayOfTagsResponse.h"
#include "Errors.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Tag Tag
 * \ingroup Operations
 *  @{
 */
class TagManager {
public:
	TagManager();
	virtual ~TagManager();

/*! \brief Lists all tags associated with a log. *Synchronous*
 *
 * 
 * \param logId The id of the log to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool listTagsByLogIdSync(char * accessToken,
	long long logId, 
	void(* handler)(ArrayOfTagsResponse, Error, void* )
	, void* userData);

/*! \brief Lists all tags associated with a log. *Asynchronous*
 *
 * 
 * \param logId The id of the log to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool listTagsByLogIdAsync(char * accessToken,
	long long logId, 
	void(* handler)(ArrayOfTagsResponse, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "http://localhost/api";
	}
};
/** @}*/

}
}
#endif /* TagManager_H_ */
