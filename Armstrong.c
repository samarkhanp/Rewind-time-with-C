void main()
{

   int a,n,count=0,digit,c=1,ans,number=0;
   clrscr();
     printf("ENTER A NUMBER::");
     scanf("%d",&a);
      n=a;
     while(n!=0)
     {
	     count++;
	      n=n/10;
     }
     while(n!=0)
     {

	     digit=n%10;
   	   ans=1;
	     c=1;
	     while(c<=count)
	    {
	      ans=ans*digit;
	       c++;
	     }
	   number=number+ans;
    	n=n/10;
     }

     if(a==number)
     {
	printf("YESSS");
     }
     else
     {
	printf("no");
     }

    getch();

}
