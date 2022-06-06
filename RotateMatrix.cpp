#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int temp1, temp2;
    int x=0, y=0;
    int i=0, j=0;
    while(i<n-1 && j<m-1){
        temp1 = mat[i][j];
        j++;
        while(j<m){
            temp2 = mat[i][j];
            mat[i][j] = temp1;
            temp1 = temp2;
            j++;
        }
        i++;
        j--;
        while(i<n){
            temp2 = mat[i][j];
            mat[i][j] = temp1;
            temp1 = temp2;
            i++;
        }
        i--;
        j--;
        while(j>=y){
            temp2 = mat[i][j];
            mat[i][j] = temp1;
            temp1 = temp2;
            j--;
        }
        j++;
        i--;
        while(i>=x){
            temp2 = mat[i][j];
            mat[i][j] = temp1;
            temp1 = temp2;
            i--;
        }
        m--;
        n--;
        x++;y++;
        i=x; j = y;
    }
    
}