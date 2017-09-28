#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "disemvowel.h"

char* disemvowel(char* str) {
        int len;
        char* result;
        int i;
        int resultLocation = 0;
	int numVowels = 0;

        len = strlen(str);
	
	//counts number of vowels in the string
	for(i = 0; i < len; i++){
		if((str[i] == 'a'||str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'O'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'U')){
			numVowels++;
		}
	}


	//allocates memory to result that takes into account that string will be smaller since it has no vowels
        result = (char*) calloc(len - numVowels + 1, sizeof(char));

	//checks each character to see if it is a vowel. If it isn't a vowel, the character is copied into result.
	for (i = 0; i < len; i++){
		if(!(str[i] == 'a'||str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'O'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'U')) {
			result[resultLocation] = str[i];
			resultLocation++;
                }
        } 	
        return result;
}
