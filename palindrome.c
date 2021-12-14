#include <stdio.h>
#include <stdbool.h>
#include "funs.h"

bool palindrome(char name[10]) {
 
int palindrom=0, i, k=strlen(name);
int l=(k+1)/2;
//printf("%d\n",l);

	while ( i <= (l-1) ){
		if (name[i]==name[k-1-i]){
		//printf("%c %c\n", name[i], name[k-1-i]);
		palindrom++;
		}
		i++;
	}
if (palindrom==l) 
	{ return true;}
	else {return false;}
}
