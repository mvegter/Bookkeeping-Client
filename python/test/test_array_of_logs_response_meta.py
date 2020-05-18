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
from openapi_client.models.array_of_logs_response_meta import ArrayOfLogsResponseMeta  # noqa: E501
from openapi_client.rest import ApiException

class TestArrayOfLogsResponseMeta(unittest.TestCase):
    """ArrayOfLogsResponseMeta unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ArrayOfLogsResponseMeta
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.array_of_logs_response_meta.ArrayOfLogsResponseMeta()  # noqa: E501
        if include_optional :
            return ArrayOfLogsResponseMeta(
                page = openapi_client.models.pagination_meta.PaginationMeta(
                    total = 1, )
            )
        else :
            return ArrayOfLogsResponseMeta(
                page = openapi_client.models.pagination_meta.PaginationMeta(
                    total = 1, ),
        )

    def testArrayOfLogsResponseMeta(self):
        """Test ArrayOfLogsResponseMeta"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()