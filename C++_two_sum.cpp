#include<iostream>
#include<vector>
using namespace std;

class Khuong{
    public:
    vector<int> twosum(vector<int> &nums , int target){
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j =i+1 ; j <nums.size() ;j++)
            {
                if (nums[i] + nums[j] ==target)
                {
                    return {i,j};
                }
            }
        }
        return {};
    }
};    

int main()
{
    vector<int> nums={2,7,11,15};
    int target=9;
    Khuong K;
    vector <int> result= K.twosum(nums, target);
    cout <<"My result" << endl;
    for(int index : result)
    {
        cout << index << " ";
    }
    return 0;
}