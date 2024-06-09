#include<stdio.h>

 int removeDuplicate(int *nums, int numSize)
 {
    int i=0;
    for( int j=1 ; j < numSize; j ++)
    {
        if( nums[i] !=  nums[j])
        {
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
 }
 int main()
 {
    int nums[3]={1,1,2};
    int numSize=3;
    int result =removeDuplicate(nums,numSize);
    printf("Result = %d",result);
    return 0;
 }