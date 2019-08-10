

#include<stdio.h>
void main()
{
   int n;
   
   printf("ENTER ANY NUMBER::");
   scanf("%d",&n);
   
   while(n!=0)
   {
       printf("%d",(n%10));
       n/=10;    
   }
}
