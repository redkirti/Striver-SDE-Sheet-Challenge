#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    int count1=0, count2=0, num1=-1, num2=-1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==num1){
            count1++;
        }
        else if(arr[i]==num2){
            count2++;
        }
        else if(count1==0){
            num1 = arr[i];
            count1=1;
        }
        else if(count2==0){
            num2 = arr[i];
            count2=1;
        }
        else{
            count1--;
            count2--;
        }
    }
    vector<int> ans;
    count1=0;
    count2=0;
    int target = arr.size()/3;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==num1)
            count1++;
        else if(arr[i]==num2)
            count2++;
    }
    if(count1>target)
        ans.push_back(num1);
    if(count2>target)
        ans.push_back(num2);
    return ans;
}