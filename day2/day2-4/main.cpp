#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int me =nums[0];
        int count = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(count == 0)
            {
                me = nums[i];
            }
            if(me == nums[i])
                count++;
            else{
                count--;
            }
        }
        return me;
    }
};