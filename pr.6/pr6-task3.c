#include <stdio.h>

main() {
	char str[100];
	int i;

	printf("\n Please Enter any String: ");
	gets(str);

	for (i = 0; str[i]!='\0'; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') {

			str[i] = str[i] + 32;
		} else if(str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}

	}

	printf("\n Toglled string: %s", str);

}