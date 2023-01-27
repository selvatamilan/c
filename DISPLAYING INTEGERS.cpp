#include<stdio.h>
int main(){
	int v[5],i;
	printf("Enter the values :");
	for(i=0;i<5;++i){
		scanf("%d",&v[i]);
	}
	printf("Displaying Integers");
	for(i=0;i<5;++i){
		printf("%d\n",v[i]);
	}
	return 0;
	
}
