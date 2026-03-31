class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0,end = nums.size()-1;
        while(low<=end){
            int mid = low+(end-low)/2;
            if(nums[mid]==target)
                return true;
            else if(nums[low] == nums[mid] && nums[mid]==nums[end]){
                low++,end--;
            }else if(nums[low]<=nums[mid]){
                if(nums[low] <=target && nums[mid] >target)
                    end = mid-1;
                else
                    low = mid+1;
            }else if(nums[end]>=nums[mid]){
                if(nums[mid] <target && nums[end] >=target)
                    low = mid+1;
                else
                    end = mid-1;
            }
        }return false;
    }
};