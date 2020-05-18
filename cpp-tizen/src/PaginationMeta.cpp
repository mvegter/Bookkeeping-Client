#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PaginationMeta.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PaginationMeta::PaginationMeta()
{
	//__init();
}

PaginationMeta::~PaginationMeta()
{
	//__cleanup();
}

void
PaginationMeta::__init()
{
	//total = int(0);
}

void
PaginationMeta::__cleanup()
{
	//if(total != NULL) {
	//
	//delete total;
	//total = NULL;
	//}
	//
}

void
PaginationMeta::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *totalKey = "total";
	node = json_object_get_member(pJsonObject, totalKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&total, node, "int", "");
		} else {
			
		}
	}
}

PaginationMeta::PaginationMeta(char* json)
{
	this->fromJson(json);
}

char*
PaginationMeta::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getTotal();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *totalKey = "total";
	json_object_set_member(pJsonObject, totalKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
PaginationMeta::getTotal()
{
	return total;
}

void
PaginationMeta::setTotal(int  total)
{
	this->total = total;
}


