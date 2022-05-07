#include<stdio.h>
void main()
{
	int a=0,b,c=0,u;
	int n,s;
	printf("\n\n\n\t_________Welcome to my mini project________\n");
    printf("\tDo you want to enter the first number ?\n"); // Target of Twenty number.
	printf("\t1. Yes\n");
	printf("\t2. No\n");
	printf("\nEnter the choice: ");
	scanf("%d",&s);
	switch (s)
	{
	case 1: 
	     {
             do
	           {
                   do
		            {
     		           printf("Enter the number: ");
	    	           scanf("%d",&a);
		            } while (!(a==c+1||a==c+2||a==0));
                  
                 if (a==0)
				  n=1;
				 else if (a==1)
                   n=2;
	             else if (a==2)
		           n=3;
	             else if (a==3)
                   n=5;
	             else if (a==4)
                  n=5;
	             else if (a==5)
	              n=6;
	             else if (a==6)
	              n=8;
	             else if (a==7)
	              n=8;
	             else if (a==8)
	              n=9;
	             else if (a==9)
	              n=11;
	             else if (a==10)
	              n=11;
	             else if (a==11)
	              n=12;
	             else if (a==12)
	              n=14;
	             else if (a==13)
	              n=14;
	             else if (a==14)
	              n=15;
	             else if (a==15)
	              n=17;
	             else if (a==16)
	              n=17;
	             else if (a==17)
	              n=18;
	             else if (a==18)
	              n=20;
	             else if (a==19)
	              n=20;

                  c=n;
                 if (a==20)
	                {
	            	   printf("\nCongratulations, you are the winner....\n\n");
	            	   break;
	                } 
	             else if (n==20)
	                {
     		          printf("My number is : %d\n",n);
					  printf("\nOh!..., oh!..., you lost.\n\n");
	            	  break;
	            	}
		          printf("My number is : %d\n",n);
	            } while(n<=20 || a<=20);

    	}
		break;
	
	case 2:
	    {
		    do
        	{
  		        printf("My number is : %d\n",n);
                 do
		         {
     		       printf("Enter the number: ");
	    	       scanf("%d",&a);
		         } while (!(a==c+1||a==c+2));

               if (a==1)
                n=2;
	           else if (a==2)
	        	n=3;
	           else if (a==3)
                n=5;
	           else if (a==4)
                n=5;
	           else if (a==5)
	            n=6;
	           else if (a==6)
	            n=8;
	           else if (a==7)
	            n=8;
	           else if (a==8)
	            n=9;
	           else if (a==9)
	            n=11;
	           else if (a==10)
	            n=11;
	           else if (a==11)
	            n=12;
	           else if (a==12)
	            n=14;
	           else if (a==13)
	            n=14;
	           else if (a==14)
	            n=15;
	           else if (a==15)
	            n=17;
	           else if (a==16)
	            n=17;
	           else if (a==17)
	            n=18;
	           else if (a==18)
	            n=20;
	           else if (a==19)
	            n=20;

               c=n;
               if (a==20)
	              {
	          	     printf("\nCongratulations, you are the winner....\n\n");
	          	     break;
	              } 
	           else if (n==20)
	              {
	          	     printf("\nOh!..., oh!..., you lost.\n\n");
	          	     break;
	        	  }
	          } while(n<=20 || a<=20);
	    }
	}
}