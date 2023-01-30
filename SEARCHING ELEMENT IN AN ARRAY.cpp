#include<stdio.h>
int main(){
	int a[100],i,n,m;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want :");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		if(a[i]%m==0){
			printf("%d is at %d position",a[i],i+1);
			break;
		}
	}
}
