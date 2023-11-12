#include<stdio.h>
void inputMatrix(int **matrix , int row ,int col){
    printf("Enter elements of the matrix :\n");
    for(int i=0;i<row;++i){
        for(int j=0;i<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

}