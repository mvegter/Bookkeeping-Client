#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Subsystem.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Subsystem::Subsystem()
{
	//__init();
}

Subsystem::~Subsystem()
{
	//__cleanup();
}

void
Subsystem::__init()
{
	//id = long(0);
	//name = std::string();
	//createdAt = std::string();
	//updateAt = std::string();
}

void
Subsystem::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
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
Subsystem::fromJson(char* jsonStr)
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
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
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

Subsystem::Subsystem(char* json)
{
	this->fromJson(json);
}

char*
Subsystem::toJson()
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
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
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
Subsystem::getId()
{
	return id;
}

void
Subsystem::setId(long long  id)
{
	this->id = id;
}

std::string
Subsystem::getName()
{
	return name;
}

void
Subsystem::setName(std::string  name)
{
	this->name = name;
}

std::string
Subsystem::getCreatedAt()
{
	return createdAt;
}

void
Subsystem::setCreatedAt(std::string  createdAt)
{
	this->createdAt = createdAt;
}

std::string
Subsystem::getUpdateAt()
{
	return updateAt;
}

void
Subsystem::setUpdateAt(std::string  updateAt)
{
	this->updateAt = updateAt;
}


