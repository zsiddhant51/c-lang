#include <stdio.h>

main() {
	
    int physics, chemistry, biology, mathematics, computer;
    
    float totalMarks, percentage;
    
    char grade;

    printf("Enter the marks of Physics: ");
    scanf("%d", &physics);
    
    
    printf("Enter the marks of Chemistry: ");
    scanf("%d", &chemistry);
    
    
    printf("Enter the marks of Biology: ");
    scanf("%d", &biology);
    
    
    printf("Enter the marks of Mathematics: ");
    scanf("%d", &mathematics);
    
    
    printf("Enter the marks of Computer: ");
    scanf("%d", &computer);



    totalMarks =physics+chemistry+biology+mathematics+computer;
    percentage =totalMarks/500*100;

    if (percentage >= 90) {
        grade = 'A';
    } 
	else 
		if (percentage >= 80) {
        	grade = 'B';
    } 
	else 
		if (percentage >= 70) {
        	grade = 'C';
    } 
	else 
		if (percentage >= 60) {
        	grade = 'D';
    } 
	else 
		if (percentage >= 50) {
        	grade = 'E';
    } 
	else 
		if (percentage >= 40) {
        	grade = 'F';
    } 
	else {
        grade = 'F'; 
    }

    printf("Percentage: %.2f%\n", percentage);
    printf("Grade: %c", grade);

}