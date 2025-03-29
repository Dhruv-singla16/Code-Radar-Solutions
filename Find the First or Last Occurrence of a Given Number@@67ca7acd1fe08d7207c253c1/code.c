int findOccurrence(int arr[],int n,int target,char mode){
    if(mode=='F'){
        for(i=0;i<n;i++){
            if(arr[i] == arr[i+1])
                return i;
        }
    }
    if(mode=='L'){
        for(i=n-1;i>0;i--){
            if(arr[i] == arr[i+1])
                return i;
        }
    }
}