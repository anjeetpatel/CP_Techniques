// given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix?
#include <vector>
#include <iostream>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<bool> rowFlag(rows, false);
    vector<bool> colFlag(cols, false);

    // Mark rows and columns that need to be set to zero
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                rowFlag[i] = true;
                colFlag[j] = true;
            }
        }
    }

    // Set marked rows and columns to zero
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (rowFlag[i] || colFlag[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(const vector<vector<int>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    setZeroes(matrix);

    cout << "Matrix after setting zeroes:" << endl;
    printMatrix(matrix);

    return 0;
}