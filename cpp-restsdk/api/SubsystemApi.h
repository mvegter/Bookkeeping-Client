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
 * SubsystemApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_SubsystemApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_SubsystemApi_H_


#include "../ApiClient.h"

#include "ArrayOfSubsystemsResponse.h"
#include "CreateSubsystem.h"
#include "Errors.h"
#include "PaginationOptions.h"
#include "SubsystemResponse.h"


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  SubsystemApi 
{
public:

    explicit SubsystemApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SubsystemApi();

    /// <summary>
    /// Adds a new subsystem
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="createSubsystem"></param>
    pplx::task<std::shared_ptr<SubsystemResponse>> createSubsystem(
        std::shared_ptr<CreateSubsystem> createSubsystem
    ) const;
    /// <summary>
    /// Deletes a subsystem by Id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subsystemId">The id of the subsystem to retrieve</param>
    pplx::task<std::shared_ptr<SubsystemResponse>> deleteSubsystem(
        int64_t subsystemId
    ) const;
    /// <summary>
    /// Get a subsystem by Id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subsystemId">The id of the subsystem to retrieve</param>
    pplx::task<std::shared_ptr<SubsystemResponse>> getSubsystem(
        int64_t subsystemId
    ) const;
    /// <summary>
    /// List all subsystems
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="page">Specifies the pagination requirements. (optional, default to new PaginationOptions())</param>
    pplx::task<std::shared_ptr<ArrayOfSubsystemsResponse>> listSubsystems(
        boost::optional<std::shared_ptr<PaginationOptions>> page
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_SubsystemApi_H_ */

