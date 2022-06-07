#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int l = 0, r = m-1, ind=-1, mid;
    while(l<=r){
        mid = l + (r-l)/2;
        if(mat[mid][0]<=target){
            ind = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    if(ind!=-1){
            l = 0;
            r = n-1;
            while(l<=r){
                mid = l + (r-l)/2;
                if(mat[ind][mid]==target){
                    return true;
                }
                else if(mat[ind][mid]<target){
                    l = mid+1;
                }
                else
                    r = mid-1;
            }
        }
        return false;
}