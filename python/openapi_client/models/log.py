# coding: utf-8

"""
    ALICE Bookkeeping

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 0.0.0
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six

from openapi_client.configuration import Configuration


class Log(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'id': 'int',
        'title': 'str',
        'text': 'str',
        'origin': 'LogOrigin',
        'tags': 'list[Tag]',
        'root_log_id': 'int',
        'parent_log_id': 'int'
    }

    attribute_map = {
        'id': 'id',
        'title': 'title',
        'text': 'text',
        'origin': 'origin',
        'tags': 'tags',
        'root_log_id': 'rootLogId',
        'parent_log_id': 'parentLogId'
    }

    def __init__(self, id=None, title=None, text=None, origin=None, tags=None, root_log_id=None, parent_log_id=None, local_vars_configuration=None):  # noqa: E501
        """Log - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._title = None
        self._text = None
        self._origin = None
        self._tags = None
        self._root_log_id = None
        self._parent_log_id = None
        self.discriminator = None

        self.id = id
        self.title = title
        self.text = text
        self.origin = origin
        self.tags = tags
        self.root_log_id = root_log_id
        self.parent_log_id = parent_log_id

    @property
    def id(self):
        """Gets the id of this Log.  # noqa: E501

        The unique identifier of this entity.  # noqa: E501

        :return: The id of this Log.  # noqa: E501
        :rtype: int
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this Log.

        The unique identifier of this entity.  # noqa: E501

        :param id: The id of this Log.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and id is None:  # noqa: E501
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                id is not None and id < 1):  # noqa: E501
            raise ValueError("Invalid value for `id`, must be a value greater than or equal to `1`")  # noqa: E501

        self._id = id

    @property
    def title(self):
        """Gets the title of this Log.  # noqa: E501

        Title of the log.  # noqa: E501

        :return: The title of this Log.  # noqa: E501
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title):
        """Sets the title of this Log.

        Title of the log.  # noqa: E501

        :param title: The title of this Log.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and title is None:  # noqa: E501
            raise ValueError("Invalid value for `title`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                title is not None and len(title) > 140):
            raise ValueError("Invalid value for `title`, length must be less than or equal to `140`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                title is not None and len(title) < 3):
            raise ValueError("Invalid value for `title`, length must be greater than or equal to `3`")  # noqa: E501

        self._title = title

    @property
    def text(self):
        """Gets the text of this Log.  # noqa: E501

        Body of the log.  # noqa: E501

        :return: The text of this Log.  # noqa: E501
        :rtype: str
        """
        return self._text

    @text.setter
    def text(self, text):
        """Sets the text of this Log.

        Body of the log.  # noqa: E501

        :param text: The text of this Log.  # noqa: E501
        :type: str
        """
        if self.local_vars_configuration.client_side_validation and text is None:  # noqa: E501
            raise ValueError("Invalid value for `text`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                text is not None and len(text) < 3):
            raise ValueError("Invalid value for `text`, length must be greater than or equal to `3`")  # noqa: E501

        self._text = text

    @property
    def origin(self):
        """Gets the origin of this Log.  # noqa: E501


        :return: The origin of this Log.  # noqa: E501
        :rtype: LogOrigin
        """
        return self._origin

    @origin.setter
    def origin(self, origin):
        """Sets the origin of this Log.


        :param origin: The origin of this Log.  # noqa: E501
        :type: LogOrigin
        """
        if self.local_vars_configuration.client_side_validation and origin is None:  # noqa: E501
            raise ValueError("Invalid value for `origin`, must not be `None`")  # noqa: E501

        self._origin = origin

    @property
    def tags(self):
        """Gets the tags of this Log.  # noqa: E501

        A list of Tag objects.  # noqa: E501

        :return: The tags of this Log.  # noqa: E501
        :rtype: list[Tag]
        """
        return self._tags

    @tags.setter
    def tags(self, tags):
        """Sets the tags of this Log.

        A list of Tag objects.  # noqa: E501

        :param tags: The tags of this Log.  # noqa: E501
        :type: list[Tag]
        """
        if self.local_vars_configuration.client_side_validation and tags is None:  # noqa: E501
            raise ValueError("Invalid value for `tags`, must not be `None`")  # noqa: E501

        self._tags = tags

    @property
    def root_log_id(self):
        """Gets the root_log_id of this Log.  # noqa: E501

        The unique identifier of this entity.  # noqa: E501

        :return: The root_log_id of this Log.  # noqa: E501
        :rtype: int
        """
        return self._root_log_id

    @root_log_id.setter
    def root_log_id(self, root_log_id):
        """Sets the root_log_id of this Log.

        The unique identifier of this entity.  # noqa: E501

        :param root_log_id: The root_log_id of this Log.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and root_log_id is None:  # noqa: E501
            raise ValueError("Invalid value for `root_log_id`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                root_log_id is not None and root_log_id < 1):  # noqa: E501
            raise ValueError("Invalid value for `root_log_id`, must be a value greater than or equal to `1`")  # noqa: E501

        self._root_log_id = root_log_id

    @property
    def parent_log_id(self):
        """Gets the parent_log_id of this Log.  # noqa: E501

        The unique identifier of this entity.  # noqa: E501

        :return: The parent_log_id of this Log.  # noqa: E501
        :rtype: int
        """
        return self._parent_log_id

    @parent_log_id.setter
    def parent_log_id(self, parent_log_id):
        """Sets the parent_log_id of this Log.

        The unique identifier of this entity.  # noqa: E501

        :param parent_log_id: The parent_log_id of this Log.  # noqa: E501
        :type: int
        """
        if self.local_vars_configuration.client_side_validation and parent_log_id is None:  # noqa: E501
            raise ValueError("Invalid value for `parent_log_id`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                parent_log_id is not None and parent_log_id < 1):  # noqa: E501
            raise ValueError("Invalid value for `parent_log_id`, must be a value greater than or equal to `1`")  # noqa: E501

        self._parent_log_id = parent_log_id

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, Log):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, Log):
            return True

        return self.to_dict() != other.to_dict()
