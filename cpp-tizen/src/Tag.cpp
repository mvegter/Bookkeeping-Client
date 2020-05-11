#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Tag.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Tag::Tag()
{
	//__init();
}

Tag::~Tag()
{
	//__cleanup();
}

void
Tag::__init()
{
	//id = long(0);
	//text = std::string();
	//createdAt = std::string();
	//updateAt = std::string();
}

void
Tag::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(createdAt != NULL) {
	//
	//delete createdAt;
	//createdAt = NULL;
	//}
	//if(updateAt != NULL) {
	//
	//delete updateAt;
	//updateAt = NULL;
	//}
	//
}

void
Tag::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *textKey = "text";
	node = json_object_get_member(pJsonObject, textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *createdAtKey = "createdAt";
	node = json_object_get_member(pJsonObject, createdAtKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&createdAt, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *updateAtKey = "updateAt";
	node = json_object_get_member(pJsonObject, updateAtKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&updateAt, node, "std::string", "");
		} else {
			
		}
	}
}

Tag::Tag(char* json)
{
	this->fromJson(json);
}

char*
Tag::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCreatedAt();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *createdAtKey = "createdAt";
	json_object_set_member(pJsonObject, createdAtKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUpdateAt();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *updateAtKey = "updateAt";
	json_object_set_member(pJsonObject, updateAtKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
Tag::getId()
{
	return id;
}

void
Tag::setId(long long  id)
{
	this->id = id;
}

std::string
Tag::getText()
{
	return text;
}

void
Tag::setText(std::string  text)
{
	this->text = text;
}

std::string
Tag::getCreatedAt()
{
	return createdAt;
}

void
Tag::setCreatedAt(std::string  createdAt)
{
	this->createdAt = createdAt;
}

std::string
Tag::getUpdateAt()
{
	return updateAt;
}

void
Tag::setUpdateAt(std::string  updateAt)
{
	this->updateAt = updateAt;
}


