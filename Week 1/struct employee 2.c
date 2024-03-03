#include <stdio.h>

struct employee
{
    char emp_name[20];
    int sal;
    int emp_id;
    int age;
};

void printSalary(int salary)
{
    printf("Salary: %d\n", salary);
}

void printAge(int age)
{
    printf("Age: %d\n", age);
}

int main()
{
    struct employee emp;
    emp.sal = 5000;
    emp.emp_id = 1001;
    emp.age = 30;
    printSalary(emp.sal);
    printAge(emp.age);
;
}
