int longestSubSeg(vector<int> &arr , int n, int k){
   int ans=0;
    for(int l=0, r=0; r < n; r++) {
        if(arr[r] == 0)
            if(k == 0)
                while(arr[l++] != 0);       
            else k--;
        ans = max(ans, r - l + 1);
    }
    return ans;
}
