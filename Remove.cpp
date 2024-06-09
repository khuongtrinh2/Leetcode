#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int removeDulication ( vector<int> &nums)
    {
        int k=0;
        for ( int i =0 ; i < nums.size() ; i++)
        {
            for ( int j = i +1  ;j < nums.size() ; j++)
            {
                if ( nums[i] != nums[i-1])
                {
                    if( nums[i] ==  nums[j])
                    {
                        k++;
                    }
                }
            }
        }
        return k;
    }
};

int main()
{
    Solution sol;
    vector<int> nums= {1,1,2};
    int result = sol.removeDulication(nums);
    cout << result << endl;
    return 0;

}




