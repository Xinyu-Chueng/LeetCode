//
//  main.c
//  26. Remove Duplicates from Sorted Array
//
//  Created by Xinyu-Chueng on 2019/9/15.
//  Copyright © 2019 Xinyu-Chueng. All rights reserved.
//

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0) return 0;
    if(numsSize == 1) return 1;
    int num = 0;
    nums[num++] = nums[0];
    int i;
    for(i = 0;i < numsSize - 1;i++){
        if(nums[i + 1] > nums[i])
            nums[num++] = nums[i + 1];
    }
    return num;
}

void print(int* nums,int num){
    int i;
    for(i = 0;i < num ;i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
}

int main(){
    //int nums[17] = {0,0,1,2,2,3,4,5,5,6,6,6,7,8,9,9,10};
    int nums[3] = {1,1,2};
    int num = removeDuplicates(nums,3);
    printf("%d\n",num);
    print(nums,num);
    return 0;
}
