#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows for the matrices: ";
    cin >> rows;
    cout << "Enter the number of columns for the matrices: ";
    cin >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    cout << "Enter elements for the first matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements for the second matrix:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Sum of the matrices:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
