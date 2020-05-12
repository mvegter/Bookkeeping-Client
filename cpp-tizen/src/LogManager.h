#ifndef _LogManager_H_
#define _LogManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ArrayOfLogsResponse.h"
#include "ArrayOfTagsResponse.h"
#include "CreateLog.h"
#include "Errors.h"
#include "LogResponse.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Log Log
 * \ingroup Operations
 *  @{
 */
class LogManager {
public:
	LogManager();
	virtual ~LogManager();

/*! \brief Adds a new log. *Synchronous*
 *
 * 
 * \param createLog  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createLogSync(char * accessToken,
	CreateLog createLog, 
	void(* handler)(LogResponse, Error, void* )
	, void* userData);

/*! \brief Adds a new log. *Asynchronous*
 *
 * 
 * \param createLog  *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createLogAsync(char * accessToken,
	CreateLog createLog, 
	void(* handler)(LogResponse, Error, void* )
	, void* userData);


/*! \brief Gets a log by Id. *Synchronous*
 *
 * 
 * \param logId The id of the log to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLogByIdSync(char * accessToken,
	long long logId, 
	void(* handler)(LogResponse, Error, void* )
	, void* userData);

/*! \brief Gets a log by Id. *Asynchronous*
 *
 * 
 * \param logId The id of the log to retrieve *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getLogByIdAsync(char * accessToken,
	long long logId, 
	void(* handler)(LogResponse, Error, void* )
	, void* userData);


/*! \brief List all logs. *Synchronous*
 *
 * 
 * \param filterLeft_Square_BracketoriginRight_Square_Bracket Filter logs by their origin
 * \param pageLeft_Square_BracketoffsetRight_Square_Bracket The number of items to skip before starting to collect the result set.
 * \param pageLeft_Square_BracketlimitRight_Square_Bracket The numbers of items to return.
 * \param sort The sort order of the returned items.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool listLogsSync(char * accessToken,
	std::string filterLeft_Square_BracketoriginRight_Square_Bracket, int pageLeft_Square_BracketoffsetRight_Square_Bracket, int pageLeft_Square_BracketlimitRight_Square_Bracket, std::list<std::string> sort, 
	void(* handler)(ArrayOfLogsResponse, Error, void* )
	, void* userData);

/*! \brief List all logs. *Asynchronous*
 *
 * 
 * \param filterLeft_Square_BracketoriginRight_Square_Bracket Filter logs by their origin
 * \param pageLeft_Square_BracketoffsetRight_Square_Bracket The number of items to skip before starting to collect the result set.
 * \param pageLeft_Square_BracketlimitRight_Square_Bracket The numbers of items to return.
 * \param sort The sort order of the returned items.
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool listLogsAsync(char * accessToken,
	std::string filterLeft_Square_BracketoriginRight_Square_Bracket, int pageLeft_Square_BracketoffsetRight_Square_Bracket, int pageLeft_Square_BracketlimitRight_Square_Bracket, std::list<std::string> sort, 
	void(* handler)(ArrayOfLogsResponse, Error, void* )
	, void* userData);


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
#endif /* LogManager_H_ */
