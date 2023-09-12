#include <stdio.h>

addData() {
    FILE* fs;
    
    fs = fopen("d.txt", "w");
    
    if (fs == NULL) {
        printf("File not found\n");
    }
    else {
        printf("File is opened\n");
        
        fputs("my name is Siddhant Zalavadiya", fs);
        printf("File writing...\n");
        
        fclose(fs);
        
        printf("File is closed\n");
    }
}

readData() {
    FILE* fs;
    char a[50];
    
    fs = fopen("demo.txt", "r"); 
	    
    if (fs == NULL) {
        printf("File not found\n");
    }
    else {
        printf("File is open\n");
        
        fgets(a, 50, fs);
        printf("%s\n", a);
        
        fclose(fs);
        
        printf("File is closed\n");
    }
}

int main() {
    addData();
    readData();
    
    return 0;
}
