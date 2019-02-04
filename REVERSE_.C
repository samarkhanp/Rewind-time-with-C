

#include<stdio.h>
#include<conio.h>
void main()
{
   int rem=0,n=987;
   while(n!=0)
   {
       rem=n%10; // storing last digit in rem
       printf("%d",rem);
       n=n/10;    //removing last digit


   }


}