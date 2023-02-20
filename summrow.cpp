#include <iostream>
using namespace std;

int main() {

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row_sum = 0;
    int middle_row = sizeof(matrix)/sizeof(matrix[0])/2;
    for (int i = 0; i < sizeof(matrix[0])/sizeof(int); i++) {
     row_sum += matrix[middle_row][i];
    }

    int col_sum = 0;
    int middle_col = sizeof(matrix[0])/sizeof(int)/2;
    for (int i = 0; i < sizeof(matrix)/sizeof(matrix[0]); i++) {
       col_sum += matrix[i][middle_col];
    }
    cout << "Sum of middle row: " << row_sum << endl;
    cout << "Sum of middle column: " << col_sum << endl;

    return 0;
}

