#include <stdio.h>


main() {

	char s[1000];
	int  i,k=0;
	printf("Enter the string : ");
	gets(s);


	for(i=0; s[i]; i++) {
		s[i]=s[i+k];


		if(s[i]==' '|| s[i]=='\t') {
			k++;
			i--;
		}

	}
	printf("string after removing all blank spaces:");

	printf("%s",s);



}