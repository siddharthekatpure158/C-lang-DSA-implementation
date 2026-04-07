#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int empid;
    char empname[10];
    float empsalary;
};

struct employee* create();
void display(struct employee *emp);

int main()
{
    struct employee *emp;
    int ct;

    printf("Size of struct employee is: %lu\n", sizeof(struct employee));

    do
    {
       emp=create();
       display(emp);

       printf("\nDo you want to continue? (press 1 for Yes / 0 for No): ");
        scanf("%d", &ct);

    } while (ct == 1);

    printf("\n--------------------- Thank You ----------------------\n");

    return 0;
}

struct employee* create(){
         struct employee *emp=(struct employee *)malloc(sizeof(struct employee));

        printf("Enter Employee ID: ");
        scanf("%d", &emp->empid);

        printf("Enter Employee Name: ");
        scanf("%s", emp->empname);

        printf("Enter Employee Salary: ");
        scanf("%f", &emp->empsalary);

        return emp;
    }

    void display(struct employee *emp){

        printf("\n--- Employee Details ---\n");
        printf("EmpId: %d\n", emp->empid);
        printf("EmpName: %s\n", emp->empname);
        printf("EmpSalary: %.2f\n", emp->empsalary);

    }
