#include<stdio.h>
int main(){
	int a[100],i,n,count=0;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("\nEnter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==2){
			continue;
		}
		else if(a[i]%2==0){
			count++;
		}
	}
	printf("%d composite numbers",count);
	return count;
}
