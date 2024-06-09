#include<stdio.h>
#include<stdlib.h>   
int* twosum( int* nums , int numSize, int target, int *returnSize )
{
    for(int i=0; i< numSize ; i++)
    {
        for( int j=i+1 ; j <numSize ;j++)
        {
            if(nums[j] == target -nums[i])
            {
                int *result = malloc(sizeof(int)*2);
                result[0]=i;
                result[1]=j;
                *returnSize =2;
                return result;
            }
        }
    }
    *returnSize=0;
    return NULL;
}
int main()
{
    int nums[4]={1,7,3,15};
    int target =4;
    int returnSize;
    int numSize=4;
    int *result =twosum(nums,numSize,target,&returnSize);
    if (result !=NULL)
    {
        printf("Indices :%d,%d\n",result[0], result[1]);
        free(result);
    }
    
}