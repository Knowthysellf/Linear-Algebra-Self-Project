#include<stdio.h>
#include<stdlib.h>
#include"LAG.h"

int main(){
    //first matrix
    int row1,col1;
    printf("For First Matrix\n");
    printf("Enter number of rows: ");
    scanf("%d",&row1);
    printf("Enter number of columns: ");
    scanf("%d",&col1);

    //Allocate memory for the first matrix
    int **matrix1=(int **) malloc(row1 *sizeof(int *));
    for(int i=0;i,row1;++i){
        matrix1[i]=(int *)malloc(col1 *sizeof(int));
    }
    printf("Input for first matrix : \n");
    inputMatrix(&matrix1,row1,col1);
}