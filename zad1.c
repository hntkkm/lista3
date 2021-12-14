#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char name[10]) {
 
int palindrom=0, i, k=strlen(name);
int l=(k+1)/2;
//printf("%d\n",l);

	while ( i <= (l-1) ){
		if (name[i]==name[k-1-i]){
		printf("%c %c\n", name[i], name[k-1-i]);
		palindrom++;
		}
		i++;
	}
if (palindrom==l) 
	{ return true;}
	else {return false;}
}


int main(void){
	char name[10];
	bool odp;
	printf("Podaj wyraz\n");
	scanf("%s", name);

	odp=palindrome(name);

if (odp==true){
	printf("palindrom\n");}
else printf("NIE palindrom\n");
}
