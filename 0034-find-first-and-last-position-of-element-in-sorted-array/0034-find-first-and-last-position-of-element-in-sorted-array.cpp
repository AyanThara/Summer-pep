class Solution {//create two function one for first occurance and another for last occurance and return both in a vector 
public:
    int firstPos(vector<int>& nums, int target){//first occurance function 
        int start = 0, end = nums.size()-1;
        int ans = -1;//for storing the target
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] < target){
                start = mid + 1;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
            else{
                ans = mid;//if nums[mid]==target store in array and move the end back 
                end = mid - 1;
            }
        }
        return ans;//return ans
    }
    int lastposition(vector<int>& nums, int target){//function for last occurance 
        int start = 0, end = nums.size()-1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(nums[mid] < target){
                start = mid + 1;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
            else{
                ans = mid;//store if nums[mid]==target
                start = mid + 1;//move the start forward
            }
        }
        return ans;//return ans
    }
    vector<int> searchRange(vector<int>& nums, int target){//create the fuunction 
        vector<int> result;//create the result vector 
        result.push_back(firstPos(nums,target));    //add the first occurance 
        result.push_back(lastposition(nums,target));//add last occurance 
        return result;//return the final result
    }
};