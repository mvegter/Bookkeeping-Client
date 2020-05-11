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
 * TagApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_TagApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_TagApi_H_


#include "../ApiClient.h"

#include "ArrayOfTagsResponse.h"
#include "Errors.h"


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  TagApi 
{
public:

    explicit TagApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~TagApi();

    /// <summary>
    /// List all tags
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pageLeft_Square_BracketoffsetRight_Square_Bracket">The number of items to skip before starting to collect the result set. (optional, default to 0)</param>
    /// <param name="pageLeft_Square_BracketlimitRight_Square_Bracket">The numbers of items to return. (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ArrayOfTagsResponse>> listTags(
        boost::optional<int32_t> pageLeft_Square_BracketoffsetRight_Square_Bracket,
        boost::optional<int32_t> pageLeft_Square_BracketlimitRight_Square_Bracket
    ) const;
    /// <summary>
    /// Lists all tags associated with a log
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="logId">The id of the log to retrieve</param>
    pplx::task<std::shared_ptr<ArrayOfTagsResponse>> listTagsByLogId(
        int64_t logId
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_TagApi_H_ */

