#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    vector<vector<int>> ans;
	sort(arr.begin(), arr.end());
    for(int i=0; i<n-2; i++){
        if (i > 0 && arr[i] == arr[i-1])
            continue;
        int x = i+1, y = n-1;
        while(x<y){
            if(arr[i]+arr[x]+arr[y]==K){
                ans.push_back({arr[i], arr[x], arr[y]});
                while(x+1<y && arr[x]==arr[x+1])x++;
                while(x+1<y && arr[y]==arr[y-1])y--;
                x++;y--;
            }
            else if(arr[i]+arr[x]+arr[y]>K) y--;
            else x++;
        }
    }
    return ans;
}