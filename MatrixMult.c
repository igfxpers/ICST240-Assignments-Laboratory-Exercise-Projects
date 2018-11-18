#include<stdio.h>

int Matrix1Row = 4, Matrix1Column = 5;
int Matrix2Row = 5, Matrix2Column = 4;

void MatrixMultiplication(int Matrix1[][Matrix1Column], int Matrix2[][Matrix2Column], int Matrix3[][Matrix2Row]){

    for(int counter1 = 0; counter1 < Matrix1Row; counter1++){
            for(int counter2 = 0; counter2 < Matrix2Column; counter2++){
                for(int counter3 = 0; counter3 < Matrix2Row; counter3++){
                   Matrix3[counter1][counter2] = Matrix3[counter1][counter2] + Matrix1[counter1][counter3] * Matrix2[counter3][counter2];
                }
            }
        }
        
}
int main(){

        int Matrix1[Matrix1Row][Matrix1Column]; 
        int Matrix2[Matrix2Row][Matrix2Column]; 
        int Matrix3[Matrix1Column][Matrix2Row];

        for(int row = 0; row < Matrix1Row; row++){
            for(int column = 0; column < Matrix1Column; column++)
                Matrix1[row][column] = (row + 3) * (column + 2); 
            }
        for(int row = 0; row < Matrix2Row; row++){
            for(int column = 0; column < Matrix2Column; column++)
                Matrix2[row][column] = (row + 3) * (column + 2); 
            }
        for(int row = 0; row < Matrix1Column; row++){
            for(int column = 0; column < Matrix2Row; column++)
                Matrix3[row][column] = 0; 
            }

        MatrixMultiplication(Matrix1, Matrix2, Matrix3);

        
        printf("Matrix 1:\n");
        for(int row = 0; row < Matrix1Row; row++){
            for(int column = 0; column < Matrix1Column; column++)
                printf("%d\t", Matrix1[row][column]);
            printf("\n");
            }

        printf("\nMatrix 2:\n");

        for(int row = 0; row < Matrix2Row; row++){
            for(int column = 0; column < Matrix2Column; column++)
                printf("%d\t", Matrix2[row][column]);
            printf("\n");
        }

    printf("\nProduct Matrix:\n");

        for(int row = 0; row < Matrix1Row; row++){
            for(int column = 0; column < Matrix2Column; column++)
                printf("%d\t", Matrix3[row][column]);
            printf("\n"); 
            }
    printf("\n\n");
    return 0;
}