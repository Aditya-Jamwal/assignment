#include<stdio.h>
 void main()
 {
     struct salary
     {

char name [50]; 
int min;
 };
  int n;
   printf( "Enter the number of employees: ");
    scanf ( "%d" , &n) ;
     struct salary emp[n];
      printf( "Enter the details of employees" ) ; 
      for (int i=0; i<n; i++)
      {

printf( "\nEnter the name of employee: ");
 scanf( "%s", emp [i]. name) ;
  printf( "Enter Salary: ") ;
   scanf( "%d", &emp [i] .min) ;
      }

printf("\nEmployees Below Given Salary:") ;
 for(int i=0; i<n; i++)
 {

	if (emp [i] . min<10000)
    {

printf( "\nName: %s\nSalary: %d",emp [i] . name, emp [i] . min) ;
    }
else
{
 printf( "\nNo Employee Below Given Salary");
}
 }
 }
