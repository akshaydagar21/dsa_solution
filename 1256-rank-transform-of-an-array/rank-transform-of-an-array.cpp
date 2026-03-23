class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<int,vector<int>,greater<int>> pq;

        unordered_map<int,vector<int>> m;
        for(int i =0;i<arr.size();i++)
            m[arr[i]].push_back(i);
        
        for(auto i:m)
            pq.push(i.first);
            
        vector<int>ans(arr.size());
        int rank = 1;
        while(!pq.empty()){
            int top = pq.top();
            pq.pop();

            for(auto i:m[top]){
                ans[i] = rank;
            }rank++;
        }
        return ans;
    }
};