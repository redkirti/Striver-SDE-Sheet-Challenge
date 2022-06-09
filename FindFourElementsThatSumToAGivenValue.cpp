#include <bits/stdc++.h>
string fourSum(vector<int> arr, int target, int n) {
    int temp;
    unordered_map<int, pair<int, int>> m;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            m[arr[i]+arr[j]] = {i,j};
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            temp = target - (arr[i]+ arr[j]);
            if(m.find(temp)!=m.end()){
                pair<int, int> p = m[temp];
                if(p.first!=i && p.second!=j && p.first!=i && p.second!=j)
                    return "Yes";
            }
        }
    }
    return "No";
}
