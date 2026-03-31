class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        if(e==0)
            return 0;

        if(nums[0]>nums[1])
            return 0;
        
        if(nums[e]>nums[e-1])
            return e;
            

        while(s<=e){
            int mid = s+(e-s)/2;

            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
                return mid;

            if(nums[mid]<nums[mid+1]){
                s= mid+1;
            }else{
                e = mid-1;
            }
        }return -1;
    }
};