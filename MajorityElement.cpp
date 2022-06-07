#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	int ans = arr[0], count = 1;
    for(int i=1;i<n; i++){
        if(count==0){
            ans = arr[i];
            count++;
        } 
        else if(arr[i]==ans){
            count++;
        }
        else
            count--;
    }
    count = 0;
    for(int i=0; i<n; i++)
        if(arr[i] == ans)
            count++;
    if(count>(n/2))
        return ans;
    return -1;
}