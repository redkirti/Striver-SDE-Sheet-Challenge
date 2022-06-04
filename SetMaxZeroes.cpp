#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            if(matrix[i][j]==0)
                matrix[i][j] = -999;
        }
    }
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            if(matrix[i][j]==-999){
                matrix[i][j] = 0;
                int ind=0;
                while(ind<matrix[0].size()){
                    if(matrix[i][ind]!=-999)
                        matrix[i][ind] = 0;
                    ind++;
                }      
                ind = 0;
                while(ind<matrix.size()){
                    if(matrix[ind][j]!=-999)
                        matrix[ind][j] = 0;
                    ind++;
                }  
            }
        }
    }
}