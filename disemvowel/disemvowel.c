#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "disemvowel.h"

char* disemvowel(char* str) {
        int len;
        char* result;
        int i;
        int num = 1;
        int resultLocation = 0;

        len = strlen(str);
        result = (char*) calloc(num, sizeof(char));
 	
	for (i = 0; i < len; ++i){
		if(!(str[i] == 'a'||str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'O'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'U')) {
			result[resultLocation] = str[i];
 			num++;
			resultLocation++;
		
                }
        }       
        return result;
}
