#ifndef _DefaultManager_H_
#define _DefaultManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ApiInformation.h"
#include "DataResponse.h"
#include "DeployInformation.h"
#include "ErrorResponse.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Default Default
 * \ingroup Operations
 *  @{
 */
class DefaultManager {
public:
	DefaultManager();
	virtual ~DefaultManager();

/*! \brief Adds a new log. *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createLogSync(char * accessToken,
	
	void(* handler)(DataResponse, Error, void* )
	, void* userData);

/*! \brief Adds a new log. *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createLogAsync(char * accessToken,
	
	void(* handler)(DataResponse, Error, void* )
	, void* userData);


/*! \brief Get deploy information. *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeployInformationSync(char * accessToken,
	
	void(* handler)(DeployInformation, Error, void* )
	, void* userData);

/*! \brief Get deploy information. *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDeployInformationAsync(char * accessToken,
	
	void(* handler)(DeployInformation, Error, void* )
	, void* userData);


/*! \brief Gets a log by Id. *Synchronous*
 *
 * 
 * \param id The id of the log to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLogByIdSync(char * accessToken,
	long long id, 
	void(* handler)(DataResponse, Error, void* )
	, void* userData);

/*! \brief Gets a log by Id. *Asynchronous*
 *
 * 
 * \param id The id of the log to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLogByIdAsync(char * accessToken,
	long long id, 
	void(* handler)(DataResponse, Error, void* )
	, void* userData);


/*! \brief Get server information. *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServerInformationSync(char * accessToken,
	
	void(* handler)(ApiInformation, Error, void* )
	, void* userData);

/*! \brief Get server information. *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getServerInformationAsync(char * accessToken,
	
	void(* handler)(ApiInformation, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "http://localhost/api";
	}
};
/** @}*/

}
}
#endif /* DefaultManager_H_ */
