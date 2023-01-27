#include<stdio.h>
int main(){
	int n,m,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	if(n>0){
		while(n>0){
			m=n%10;
			sum=sum+m;
			n=n/10;
		}
		printf("Sum is %d",sum);
	}
	return 0;
}
