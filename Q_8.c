#include<stdio.h>

void main(){
	int a[50][50],row,col,i,j;
	int b[50][50];
	
	printf("\n Matrix \n");
	printf("Enter number of rows: ");
	scanf("%d",&row);
	printf("Enter number of columns: ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d" ,&a[i][j]);
		}
	}	
	

	
	printf("\n TRANSPOSE \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		printf("%d ",a[j][i]);
			
		}
		printf("\n");
	}
		
}
