#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DataResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DataResponse::DataResponse()
{
	//__init();
}

DataResponse::~DataResponse()
{
	//__cleanup();
}

void
DataResponse::__init()
{
	//data = null;
}

void
DataResponse::__cleanup()
{
	//if(data != NULL) {
	//
	//delete data;
	//data = NULL;
	//}
	//
}

void
DataResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	

		if (isprimitive("OneOf&lt;array,object&gt;")) {
			jsonToValue(&data, node, "OneOf&lt;array,object&gt;", "OneOf&lt;array,object&gt;");
		} else {
			
			OneOf&lt;array,object&gt;* obj = static_cast<OneOf&lt;array,object&gt;*> (&data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

DataResponse::DataResponse(char* json)
{
	this->fromJson(json);
}

char*
DataResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("OneOf&lt;array,object&gt;")) {
		OneOf&lt;array,object&gt; obj = getData();
		node = converttoJson(&obj, "OneOf&lt;array,object&gt;", "");
	}
	else {
		
		OneOf&lt;array,object&gt; obj = static_cast<OneOf&lt;array,object&gt;> (getData());
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

OneOf&lt;array,object&gt;
DataResponse::getData()
{
	return data;
}

void
DataResponse::setData(OneOf&lt;array,object&gt;  data)
{
	this->data = data;
}


