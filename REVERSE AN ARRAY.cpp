#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,a[100],i,temp;
	printf("Enter the array :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++){
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
       }
       for(i=0;i<n;i++){
       	printf("%d",a[i]);
	   }
	return 0;
}
