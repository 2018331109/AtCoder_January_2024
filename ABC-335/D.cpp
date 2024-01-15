#include <iostream>
#include <vector>

using namespace std;
int n;
vector<vector<int>> generateSpiralMatrix(int n)
{
    vector<vector<int>> result(n, vector<int>(n, 0));

    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int value = 1;

    while (top <= bottom && left <= right)
    {
        // Fill top row
        for (int i = left; i <= right; ++i)
            result[top][i] = value++;

        top++;

        // Fill right column
        for (int i = top; i <= bottom; ++i)
            result[i][right] = value++;

        right--;

        // Fill bottom row
        if (top <= bottom)
        {
            for (int i = right; i >= left; --i)
                result[bottom][i] = value++;
            bottom--;
        }

        // Fill left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; --i)
                result[i][left] = value++;
            left++;
        }
    }

    return result;
}

void printMatrix(const vector<vector<int>> &matrix)
{

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==(n/2) && j==i)
            {
                cout<<'T'<<" ";
            }
            else
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{

    cin >> n;

    vector<vector<int>> spiralMatrix = generateSpiralMatrix(n);


    printMatrix(spiralMatrix);

    return 0;
}

