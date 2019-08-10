void main()
{

    int a,b,c=1,count=1;
   clrscr();

     printf("ENTER ANY NUMBER::");
     scanf("%d",&a);

     printf("ENTER POWER::");
     scanf("%d",&b);

	 while(count<=b)
	 {

	    c=c*a;
	    count++;
	 }


	 printf("POWER IS ::%d",c);



   getch();


}
