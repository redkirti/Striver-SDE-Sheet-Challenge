#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    unordered_map<int, int> m;
    int count = 0, sum=0, num;
    for(int i=0; i<arr.size(); i++){
        sum ^= arr[i];
        if(sum==x) count++;
        num = sum^x;
        if(m.find(num)!=m.end())
            count += m[num];
        m[sum]++;
    }
    return count;
}