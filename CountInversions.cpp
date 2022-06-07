#include <bits/stdc++.h> 
long long merge(long long *arr, int l, int mid, int r){
    vector<long long> v;
    int i= l, j= mid;
    long long count = 0;
    while(i<mid && j<=r){
        if(arr[i]<= arr[j])
            v.push_back(arr[i++]);
        else{
            v.push_back(arr[j++]);
            count += (mid-i);
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
long long mergeSort(long long *arr, int l, int r){
    long long count = 0;
    if(l<r){
        int mid = l +(r-l)/2;
        count += mergeSort(arr, l, mid);
        count += mergeSort(arr, mid+1, r);
        count += merge(arr, l, mid+1, r);
    }
    return count;
}
long long getInversions(long long *arr, int n){
   return mergeSort(arr, 0, n-1);
}