#include<stdio.h>

void main(){
	int a[50][50],row,col,i,j,sum=0;
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
	

	
	printf("\n SUM OF DIAGONAL \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(i==j){
				sum = sum + a[i][j];
				
			}
			
		}
		printf("\n");
	
	}
			printf("%d" ,sum);	
}
