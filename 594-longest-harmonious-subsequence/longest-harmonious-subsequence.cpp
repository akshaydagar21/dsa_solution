class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i =0;i<nums.size();i++)
            freq[nums[i]]++;
        
        int ans = 0;
        for(auto i:freq){
            int num = i.first;
            if(freq.find(num+1) != freq.end()){
                ans = max(ans,(freq[num]+ freq[num+1]));
            }
        }
        return ans;
    }
};