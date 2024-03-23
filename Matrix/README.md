# Matrix Operations Program

Welcome to the Matrix Operations Program! This program provides a comprehensive set of operations for working with matrices, including elementary and advanced matrix operations.

## Elementary Matrix Operations

### Identity Matrix
- **Function:** `generateIdentityMatrix(size)`
- **Description:** Generates an identity matrix of the specified size.

### Zero Matrix
- **Function:** `createZeroMatrix(rows, cols)`
- **Description:** Creates a zero matrix with the specified number of rows and columns.

### Principal Diagonal
- **Function:** `extractPrincipalDiagonal(matrix)`
- **Description:** Extracts the principal diagonal elements of a matrix.

### Transform Matrix
- **Function:** `applyTransformation(matrix, transformation)`
- **Description:** Applies various transformations (scaling, translation, rotation, etc.) to a matrix.

### Symmetric Matrix
- **Function:** `isSymmetric(matrix)`
- **Description:** Checks if a matrix is symmetric.

### Skew Symmetric Matrix
- **Function:** `isSkewSymmetric(matrix)`
- **Description:** Determines if a matrix is skew-symmetric.

### Singular Matrix
- **Function:** `isSingular(matrix)`
- **Description:** Checks if a matrix is singular (non-invertible).

## Advanced Matrix Operations

### Matrix Addition
- **Function:** `addMatrices(matrix1, matrix2)`
- **Description:** Adds two matrices.

### Matrix Subtraction
- **Function:** `subtractMatrices(matrix1, matrix2)`
- **Description:** Subtracts one matrix from another.

### Matrix Multiplication
- **Function:** `multiplyMatrices(matrix1, matrix2)`
- **Description:** Multiplies two matrices.

### Prove (AB)^T = (A^T) * (B^T)
- **Function:** `proveTransposeProduct(matrixA, matrixB)`
- **Description:** Proves the transpose of the product of two matrices is equal to the product of their transposes.

### Determine a Matrix
- **Function:** `determineMatrixType(matrix)`
- **Description:** Determines the type of matrix (identity, zero, etc.).

### Determine Rank of a Matrix
- **Function:** `calculateMatrixRank(matrix)`
- **Description:** Calculates the rank of a matrix.

### Inverse Matrix
- **Function:** `findMatrixInverse(matrix)`
- **Description:** Finds the inverse of a matrix using various methods (shortcut for 2x2, ERO, REF, matrix inversion, etc.).

### Cramer's Rule
- **Function:** `solveLinearEquationsUsingCramersRule(matrix)`
- **Description:** Solves a system of linear equations using Cramer's rule.

### Gaussian Elimination Method
- **Function:** `solveLinearEquationsUsingGaussianElimination(matrix)`
- **Description:** Solves systems of linear equations using Gaussian elimination.

### Reduce REF (RREF)
- **Function:** `reduceToREF(matrix)`
- **Description:** Reduces a matrix to row echelon form (REF) or reduced row echelon form (RREF).

---

Feel free to contribute to this project by adding new features or improving existing ones. If you have any questions or suggestions, please contact us at basharulalam6@example.com.
