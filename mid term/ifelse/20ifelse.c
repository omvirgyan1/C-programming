//Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
#include <stdio.h>
int main() 
{
  int basic_salary;
  float hra, da, gross_salary;
  printf("Enter basic salary: ");
  scanf("%d", &basic_salary);
  if (basic_salary <= 10000) {
    hra = 0.2 * basic_salary;
    da = 0.8 * basic_salary;
  } else if (basic_salary <= 20000) {
    hra = 0.25 * basic_salary;
    da = 0.9 * basic_salary;
  } else {
    hra = 0.3 * basic_salary;
    da = 0.95 * basic_salary;
  }

  gross_salary = basic_salary + hra + da;
  printf("Gross salary: %f\n", gross_salary);

  return 0;
}
