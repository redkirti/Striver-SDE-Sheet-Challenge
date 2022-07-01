int removeDuplicates(vector<int> &arr, int n) {
	int element, ind = -1, count = 1;
    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1]){
            if(ind==-1)
                ind = i;
            continue;
        }
        else{
            if(ind!=-1){
                arr[ind] = arr[i];
                ind++;
            }
            count++;
        }
    }
    return count;
}