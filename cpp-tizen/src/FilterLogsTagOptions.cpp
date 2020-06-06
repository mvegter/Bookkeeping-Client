#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FilterLogsTagOptions.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FilterLogsTagOptions::FilterLogsTagOptions()
{
	//__init();
}

FilterLogsTagOptions::~FilterLogsTagOptions()
{
	//__cleanup();
}

void
FilterLogsTagOptions::__init()
{
	//values = std::string();
	//operation = std::string();
}

void
FilterLogsTagOptions::__cleanup()
{
	//if(values != NULL) {
	//
	//delete values;
	//values = NULL;
	//}
	//if(operation != NULL) {
	//
	//delete operation;
	//operation = NULL;
	//}
	//
}

void
FilterLogsTagOptions::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *valuesKey = "values";
	node = json_object_get_member(pJsonObject, valuesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&values, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *operationKey = "operation";
	node = json_object_get_member(pJsonObject, operationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&operation, node, "std::string", "");
		} else {
			
		}
	}
}

FilterLogsTagOptions::FilterLogsTagOptions(char* json)
{
	this->fromJson(json);
}

char*
FilterLogsTagOptions::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getValues();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *valuesKey = "values";
	json_object_set_member(pJsonObject, valuesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOperation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *operationKey = "operation";
	json_object_set_member(pJsonObject, operationKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
FilterLogsTagOptions::getValues()
{
	return values;
}

void
FilterLogsTagOptions::setValues(std::string  values)
{
	this->values = values;
}

std::string
FilterLogsTagOptions::getOperation()
{
	return operation;
}

void
FilterLogsTagOptions::setOperation(std::string  operation)
{
	this->operation = operation;
}


