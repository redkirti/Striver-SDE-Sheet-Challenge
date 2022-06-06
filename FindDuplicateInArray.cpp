#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	vector<int> freq(n, 0);
    for(auto x: arr){
        if(freq[x]!=0)
            return x;
        freq[x]=1;
    }
    return 0;
}