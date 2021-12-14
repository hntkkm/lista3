#include <stdio.h>
#include <stdbool.h>
#include "funs.h"


int main(void){
	char name[10];
	bool odp;
	printf("Podaj wyraz\n");
	scanf("%s", name);

	odp=palindrome(name);

if (odp==true){
	printf("palindrom");}
	else printf("NIE palindrom");
}

