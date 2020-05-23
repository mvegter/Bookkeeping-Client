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
	//id = long(0);
	//authorId = std::string();
	//title = std::string();
	//text = std::string();
	//creationTime = long(0);
	//origin = new LogOrigin();
	//subtype = new LogSubtype();
	//new std::list()std::list> tags;
	//rootLogId = long(0);
	//parentLogId = long(0);
	//new std::list()std::list> children;
}

void
Log::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(authorId != NULL) {
	//
	//delete authorId;
	//authorId = NULL;
	//}
	//if(title != NULL) {
	//
	//delete title;
	//title = NULL;
	//}
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(creationTime != NULL) {
	//
	//delete creationTime;
	//creationTime = NULL;
	//}
	//if(origin != NULL) {
	//
	//delete origin;
	//origin = NULL;
	//}
	//if(subtype != NULL) {
	//
	//delete subtype;
	//subtype = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//if(rootLogId != NULL) {
	//
	//delete rootLogId;
	//rootLogId = NULL;
	//}
	//if(parentLogId != NULL) {
	//
	//delete parentLogId;
	//parentLogId = NULL;
	//}
	//if(children != NULL) {
	//children.RemoveAll(true);
	//delete children;
	//children = NULL;
	//}
	//
}

void
Log::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *authorIdKey = "authorId";
	node = json_object_get_member(pJsonObject, authorIdKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&authorId, node, "std::string", "");
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
	const gchar *textKey = "text";
	node = json_object_get_member(pJsonObject, textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *creationTimeKey = "creationTime";
	node = json_object_get_member(pJsonObject, creationTimeKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&creationTime, node, "long long", "");
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
	const gchar *subtypeKey = "subtype";
	node = json_object_get_member(pJsonObject, subtypeKey);
	if (node !=NULL) {
	

		if (isprimitive("LogSubtype")) {
			jsonToValue(&subtype, node, "LogSubtype", "LogSubtype");
		} else {
			
			LogSubtype* obj = static_cast<LogSubtype*> (&subtype);
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
	const gchar *rootLogIdKey = "rootLogId";
	node = json_object_get_member(pJsonObject, rootLogIdKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&rootLogId, node, "long long", "");
		} else {
			
		}
	}
	const gchar *parentLogIdKey = "parentLogId";
	node = json_object_get_member(pJsonObject, parentLogIdKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&parentLogId, node, "long long", "");
		} else {
			
		}
	}
	const gchar *childrenKey = "children";
	node = json_object_get_member(pJsonObject, childrenKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Log> new_list;
			Log inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Log")) {
					jsonToValue(&inst, temp_json, "Log", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			children = new_list;
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
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAuthorId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *authorIdKey = "authorId";
	json_object_set_member(pJsonObject, authorIdKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTitle();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *titleKey = "title";
	json_object_set_member(pJsonObject, titleKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreationTime();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *creationTimeKey = "creationTime";
	json_object_set_member(pJsonObject, creationTimeKey, node);
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
	if (isprimitive("LogSubtype")) {
		LogSubtype obj = getSubtype();
		node = converttoJson(&obj, "LogSubtype", "");
	}
	else {
		
		LogSubtype obj = static_cast<LogSubtype> (getSubtype());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *subtypeKey = "subtype";
	json_object_set_member(pJsonObject, subtypeKey, node);
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
	if (isprimitive("long long")) {
		long long obj = getRootLogId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *rootLogIdKey = "rootLogId";
	json_object_set_member(pJsonObject, rootLogIdKey, node);
	if (isprimitive("long long")) {
		long long obj = getParentLogId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *parentLogIdKey = "parentLogId";
	json_object_set_member(pJsonObject, parentLogIdKey, node);
	if (isprimitive("Log")) {
		list<Log> new_list = static_cast<list <Log> > (getChildren());
		node = converttoJson(&new_list, "Log", "array");
	} else {
		node = json_node_alloc();
		list<Log> new_list = static_cast<list <Log> > (getChildren());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Log>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Log obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *childrenKey = "children";
	json_object_set_member(pJsonObject, childrenKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
Log::getId()
{
	return id;
}

void
Log::setId(long long  id)
{
	this->id = id;
}

std::string
Log::getAuthorId()
{
	return authorId;
}

void
Log::setAuthorId(std::string  authorId)
{
	this->authorId = authorId;
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

std::string
Log::getText()
{
	return text;
}

void
Log::setText(std::string  text)
{
	this->text = text;
}

long long
Log::getCreationTime()
{
	return creationTime;
}

void
Log::setCreationTime(long long  creationTime)
{
	this->creationTime = creationTime;
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

LogSubtype
Log::getSubtype()
{
	return subtype;
}

void
Log::setSubtype(LogSubtype  subtype)
{
	this->subtype = subtype;
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

long long
Log::getRootLogId()
{
	return rootLogId;
}

void
Log::setRootLogId(long long  rootLogId)
{
	this->rootLogId = rootLogId;
}

long long
Log::getParentLogId()
{
	return parentLogId;
}

void
Log::setParentLogId(long long  parentLogId)
{
	this->parentLogId = parentLogId;
}

std::list<Log>
Log::getChildren()
{
	return children;
}

void
Log::setChildren(std::list <Log> children)
{
	this->children = children;
}


