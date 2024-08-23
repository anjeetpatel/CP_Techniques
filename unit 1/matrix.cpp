#include <iostream>
#include <vector>
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
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    setZeroes(matrix);

    cout << "Matrix after setting zeroes:" << endl;
    printMatrix(matrix);

    return 0;
}