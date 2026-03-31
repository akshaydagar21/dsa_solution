class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, end = nums.size()-1;
        int floor = -1, ceil = -1;
        while(low<=end){
            int mid = low+ (end-low)/2;
            if(nums[mid] < target){
                low = mid+1;
            }
            else if(nums[mid] > target){
                end = mid-1;
            }
            else{
                floor = mid;
                end = mid-1;
            }
        }
        low =0, end = nums.size()-1;
        while(low<=end){
            int mid = low+ (end-low)/2;
            if(nums[mid] < target){
                low = mid+1;
            }
            else if(nums[mid] > target){
                end = mid-1;
            }
            else{
                ceil = mid;
                low = mid+1;
            }
        }
        return {floor,ceil};
    }
};