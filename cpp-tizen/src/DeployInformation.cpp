#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DeployInformation.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DeployInformation::DeployInformation()
{
	//__init();
}

DeployInformation::~DeployInformation()
{
	//__cleanup();
}

void
DeployInformation::__init()
{
	//age = double(0);
	//start = double(0);
}

void
DeployInformation::__cleanup()
{
	//if(age != NULL) {
	//
	//delete age;
	//age = NULL;
	//}
	//if(start != NULL) {
	//
	//delete start;
	//start = NULL;
	//}
	//
}

void
DeployInformation::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ageKey = "age";
	node = json_object_get_member(pJsonObject, ageKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&age, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&age);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *startKey = "start";
	node = json_object_get_member(pJsonObject, startKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&start, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&start);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

DeployInformation::DeployInformation(char* json)
{
	this->fromJson(json);
}

char*
DeployInformation::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getAge();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getAge());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ageKey = "age";
	json_object_set_member(pJsonObject, ageKey, node);
	if (isprimitive("long long")) {
		long long obj = getStart();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getStart());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *startKey = "start";
	json_object_set_member(pJsonObject, startKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
DeployInformation::getAge()
{
	return age;
}

void
DeployInformation::setAge(long long  age)
{
	this->age = age;
}

long long
DeployInformation::getStart()
{
	return start;
}

void
DeployInformation::setStart(long long  start)
{
	this->start = start;
}


