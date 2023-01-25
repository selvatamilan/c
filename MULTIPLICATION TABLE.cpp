#include<stdio.h>
int main(){
	int i,n,m,j;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("Enter the limit :");
	scanf("%d",&j);
	for(i=1;i<=j;++i){
		m=n*i;
		printf("%d X %d = %d\n",n,i,m);
	}
	return 0;
}
