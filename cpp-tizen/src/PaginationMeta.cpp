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
	//pageCount = int(0);
	//totalCount = int(0);
}

void
PaginationMeta::__cleanup()
{
	//if(pageCount != NULL) {
	//
	//delete pageCount;
	//pageCount = NULL;
	//}
	//if(totalCount != NULL) {
	//
	//delete totalCount;
	//totalCount = NULL;
	//}
	//
}

void
PaginationMeta::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *pageCountKey = "pageCount";
	node = json_object_get_member(pJsonObject, pageCountKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&pageCount, node, "int", "");
		} else {
			
		}
	}
	const gchar *totalCountKey = "totalCount";
	node = json_object_get_member(pJsonObject, totalCountKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&totalCount, node, "int", "");
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
		int obj = getPageCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *pageCountKey = "pageCount";
	json_object_set_member(pJsonObject, pageCountKey, node);
	if (isprimitive("int")) {
		int obj = getTotalCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *totalCountKey = "totalCount";
	json_object_set_member(pJsonObject, totalCountKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
PaginationMeta::getPageCount()
{
	return pageCount;
}

void
PaginationMeta::setPageCount(int  pageCount)
{
	this->pageCount = pageCount;
}

int
PaginationMeta::getTotalCount()
{
	return totalCount;
}

void
PaginationMeta::setTotalCount(int  totalCount)
{
	this->totalCount = totalCount;
}


