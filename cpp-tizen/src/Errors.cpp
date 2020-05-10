#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Errors.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Errors::Errors()
{
	//__init();
}

Errors::~Errors()
{
	//__cleanup();
}

void
Errors::__init()
{
	//new std::list()std::list> errors;
}

void
Errors::__cleanup()
{
	//if(errors != NULL) {
	//errors.RemoveAll(true);
	//delete errors;
	//errors = NULL;
	//}
	//
}

void
Errors::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *errorsKey = "errors";
	node = json_object_get_member(pJsonObject, errorsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Error> new_list;
			Error inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Error")) {
					jsonToValue(&inst, temp_json, "Error", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			errors = new_list;
		}
		
	}
}

Errors::Errors(char* json)
{
	this->fromJson(json);
}

char*
Errors::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Error")) {
		list<Error> new_list = static_cast<list <Error> > (getErrors());
		node = converttoJson(&new_list, "Error", "array");
	} else {
		node = json_node_alloc();
		list<Error> new_list = static_cast<list <Error> > (getErrors());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Error>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Error obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *errorsKey = "errors";
	json_object_set_member(pJsonObject, errorsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<Error>
Errors::getErrors()
{
	return errors;
}

void
Errors::setErrors(std::list <Error> errors)
{
	this->errors = errors;
}


