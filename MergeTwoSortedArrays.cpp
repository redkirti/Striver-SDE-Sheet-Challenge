#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
   priority_queue<int, vector<int>, greater<int> > q;
    for(auto x: arr2)
        q.push(x);
    for(int i=0; i<m; i++){
        if(arr1[i]>q.top()){
            int temp = arr1[i];
            arr1[i] = q.top();
            q.pop();
            q.push(temp);
        }
    }
    while(!q.empty()){
        arr1[m++] = q.top();
        q.pop();
    }
    return arr1;
}