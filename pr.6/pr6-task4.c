#include <stdio.h>

main() {
	char s[1000];
	int i,w=0;

	printf("Enter  the string : ");
	gets(s);

	for(i=0; s[i]; i++) {
		if(s[i]==32)
			w++;

	}
	if(i>0){
		w++;
	}
		

	printf("no of words in string = %d\n",w);

}