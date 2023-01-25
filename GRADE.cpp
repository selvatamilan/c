#include<stdio.h>
int main() {
	int m;
    printf("Enter the mark :");
    scanf("%d",&m);
    if(m>=90&&m<=100)
       {
       	 printf("A Grade");
	   }
	else if(m>=80&&m<=89)
	   {
	   	printf("B grade");
		}   
	else if(m>=70&&m<=79)
	    {
	    printf("C grade");	
		}
	else if(m<70&&m>=50)
	    {
	    printf("D grade");
		}	
	else if(m>0&&m<50)
	    {
	    printf("FAIL!!!!!");	
		}	
	else
	    {
	    printf("ERROR!!!!");
		}
return 0;
}
