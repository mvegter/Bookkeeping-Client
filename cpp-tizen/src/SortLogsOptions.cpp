#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SortLogsOptions.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SortLogsOptions::SortLogsOptions()
{
	//__init();
}

SortLogsOptions::~SortLogsOptions()
{
	//__cleanup();
}

void
SortLogsOptions::__init()
{
	//id = new SortOrder();
	//text = new SortOrder();
}

void
SortLogsOptions::__cleanup()
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
	//
}

void
SortLogsOptions::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("SortOrder")) {
			jsonToValue(&id, node, "SortOrder", "SortOrder");
		} else {
			
			SortOrder* obj = static_cast<SortOrder*> (&id);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *textKey = "text";
	node = json_object_get_member(pJsonObject, textKey);
	if (node !=NULL) {
	

		if (isprimitive("SortOrder")) {
			jsonToValue(&text, node, "SortOrder", "SortOrder");
		} else {
			
			SortOrder* obj = static_cast<SortOrder*> (&text);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

SortLogsOptions::SortLogsOptions(char* json)
{
	this->fromJson(json);
}

char*
SortLogsOptions::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("SortOrder")) {
		SortOrder obj = getId();
		node = converttoJson(&obj, "SortOrder", "");
	}
	else {
		
		SortOrder obj = static_cast<SortOrder> (getId());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("SortOrder")) {
		SortOrder obj = getText();
		node = converttoJson(&obj, "SortOrder", "");
	}
	else {
		
		SortOrder obj = static_cast<SortOrder> (getText());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

SortOrder
SortLogsOptions::getId()
{
	return id;
}

void
SortLogsOptions::setId(SortOrder  id)
{
	this->id = id;
}

SortOrder
SortLogsOptions::getText()
{
	return text;
}

void
SortLogsOptions::setText(SortOrder  text)
{
	this->text = text;
}


