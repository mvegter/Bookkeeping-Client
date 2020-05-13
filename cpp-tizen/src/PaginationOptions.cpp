#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PaginationOptions.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PaginationOptions::PaginationOptions()
{
	//__init();
}

PaginationOptions::~PaginationOptions()
{
	//__cleanup();
}

void
PaginationOptions::__init()
{
	//limit = int(0);
	//offset = int(0);
}

void
PaginationOptions::__cleanup()
{
	//if(limit != NULL) {
	//
	//delete limit;
	//limit = NULL;
	//}
	//if(offset != NULL) {
	//
	//delete offset;
	//offset = NULL;
	//}
	//
}

void
PaginationOptions::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *limitKey = "limit";
	node = json_object_get_member(pJsonObject, limitKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&limit, node, "int", "");
		} else {
			
		}
	}
	const gchar *offsetKey = "offset";
	node = json_object_get_member(pJsonObject, offsetKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&offset, node, "int", "");
		} else {
			
		}
	}
}

PaginationOptions::PaginationOptions(char* json)
{
	this->fromJson(json);
}

char*
PaginationOptions::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getLimit();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *limitKey = "limit";
	json_object_set_member(pJsonObject, limitKey, node);
	if (isprimitive("int")) {
		int obj = getOffset();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *offsetKey = "offset";
	json_object_set_member(pJsonObject, offsetKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
PaginationOptions::getLimit()
{
	return limit;
}

void
PaginationOptions::setLimit(int  limit)
{
	this->limit = limit;
}

int
PaginationOptions::getOffset()
{
	return offset;
}

void
PaginationOptions::setOffset(int  offset)
{
	this->offset = offset;
}


