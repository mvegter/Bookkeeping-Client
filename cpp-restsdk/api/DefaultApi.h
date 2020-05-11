/**
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * DefaultApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_DefaultApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_DefaultApi_H_


#include "../ApiClient.h"

#include "ApiInformation.h"
#include "DeployInformation.h"
#include "Errors.h"


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  DefaultApi 
{
public:

    explicit DefaultApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~DefaultApi();

    /// <summary>
    /// Get deploy information
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<DeployInformation>> getDeployInformation(
    ) const;
    /// <summary>
    /// Get server information
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<ApiInformation>> getServerInformation(
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_DefaultApi_H_ */
