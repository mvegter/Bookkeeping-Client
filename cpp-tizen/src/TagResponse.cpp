#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TagResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TagResponse::TagResponse()
{
	//__init();
}

TagResponse::~TagResponse()
{
	//__cleanup();
}

void
TagResponse::__init()
{
	//data = new Tag();
}

void
TagResponse::__cleanup()
{
	//if(data != NULL) {
	//
	//delete data;
	//data = NULL;
	//}
	//
}

void
TagResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	

		if (isprimitive("Tag")) {
			jsonToValue(&data, node, "Tag", "Tag");
		} else {
			
			Tag* obj = static_cast<Tag*> (&data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

TagResponse::TagResponse(char* json)
{
	this->fromJson(json);
}

char*
TagResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Tag")) {
		Tag obj = getData();
		node = converttoJson(&obj, "Tag", "");
	}
	else {
		
		Tag obj = static_cast<Tag> (getData());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *dataKey = "data";
	json_object_set_member(pJsonObject, dataKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

Tag
TagResponse::getData()
{
	return data;
}

void
TagResponse::setData(Tag  data)
{
	this->data = data;
}


