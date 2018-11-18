#include<stdio.h>

int sum2Integer(int x, int y){
    return x + y;
}

int sum1dim(int x[15]){
    int sum = 0;
    for(int counter = 0; counter < 15; counter++)
        sum = sum + x[counter];
    return sum;
}

void sum2matrix(int x[][3],int y[][3],int z[][3]){
for(int r = 0; r < 5; r++)
            for(int c = 0; c < 3; c++)
                z[r][c] = x[r][c] + y[r][c];

}

int main(){

        int x = 7, y = 9;
        printf("The sum of two integer is %d.\n\n", sum2Integer(x,y));
        int dim1[15];
        for(int counter = 0; counter < 15; counter++)
            dim1[counter] = counter + 1;
        printf("The sum of the values of a 1-Dimensional array is %d.\n\n", sum1dim(dim1));

        int row = 5, col = 3, val = 1, val2 = 15;

        int dim2[row][col], dim22[row][col], dim3[row][col];
        for(int r = 0; r < row; r++)
            for(int c = 0; c < col; c++){
                dim2[r][c] = val++;
                dim22[r][c] = val2--;
            }
        sum2matrix(dim2,dim22,dim3);
        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++)
               printf("%d ", dim3[row][col]);
        printf("\n");
        }

    return 0;
}
