class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, e= nums.size()-1;
        int ans = INT_MAX;

        while(l<=e){
            int mid = l+(e-l)/2;
            if(nums[l]<=nums[mid]){
                ans = min(ans,nums[l]);
                l = mid+1;
            }else if(nums[mid]<= nums[e]){
                ans = min(ans,nums[mid]);
                e = mid-1;
            }
        }return ans;
    }
};