#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ArrayOfSubsystemsResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ArrayOfSubsystemsResponse::ArrayOfSubsystemsResponse()
{
	//__init();
}

ArrayOfSubsystemsResponse::~ArrayOfSubsystemsResponse()
{
	//__cleanup();
}

void
ArrayOfSubsystemsResponse::__init()
{
	//meta = new ArrayOfSubsystemsResponseMeta();
	//new std::list()std::list> data;
}

void
ArrayOfSubsystemsResponse::__cleanup()
{
	//if(meta != NULL) {
	//
	//delete meta;
	//meta = NULL;
	//}
	//if(data != NULL) {
	//data.RemoveAll(true);
	//delete data;
	//data = NULL;
	//}
	//
}

void
ArrayOfSubsystemsResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *metaKey = "meta";
	node = json_object_get_member(pJsonObject, metaKey);
	if (node !=NULL) {
	

		if (isprimitive("ArrayOfSubsystemsResponseMeta")) {
			jsonToValue(&meta, node, "ArrayOfSubsystemsResponseMeta", "ArrayOfSubsystemsResponseMeta");
		} else {
			
			ArrayOfSubsystemsResponseMeta* obj = static_cast<ArrayOfSubsystemsResponseMeta*> (&meta);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Subsystem> new_list;
			Subsystem inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Subsystem")) {
					jsonToValue(&inst, temp_json, "Subsystem", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			data = new_list;
		}
		
	}
}

ArrayOfSubsystemsResponse::ArrayOfSubsystemsResponse(char* json)
{
	this->fromJson(json);
}

char*
ArrayOfSubsystemsResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ArrayOfSubsystemsResponseMeta")) {
		ArrayOfSubsystemsResponseMeta obj = getMeta();
		node = converttoJson(&obj, "ArrayOfSubsystemsResponseMeta", "");
	}
	else {
		
		ArrayOfSubsystemsResponseMeta obj = static_cast<ArrayOfSubsystemsResponseMeta> (getMeta());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *metaKey = "meta";
	json_object_set_member(pJsonObject, metaKey, node);
	if (isprimitive("Subsystem")) {
		list<Subsystem> new_list = static_cast<list <Subsystem> > (getData());
		node = converttoJson(&new_list, "Subsystem", "array");
	} else {
		node = json_node_alloc();
		list<Subsystem> new_list = static_cast<list <Subsystem> > (getData());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Subsystem>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Subsystem obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
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

ArrayOfSubsystemsResponseMeta
ArrayOfSubsystemsResponse::getMeta()
{
	return meta;
}

void
ArrayOfSubsystemsResponse::setMeta(ArrayOfSubsystemsResponseMeta  meta)
{
	this->meta = meta;
}

std::list<Subsystem>
ArrayOfSubsystemsResponse::getData()
{
	return data;
}

void
ArrayOfSubsystemsResponse::setData(std::list <Subsystem> data)
{
	this->data = data;
}


