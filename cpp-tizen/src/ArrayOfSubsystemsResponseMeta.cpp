#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ArrayOfSubsystemsResponseMeta.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ArrayOfSubsystemsResponseMeta::ArrayOfSubsystemsResponseMeta()
{
	//__init();
}

ArrayOfSubsystemsResponseMeta::~ArrayOfSubsystemsResponseMeta()
{
	//__cleanup();
}

void
ArrayOfSubsystemsResponseMeta::__init()
{
	//page = new PaginationMeta();
}

void
ArrayOfSubsystemsResponseMeta::__cleanup()
{
	//if(page != NULL) {
	//
	//delete page;
	//page = NULL;
	//}
	//
}

void
ArrayOfSubsystemsResponseMeta::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *pageKey = "page";
	node = json_object_get_member(pJsonObject, pageKey);
	if (node !=NULL) {
	

		if (isprimitive("PaginationMeta")) {
			jsonToValue(&page, node, "PaginationMeta", "PaginationMeta");
		} else {
			
			PaginationMeta* obj = static_cast<PaginationMeta*> (&page);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ArrayOfSubsystemsResponseMeta::ArrayOfSubsystemsResponseMeta(char* json)
{
	this->fromJson(json);
}

char*
ArrayOfSubsystemsResponseMeta::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("PaginationMeta")) {
		PaginationMeta obj = getPage();
		node = converttoJson(&obj, "PaginationMeta", "");
	}
	else {
		
		PaginationMeta obj = static_cast<PaginationMeta> (getPage());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *pageKey = "page";
	json_object_set_member(pJsonObject, pageKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

PaginationMeta
ArrayOfSubsystemsResponseMeta::getPage()
{
	return page;
}

void
ArrayOfSubsystemsResponseMeta::setPage(PaginationMeta  page)
{
	this->page = page;
}


