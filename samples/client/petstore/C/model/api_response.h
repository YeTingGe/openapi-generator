/*
 * api_response.h
 *
 * Describes the result of uploading an image resource
 */

#ifndef _api_response_H_
#define _api_response_H_

#include <string.h>

typedef struct api_response_t {
	int    code; //TODO can be modified for numeric in mustache
	char    type;
	char    message;
	
} api_response_t;

api_response_t *api_response_create(
		int    code,
		char    type,
		char    message
		);
		
void api_response_free(api_response_t *api_response);

api_response_t *api_response_parseFromJSON(char *jsonString)

cJSON *api_response_convertToJSON(api_response_t *api_response);

#endif /* _api_response_H_ */