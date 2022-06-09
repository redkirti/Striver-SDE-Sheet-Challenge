#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_map<int, int> m;
    vector<bool> visited(arr.size(), false);
    for(int i=0; i<arr.size(); i++)
        m[arr[i]] = i;
    int count=1, mx = 0;
    for(auto x:m){
        count = 1;
        if(!visited[x.second]){
            visited[x.second] = true;
            int num1 = x.first-1;
            int num2 = x.first+1;
            while(m.find(num1)!=m.end()){
                visited[m.find(num1)->second] = true;
                count++;
                num1--;
            }
            while(m.find(num2)!=m.end()){
                visited[m.find(num2)->second] = true;
                count++;
                num2++;
            }
            if(count>mx)
                mx = count;
        }            
    }
    return mx;
}