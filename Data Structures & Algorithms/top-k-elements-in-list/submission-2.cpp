class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<int> ans;
        vector<pair<int ,int>> temp(mp.begin(),mp.end());
        sort(temp.begin(),temp.end(),  [](const auto& a, const auto& b) {
        return a.second > b.second; // Use '>' for descending order
    });
      for(int i=0;i<k;i++){
        ans.push_back(temp[i].first);
      }
        return ans;
    }
};
