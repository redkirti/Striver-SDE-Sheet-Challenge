#include <bits/stdc++.h> 
int merge(vector<int> &arr, int l, int mid, int r){
    vector<int> v;
    int i= l, j= mid;
    int count = 0, y = mid;
    for (int x = l; x < mid; x++) {
        while (y <= r && arr[x] > 2 * arr[y]) y++;
        count += (y - (mid));
    }
    while(i<mid && j<=r){
        if(arr[i]<= arr[j])
            v.push_back(arr[i++]);
        else{
            v.push_back(arr[j++]);
        }
    }
    while(i<mid)
        v.push_back(arr[i++]);
    while(j<=r)
        v.push_back(arr[j++]);
    for(int x=l, y=0; x<=r; x++, y++)
        arr[x] = v[y];
    return count;
}
int mergeSort(vector<int> &arr, int l, int r){
    int count = 0;
    if(l<r){
        int mid = l +(r-l)/2;
        count += mergeSort(arr, l, mid);
        count += mergeSort(arr, mid+1, r);
        count += merge(arr, l, mid+1, r);
    }
    return count;
}

int reversePairs(vector<int> &arr, int n){
	return mergeSort(arr,0,n-1);
}