#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> ans;
    int i=0, j = arr.size()-1, t;
    sort(arr.begin(), arr.end());
    while(i<j){
        t = arr[i]+arr[j];
        if(t == s){
            if(arr[i]==arr[j]){
                int count = 2, num = arr[i];
                while(arr[++i] == num && i<j) count++;
                while(arr[--j] == num && j>i) count++;
                count  = (count * (count-1))/2;
                vector<int> v;
                v.push_back(num);
                v.push_back(num);
                while(count--) ans.push_back(v);
            }
            else{
                int counta=1, countb=1,numa = arr[i], numb = arr[j], p;
                while(arr[++i] == numa && i<j) counta++;
                while(arr[--j] == numb && j>=i) countb++;
                p = counta*countb;
                vector<int> v;
                v.push_back(numa);
                v.push_back(numb);
                while(p--) ans.push_back(v);
            }
        }
        else if(t<s)
            i++;
        else
            j--;
    }
    return ans;
}