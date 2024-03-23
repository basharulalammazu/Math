#include <bits/stdc++.h>
using namespace std;

bool IdentityMatrix(const vector<vector<int>>& matrix, int m, int n); 
bool ZeroMatrix(vector<vector<int>>& matrix, int m, int n);
vector<int> PrincipleDiagon(vector<vector<int>>& matrix, int m);
vector<int> TransformMatrix(vector<vector<int>>& matrix, int m, int n);
vector<int> TransformMatrix(vector<vector<int>>& matrix, int m, int n);
bool SymmetricMatrix(const vector<vector<int>>& matrix, int m, int n);
bool SkewSymmetricMatrix(const vector<vector<int>>& matrix, int m, int n); 
bool SingularMatrix(const vector<vector<int>>& matrix, int m, int n);




int main() 
{
    int m, n;
    
    cout<<"Enter the number of rows: ";
    cin>>m;
    
    cout<<"Enter the number of columns: ";
    cin>>n;
    
    vector<vector<int>> matrix(m, vector<int>(n)); 
    
    cout<<"Enter elements:\n";
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
            cin>>matrix[i][j];
        
    }
    
    if (m == n)
    {
        cout<<"Square Matrix\n";
        vector<int> principleDiagon = PrincipleDiagon(matrix, m);
        int i = m-1;
        
        cout<<"Principle Diagon: ";
        while(i>=0)
        {
            cout<<principleDiagon[i]<<" ";
            i--;
        }
        cout<<"\n";
    }
        
     
    
    
    else
        cout<<"Rectangle Matrix\n";
    
    
    if (IdentityMatrix(matrix, m, n)) 
        cout<<"Identity Matrix\n";
        
        
    else 
    {
        cout<<"Not an Identity Matrix\n";
        
        // if matrix is Identity matrix then not chance that matrix is not zero matrix
        if(ZeroMatrix(matrix, m, n))
            cout<<"Zero Matrix\n";
        
        else
            cout<<"Not a zero Matrix\n";
    }
                            
        
    

    return 0;
}

vector<int> PrincipleDiagon(vector<vector<int>>& matrix,int m)
{
    vector<int> arr;
    
    while(m>0)
    {
        arr.push_back(matrix[m-1][m-1]);
        m--;
    }
    
    return arr;
}

bool IdentityMatrix(const vector<vector<int>>& matrix, int m, int n) 
{
    if (m != n) 
        return false;
    
    
    for (int i = 0; i < m; i++) 
    {
        if (matrix[i][i] != 1) 
            return false;
        
        for (int j = 0; j < n; j++) 
        {
            if (i != j && matrix[i][j] != 0) 
                return false;
            
        }
    }
    
    return true;
}


bool ZeroMatrix(vector<vector<int>>& matrix, int m, int n)
{
    for(int i =0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(matrix[i][j] != 0)
                return false;
        }
    }
    
    return true;
}


vector<int> TransformMatrix(vector<vector<int>>& matrix, int m, int n)
{
    
}

bool SymmetricMatrix(const vector<vector<int>>& matrix, int m, int n) 

bool SkewSymmetricMatrix(const vector<vector<int>>& matrix, int m, int n) 

bool SingularMatrix(const vector<vector<int>>& matrix, int m, int n) 




