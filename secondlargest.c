#include<stdio.h>
void main()
{
int n;
 printf("Enter the size of an array:");
  scanf("%d",&n);
   int a[n],i;
    printf("Enter the array elements");
     for (i=0; i<n; i++)
     scanf ("%d",&a[i]); 
     int big, sbig;
      big=a[0];
      sbig=a[1];
       if(big<sbig)
       { big=a[1];
        sbig=a[0];

}
for(i=1; i<n; i++)
 {
     if (big<a[i])
     {
         sbig=big;
          big=a[i];
          }
          else if(sbig<a[i])
           sbig-a[i];

}
printf("Second largest element is %d",sbig);
     }