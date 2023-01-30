#include<stdio.h>
int main(){
	int a[100][100],b[100][100],c[100][100],n,i,j,k;
	printf("Enter the value of N :");
	scanf("%d",&n);
	printf("Enter the values of first matrix :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values of second matrix :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
				for(k=0;k<n;k++){
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
	printf("Product of two matrix : \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
