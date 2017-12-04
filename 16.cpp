/*Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

    For example, given array S = {-1 2 1 -4}, and target = 1.

    The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()==3)
        {
            return nums[0]+nums[1]+nums[2];
        }
        int ret=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i =1;i!=nums.size()-1;i++)
        {
            int temp=nums[i];
            int left = 0;
            int right= nums.size()-1;
            int min =nums[left] + nums[right] + temp;
            int max=nums[left] + nums[right] + temp;
            while(left != i && right !=i )
            {
                if(nums[left] + nums[right] + temp < target)
                {
                    int tempmin = nums[left] + nums[right] + temp;
                    min=abs(target-min)>abs(target-tempmin)?tempmin:min;
                    left++;
                }
                else if(nums[left] + nums[right] + temp > target)
                {                    
                    int tempmax=nums[left] + nums[right] + temp;
                    max=abs(target-max)>abs(target-tempmax)?tempmax:max;
                    right--;
                }
                else
                {
                    return target;
                }
            }
            int tempret=abs(target-min)>abs(target-max)?max:min;
            ret= abs(target-tempret)>abs(target-ret)?ret:tempret;
        }
        return ret;
    }
};