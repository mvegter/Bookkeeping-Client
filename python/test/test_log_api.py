# coding: utf-8

"""
    ALICE Bookkeeping

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 0.0.0
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest

import openapi_client
from openapi_client.api.log_api import LogApi  # noqa: E501
from openapi_client.rest import ApiException


class TestLogApi(unittest.TestCase):
    """LogApi unit test stubs"""

    def setUp(self):
        self.api = openapi_client.api.log_api.LogApi()  # noqa: E501

    def tearDown(self):
        pass

    def test_create_log(self):
        """Test case for create_log

        Adds a new log  # noqa: E501
        """
        pass

    def test_get_log_by_id(self):
        """Test case for get_log_by_id

        Gets a log by Id  # noqa: E501
        """
        pass

    def test_list_logs(self):
        """Test case for list_logs

        List all logs  # noqa: E501
        """
        pass


if __name__ == '__main__':
    unittest.main()