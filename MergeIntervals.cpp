#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

// */

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    vector<int> temp;
    int start = intervals[0][0];
    int end = intervals[0][1];
    for(int i=1; i<intervals.size(); i++){
        if(intervals[i][0]<=end){
            end = max(intervals[i][1], end); 
        }
        else{
            temp.push_back(start);
            temp.push_back(end);
            ans.push_back(temp);
            temp.clear();
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    temp.push_back(start);
    temp.push_back(end);
    ans.push_back(temp);
    return ans;
}
