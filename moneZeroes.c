void moveZeroes(int*nums,int numsize){
    int x=0;
    for(int i =0;i<numsize;i++){
        if(nums[i]!=0){
            nums[x]=nums[i];
            x++;

        }
    }
    while(x<numsize){
        nums[x]=0;
        x++;
    }
}

