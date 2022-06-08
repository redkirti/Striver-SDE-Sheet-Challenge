#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	vector<vector<int>> mat(m, vector<int>(n));
    for(int i=0; i<m; i++) mat[i][n-1] = 1;
    for(int i=0; i<n; i++) mat[m-1][i] = 1;
    for(int i=m-2; i>=0; i--)
        for(int j=n-2; j>=0; j--)
            mat[i][j] = mat[i+1][j] + mat[i][j+1];
    return mat[0][0];
}