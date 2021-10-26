/*I
  project: payslip
  Author: Antony Wasonga
  Date : oct,2021
  Compiler: GCC
  Language: C99
  Licence: MIT

 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // variable declaration
   char name [100];
   int emp_no,hours;
   int normal_pay,overtime_pay, gross;
   float tax,net;
   const int rate = 1000;

   //Capture input
   printf("\n Gitonga's Factory Payslips System!\n");
   printf("Employee Name:");
   gets(name); // read whole line of input
   printf("employee number");
   scanf("%d",&emp_no);
   printf("Hours Worked: ");
   scanf("%d",&hours);
   // computation
  if(hours > 40)
  {
      normal_pay = rate * 40;
      overtime_pay = (hours - 40) * (rate * 1.5);
  }
  else {
    normal_pay = hours *  rate;
    overtime_pay = 0;
  }
    gross = normal_pay + overtime_pay;
    tax=0.16 * gross;
    net = gross - tax;
    // print payslip
    printf("emp NO:\t%d\n",emp_no);
    printf("Employee Name: \t%s\n",name);
    printf("normal pay: \t%d\n",normal_pay);
    printf("overtime pay:\t%d\n",overtime_pay);
    printf("gross pay: \t%d\n",gross);
    printf("tax: \t%f\n",tax);
    printf("net pay: \t%f\n",net);

    return 0;
}
