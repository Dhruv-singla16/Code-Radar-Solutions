void printPrimesInRange(int a,int b){
    for(int i=a+1;i<b;i++){
        for(int c=2;c<i;c++){
            if(i%c!=0){
                printf("%d ",c);
            }
        }
    }
}