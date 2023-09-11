// #include <stdio.h>

// #define ROWS 3
// #define COLS 3

// int main() {

// //	intilize the matrix1 and matrix2

//     int matrix1[ROWS][COLS];
//     int matrix2[ROWS][COLS];
//     int result[ROWS][COLS];
//     int i, j, k;

//     // Input matrix1
//     printf("Enter elements for Matrix 1:\n");
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             printf("Enter element at position [%d][%d]: ", i, j);
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     // Input matrix2
//     printf("Enter elements for Matrix 2:\n");
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             printf("Enter element at position [%d][%d]: ", i, j);
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

//     // Perform matrix multiplication
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             result[i][j] = 0;
//             for (k = 0; k < COLS; k++) {
//                 result[i][j] += matrix1[i][k] * matrix2[k][j];
//             }
//         }
//     }

//     // Print matrix1
//     printf("\nMatrix 1:\n");
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             printf("%d\t", matrix1[i][j]);
//         }
//         printf("\n");
//     }

//     // Print matrix2
//     printf("\nMatrix 2:\n");
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             printf("%d\t", matrix2[i][j]);
//         }
//         printf("\n");
//     }

//     // Print result
//     printf("\nMatrix Multiplication:\n");
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             printf("%d\t", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int row, col, i, j;
    cout << "Enter the Row: " << endl;
    cin >> row;
    cout << "Enter the Column: " << endl;
    cin >> col;
    //...........TAKE A FIRST MATRIX ELEMENT  FROM THE USER.........
    int a[row][col];
    cout << "Enter the first matrix element:" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    //..........PRINT SECOND MATRIX.........
    cout << "This is first matrix" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << a[i][j]<<" ";
        }
        cout<<" "<<endl;
    }
    //...........TAKE A FIRST MATRIX ELEMENT  FROM THE USER.........
     int b[row][col];
    cout << "Enter the second matrix element:" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> b[i][j];
        }
    }
    //..........PRINT SECOND MATRIX.........
    cout << "This is second matrix" << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << b[i][j]<<"  ";
        }
        cout<<" "<<endl;
    }
    // .........LOGIC OF SUM OF MATRIX.........
    cout<<"Sum of matrix ="<<endl;
    int sum[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum[i][j] = a[i][j]+b[i][j];
        }
    }
    //.........PRINT SUM OF MATRIX..........
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    // .........LOGIC OF MULTIPLY OF MATRIX.........
    cout<<"Multiplication of matrix :"<<endl;
    int d[row][col];
    int k;
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {   
           d[i][j]=0;
           for(k=0;k<row;k++)
           {
                d[i][j]=d[i][j]+a[i][k]*b[k][j];
           }
        }
    }
    //.........PRINT MULTIPLY OF MATRIX..........
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }


    // .........LOGIC OF TRANSPOSE OF MATRIX.........
    cout<<"Transpose of first matrix:"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of Second matrix:"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<b[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
