#include <stdio.h>
int main()
{
   float a,b,c,d,e,m,n;
   printf("Enter marks of Maths :",a);
   scanf("%f",&a);
   printf("Enter marks of Physics :",b);
   scanf("%f",&b);
   printf("Enter marks of English :",c);
   scanf("%f",&c);
   printf("Enter marks of Chemistry :",d);
   scanf("%f",&d);
   printf("Enter marks of Hindi :",e);
   scanf("%f",&e);
   m=(a+b+c+d+e);
   n=m/5;
   if(n<=100 && n>=90)
   {
       printf("%f refers to grade A+",n);
   }
   else if(n>=75 && n<90)
   {
       printf("%f refers to grade A",n);
   }
   else if(n>=65 && n<75)
   {
       printf("%f refers to grade B+",n);
   }
   else if(n>=50 && n<65)
   {
       printf("%f refers to grade B",n);
   }
   else if(n>=35 && n<50)
   {
       printf("%f refers to grade C",n);
   }
   else if(n<35)
   {
       printf("Student is fail");
   }

   return 0;
   
}
