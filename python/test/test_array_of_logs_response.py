# coding: utf-8

"""
    ALICE Bookkeeping

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 0.0.0
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client
from openapi_client.models.array_of_logs_response import ArrayOfLogsResponse  # noqa: E501
from openapi_client.rest import ApiException

class TestArrayOfLogsResponse(unittest.TestCase):
    """ArrayOfLogsResponse unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ArrayOfLogsResponse
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.array_of_logs_response.ArrayOfLogsResponse()  # noqa: E501
        if include_optional :
            return ArrayOfLogsResponse(
                data = [
                    openapi_client.models.log.Log(
                        entry_id = 56, 
                        title = '0', 
                        origin = 'human', 
                        tags = [
                            openapi_client.models.tag.Tag(
                                id = 56, 
                                text = '0', 
                                created_at = '0', 
                                update_at = '0', )
                            ], )
                    ]
            )
        else :
            return ArrayOfLogsResponse(
                data = [
                    openapi_client.models.log.Log(
                        entry_id = 56, 
                        title = '0', 
                        origin = 'human', 
                        tags = [
                            openapi_client.models.tag.Tag(
                                id = 56, 
                                text = '0', 
                                created_at = '0', 
                                update_at = '0', )
                            ], )
                    ],
        )

    def testArrayOfLogsResponse(self):
        """Test ArrayOfLogsResponse"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
