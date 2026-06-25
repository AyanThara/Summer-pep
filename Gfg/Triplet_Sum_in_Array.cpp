class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
       sort(arr.begin(),arr.end());//sort the array 
       int n=arr.size();
       for(int i=0;i<n;i++){//run till end
           int j=i+1;//take three pointers i as start and j=i=1 and k=end-1 and fix i pointer and use two sum approaach and calculate the sum 
           int k=n-1;
           while(j<k){
               int sum=arr[i]+arr[j]+arr[k];//calculate the sun
               if(sum==target){//check if sum is equal to target
                   return true;//return true 
               }
               if(sum<target){//if target >sum so increment the second pointer 
                   j++;
               }
               else{//if target<sum then decrement the third pointer 
                   k--;
               }
           }
           
       }
       return false; //return false
    }
};
