#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int i;
    for(i=n-1; i>0; i--){
        if(permutation[i]>permutation[i-1])
            break;
    }
    if(i==0){
        reverse(permutation.begin(), permutation.end());
    }
    else{
        int ind = i-1;
        for(i=n-1; i>=0; i--){
            if(permutation[i]>permutation[ind]){
                permutation[i] = permutation[i]+permutation[ind];
                permutation[ind] = permutation[i] - permutation[ind];
                permutation[i] = permutation[i] - permutation[ind];
                break;
            }
        }
        reverse(permutation.begin()+ind+1, permutation.end());
    }
    return permutation;
}