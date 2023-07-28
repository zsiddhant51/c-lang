 #include<stdio.h>
 
 
 main(){
 
 
 float baseSalary, HRA, DA, TA;

	printf("\n\n Find Gross Salary");
    printf("\n\nEnter Base Salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA: ");
    scanf("%f", &HRA);

    printf("Enter DA: ");
    scanf("%f", &DA);

    printf("Enter TA: ");
    scanf("%f", &TA);

    
    float grossSalary = baseSalary + HRA + DA + TA;

    
    printf("Gross Salary: %.2f\n", grossSalary);
}