int kthSmallest(int arr[],int n,int k){
    if(k>n-1){
        return -1;
    }
    for(int i=0;i<n;i++){
        for(int r=0;r<n-1-i;r++){
            if(arr[r]>arr[r+1]){
                int temp=arr[r];
                    arr[r]=arr[r+1];
                    arr[r+1]=temp;

            }
            
        }
    }
    return arr[k-1];

}