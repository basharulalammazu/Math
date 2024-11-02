#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<double>> Matrix;

// Function to display a matrix
void displayMatrix(const Matrix &matrix) 
{
    for (const auto &row : matrix) 
    {
        for (double element : row) 
            cout << setw(8) << element << " ";
        
        cout << endl;
    }
}

// Function to add two matrices
Matrix addMatrices(const Matrix &A, const Matrix &B) 
{
    int rows = A.size();
    int cols = A[0].size();
    Matrix result(rows, vector<double>(cols, 0));
    
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = A[i][j] + B[i][j];
    return result;
}

// Function to subtract two matrices
Matrix subtractMatrices(const Matrix &A, const Matrix &B) 
{
    int rows = A.size();
    int cols = A[0].size();
    Matrix result(rows, vector<double>(cols, 0));
    
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[i][j] = A[i][j] - B[i][j];
    return result;
}

// Function to multiply two matrices
Matrix multiplyMatrices(const Matrix &A, const Matrix &B) 
{
    int rowsA = A.size(), colsA = A[0].size();
    int rowsB = B.size(), colsB = B[0].size();
    
    if (colsA != rowsB)
        throw runtime_error("Matrix dimensions do not match for multiplication.");
    
    Matrix result(rowsA, vector<double>(colsB, 0));
    
    for (int i = 0; i < rowsA; ++i)
        for (int j = 0; j < colsB; ++j)
            for (int k = 0; k < colsA; ++k)
                result[i][j] += A[i][k] * B[k][j];
    
    return result;
}

// Function to get the transpose of a matrix
Matrix transposeMatrix(const Matrix &A) 
{
    int rows = A.size();
    int cols = A[0].size();
    Matrix result(cols, vector<double>(rows, 0));
    
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result[j][i] = A[i][j];
    return result;
}

// Helper function to find the determinant of a square matrix
double determinant(const Matrix &A) 
{
    int n = A.size();
    if (n == 1) return A[0][0];
    if (n == 2) return A[0][0] * A[1][1] - A[0][1] * A[1][0];
    
    double det = 0;
    for (int p = 0; p < n; ++p) 
    {
        Matrix subMatrix(n - 1, vector<double>(n - 1));
        for (int i = 1; i < n; ++i)
        {
            int colIndex = 0;
            for (int j = 0; j < n; ++j) 
            {
                if (j == p) continue;
                subMatrix[i - 1][colIndex++] = A[i][j];
            }
        }
        det += A[0][p] * determinant(subMatrix) * (p % 2 == 0 ? 1 : -1);
    }
    return det;
}

// Function to calculate the inverse of a square matrix
Matrix inverseMatrix(const Matrix &A) 
{
    int n = A.size();
    if (A[0].size() != n)
        throw runtime_error("Only square matrices have an inverse.");
    
    double det = determinant(A);
    if (det == 0) 
        throw runtime_error("Matrix is singular and cannot be inverted.");
    
    
    Matrix adjugate(n, vector<double>(n, 0));
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            Matrix subMatrix(n - 1, vector<double>(n - 1));
            for (int x = 0; x < n; ++x) 
            {
                if (x == i) continue;
                for (int y = 0; y < n; ++y) 
                {
                    if (y == j) 
                        continue;
                    subMatrix[x < i ? x : x - 1][y < j ? y : y - 1] = A[x][y];
                }
            }
            adjugate[j][i] = determinant(subMatrix) * ((i + j) % 2 == 0 ? 1 : -1);
        }
    }
    for (auto &row : adjugate)
        for (double &element : row)
            element /= det;
    return adjugate;
}

int main() 
{
    int rowsA, colsA, rowsB, colsB;
    cout << "Enter the number of rows for matrix A: ";
    cin >> rowsA;
    cout << "Enter the number of columns for matrix A: ";
    cin >> colsA;
    cout << "Enter the number of rows for matrix B: ";
    cin >> rowsB;
    cout << "Enter the number of columns for matrix B: ";
    cin >> colsB;
    
    Matrix A(rowsA, vector<double>(colsA)), B(rowsB, vector<double>(colsB));

    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsA; j++)
            cin >> A[i][j];

    cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < rowsB; i++)
        for (int j = 0; j < colsB; j++)
            cin >> B[i][j];

    cout << "\nMatrix A:\n";
    displayMatrix(A);
    cout << "\nMatrix B:\n";
    displayMatrix(B);

    if (rowsA == rowsB && colsA == colsB) 
    {
        cout << "\nAddition of A and B:\n";
        displayMatrix(addMatrices(A, B));

        cout << "\nSubtraction of A and B:\n";
        displayMatrix(subtractMatrices(A, B));
    } 
    else 
        cout << "\nAddition and Subtraction are not possible due to different dimensions.\n";
    

    if (colsA == rowsB) 
    {
        cout << "\nMultiplication of A and B:\n";
        displayMatrix(multiplyMatrices(A, B));
    } 
    else 
        cout << "\nMultiplication is not possible due to incompatible dimensions.\n";
    

    cout << "\nTranspose of Matrix A:\n";
    displayMatrix(transposeMatrix(A));

    if (rowsA == colsA) 
    {
        try 
        {
            cout << "\nInverse of Matrix A:\n";
            displayMatrix(inverseMatrix(A));
        } 
        catch (const runtime_error &e) 
        {
            cout << e.what() << endl;
        }
    } else 
        cout << "\nInverse of Matrix A is not possible as it is not a square matrix.\n";
    

    return 0;
}
