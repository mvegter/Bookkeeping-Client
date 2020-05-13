#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Log.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Log::Log()
{
	//__init();
}

Log::~Log()
{
	//__cleanup();
}

void
Log::__init()
{
	//entryId = long(0);
	//title = std::string();
	//origin = new LogOrigin();
	//new std::list()std::list> tags;
}

void
Log::__cleanup()
{
	//if(entryId != NULL) {
	//
	//delete entryId;
	//entryId = NULL;
	//}
	//if(title != NULL) {
	//
	//delete title;
	//title = NULL;
	//}
	//if(origin != NULL) {
	//
	//delete origin;
	//origin = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//
}

void
Log::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *entryIdKey = "entryId";
	node = json_object_get_member(pJsonObject, entryIdKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&entryId, node, "long long", "");
		} else {
			
		}
	}
	const gchar *titleKey = "title";
	node = json_object_get_member(pJsonObject, titleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&title, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *originKey = "origin";
	node = json_object_get_member(pJsonObject, originKey);
	if (node !=NULL) {
	

		if (isprimitive("LogOrigin")) {
			jsonToValue(&origin, node, "LogOrigin", "LogOrigin");
		} else {
			
			LogOrigin* obj = static_cast<LogOrigin*> (&origin);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *tagsKey = "tags";
	node = json_object_get_member(pJsonObject, tagsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Tag> new_list;
			Tag inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Tag")) {
					jsonToValue(&inst, temp_json, "Tag", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			tags = new_list;
		}
		
	}
}

Log::Log(char* json)
{
	this->fromJson(json);
}

char*
Log::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getEntryId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *entryIdKey = "entryId";
	json_object_set_member(pJsonObject, entryIdKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTitle();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *titleKey = "title";
	json_object_set_member(pJsonObject, titleKey, node);
	if (isprimitive("LogOrigin")) {
		LogOrigin obj = getOrigin();
		node = converttoJson(&obj, "LogOrigin", "");
	}
	else {
		
		LogOrigin obj = static_cast<LogOrigin> (getOrigin());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *originKey = "origin";
	json_object_set_member(pJsonObject, originKey, node);
	if (isprimitive("Tag")) {
		list<Tag> new_list = static_cast<list <Tag> > (getTags());
		node = converttoJson(&new_list, "Tag", "array");
	} else {
		node = json_node_alloc();
		list<Tag> new_list = static_cast<list <Tag> > (getTags());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Tag>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Tag obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *tagsKey = "tags";
	json_object_set_member(pJsonObject, tagsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
Log::getEntryId()
{
	return entryId;
}

void
Log::setEntryId(long long  entryId)
{
	this->entryId = entryId;
}

std::string
Log::getTitle()
{
	return title;
}

void
Log::setTitle(std::string  title)
{
	this->title = title;
}

LogOrigin
Log::getOrigin()
{
	return origin;
}

void
Log::setOrigin(LogOrigin  origin)
{
	this->origin = origin;
}

std::list<Tag>
Log::getTags()
{
	return tags;
}

void
Log::setTags(std::list <Tag> tags)
{
	this->tags = tags;
}


