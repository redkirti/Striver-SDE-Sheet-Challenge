#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
        vector<vector<long long int>> ans;
        vector<long long int> arr;
        arr.push_back(1);
        ans.push_back(arr);
        if(n==1)
            return ans;
        arr.push_back(1);
        ans.push_back(arr);
        if(n==2)
            return ans;
        n-=2;
        vector<long long int> v;
        while(n--){
            v.clear();
            v.push_back(1);
            for(long long int i=1;i<arr.size(); i++){
                v.push_back(arr[i]+arr[i-1]);
            }
            v.push_back(1);
            ans.push_back(v);
            arr = v;
        }
        return ans;
}
