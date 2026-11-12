#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id, age;
    double salary;
}EmployeeInformation;

int main(){
    EmployeeInformation *employees;
    int i, numEmployees, minAge, maxSalary;

    scanf("%d", &numEmployees);

    employees = malloc(numEmployees * sizeof(EmployeeInformation));

    for(i = 0; i < numEmployees; i++){
        scanf("%d", &employees[i].id);
        scanf("%d", &employees[i].age);
        scanf("%lf", &employees[i].salary);
    }
    maxSalary = 0;

    for(i = 1; i < numEmployees; i++){
        if(employees[i].salary > employees[maxSalary].salary){
            maxSalary = i;
        }
    }

    minAge = 0;

    for(i = 1; i < numEmployees; i++){
        if(employees[i].age < employees[minAge].age){
            minAge = i;
        }
    }

    printf("Maior Salario Registrado\n");
    printf("ID : %d\n", employees[maxSalary].id);
    printf("Idade : %d\n", employees[maxSalary].age);  
    printf("Salario : %.2lf\n", employees[maxSalary].salary);

    printf("Menor Idade Registrada\n");
    printf("ID : %d\n", employees[minAge].id);
    printf("Idade : %d\n", employees[minAge].age);  
    printf("Salario : %.2lf\n", employees[minAge].salary);

    free(employees);

    return 0;
}