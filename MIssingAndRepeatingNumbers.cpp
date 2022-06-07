#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    vector<int> freq(n+1, 0);
    for(int i=0; i<n; i++)
        freq[arr[i]]++;
    int x, y;
    for(int i=1; i<=n; i++){
        if(freq[i]==0)
            x = i;
        else if(freq[i]==2)
            y = i;
    }
    return {x,y};
}
