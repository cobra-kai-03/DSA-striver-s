// Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	 //int n=matrix.size();
       // int m=matrix[0].size();
        int r[n] = {0}; // row array
    int c[m] = {0}; 
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    r[i]=1;
                    c[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(r[i]==1 || c[j]==1)
                {
                    matrix[i][j]=0;
                }
            }
        }
		return matrix;
}
