#ifndef _SubsystemManager_H_
#define _SubsystemManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ArrayOfSubsystemsResponse.h"
#include "CreateSubsystem.h"
#include "Errors.h"
#include "PaginationOptions.h"
#include "SubsystemResponse.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Subsystem Subsystem
 * \ingroup Operations
 *  @{
 */
class SubsystemManager {
public:
	SubsystemManager();
	virtual ~SubsystemManager();

/*! \brief Adds a new subsystem. *Synchronous*
 *
 * 
 * \param createSubsystem  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createSubsystemSync(char * accessToken,
	CreateSubsystem createSubsystem, 
	void(* handler)(SubsystemResponse, Error, void* )
	, void* userData);

/*! \brief Adds a new subsystem. *Asynchronous*
 *
 * 
 * \param createSubsystem  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createSubsystemAsync(char * accessToken,
	CreateSubsystem createSubsystem, 
	void(* handler)(SubsystemResponse, Error, void* )
	, void* userData);


/*! \brief Deletes a subsystem by Id. *Synchronous*
 *
 * 
 * \param subsystemId The id of the subsystem to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteSubsystemSync(char * accessToken,
	long long subsystemId, 
	void(* handler)(SubsystemResponse, Error, void* )
	, void* userData);

/*! \brief Deletes a subsystem by Id. *Asynchronous*
 *
 * 
 * \param subsystemId The id of the subsystem to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteSubsystemAsync(char * accessToken,
	long long subsystemId, 
	void(* handler)(SubsystemResponse, Error, void* )
	, void* userData);


/*! \brief Get a subsystem by Id. *Synchronous*
 *
 * 
 * \param subsystemId The id of the subsystem to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubsystemSync(char * accessToken,
	long long subsystemId, 
	void(* handler)(SubsystemResponse, Error, void* )
	, void* userData);

/*! \brief Get a subsystem by Id. *Asynchronous*
 *
 * 
 * \param subsystemId The id of the subsystem to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubsystemAsync(char * accessToken,
	long long subsystemId, 
	void(* handler)(SubsystemResponse, Error, void* )
	, void* userData);


/*! \brief List all subsystems. *Synchronous*
 *
 * 
 * \param page Specifies the pagination requirements.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool listSubsystemsSync(char * accessToken,
	PaginationOptions page, 
	void(* handler)(ArrayOfSubsystemsResponse, Error, void* )
	, void* userData);

/*! \brief List all subsystems. *Asynchronous*
 *
 * 
 * \param page Specifies the pagination requirements.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool listSubsystemsAsync(char * accessToken,
	PaginationOptions page, 
	void(* handler)(ArrayOfSubsystemsResponse, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "http://localhost/api";
	}
};
/** @}*/

}
}
#endif /* SubsystemManager_H_ */
