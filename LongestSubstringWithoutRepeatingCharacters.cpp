#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int i=0, j = 0, n = input.size(), mx = 0;
    unordered_map<char, int> m;
    while(j<n){
        if(m.find(input[j])==m.end() || m[input[j]]==0){
            m[input[j]]++;
            mx = max(mx, j-i+1);
            j++;
        }
        else{
            while(input[i]!=input[j]){
                m[input[i]]--;
                i++;
            }
            i++;j++;
        }
    }
    return mx;
}