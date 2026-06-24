class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;//start a count
        int maxCount=0;//also start a maxcount
        for(int i=0;i<nums.size();i++){//run the loop till end
            if(nums[i]==1){//if nums[i]==1 then update the count 
                count++;
            maxCount = max(maxCount, count);//check for maxcount
            }else if(nums[i]==0){//if nums=0 then reset the count
                count=0;
            }
        }
      return maxCount;//return the maxcount
    }
};
