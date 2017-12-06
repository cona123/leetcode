/*Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

Note: The solution set must not contain duplicate quadruplets.

For example, given array S = [1, 0, -1, 0, -2, 2], and target = 0.

A solution set is:
[
  [-1,  0, 0, 1],
  [-2, -1, 1, 2],
  [-2,  0, 0, 2]
] */

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ret;
        if(nums.size()<4)
        {
            return ret;
        }
        if(nums.size()==4&&nums[0]+nums[1]+nums[2]+nums[3]!=target)
        {
             return ret;
        }
        //int left=0;
        //int right=nums.size()-1;
        sort(nums.begin(),nums.end());
        //int changeleft =0;
        set<vector<int>> tempret;
        for(int i =0;i!=nums.size()-1;i++)
        {
            
            for(int j=nums.size()-1;j!=0;j--)
            {
             int left=i;
             int right =j;
            
       
            int left1 = left+1;
            int right1 =right -1;
            while(left1<right1)
            {
                if(nums[left]+nums[left1]+nums[right1]+nums[right]<target)
                {
                    left1++;
                }
                else if(nums[left]+nums[left1]+nums[right1]+nums[right]>target)
                {
                    right1--;
                }
                else
                {
                    vector<int> temp;
                    temp.push_back(nums[left]);
                    temp.push_back(nums[left1]);
                    temp.push_back(nums[right]);
                    temp.push_back(nums[right1]);
                    tempret.insert(temp);
                    left1++;
                    right1--;
                }
            }
        
            }
        }
        for(auto tempre:tempret)
        {
            ret.push_back(tempre);
        }
        return ret;
    }
};