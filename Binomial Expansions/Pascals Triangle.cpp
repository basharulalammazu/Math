#include <bits/stdc++.h>
using namespace std;

void generatePascalsTriangle(int numRows) 
{
    int triangle[numRows][numRows];

    // Initialize the first row
    for (int i = 0; i < numRows; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            // The first and last values in every row are 1
            if (j == 0 || j == i) 
                triangle[i][j] = 1;
            else 
                // Each triangle element is equal to the sum of the elements
                // above-and-to-the-left and above-and-to-the-right.
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            
        }
    }

    // Print the triangle
    for (int i = 0; i < numRows; i++) 
    {
        for (int j = 0; j <= i; j++) 
            cout << triangle[i][j] << " ";
        
        cout << endl;
    }
}

int main() 
{
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    generatePascalsTriangle(numRows);

    return 0;
}
