#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    long l = 0, r = n-1, leftmax = 0, rightmax = 0;
    long ans = 0;
    while(l<r){
        if(arr[l]<=arr[r]){
            if(arr[l]>leftmax)
                leftmax = arr[l];
            else
                ans += (leftmax-arr[l]);
            l++;
        }
        else{
            if(arr[r]>rightmax)
                rightmax = arr[r];
            else
                ans += (rightmax-arr[r]);
            r--;
        }
    }
    return ans;
}