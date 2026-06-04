class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() == 0) return {};
    
    vector<vector<string>> ans;
    
    if (strs.size() == 1) return {{strs[0]}};
    
    unordered_map<string, vector<string>> mp;
    
    for (auto i : strs) 
    {
        string s = i;
        sort(s.begin(), s.end());
        mp[s].push_back(i);
    }
    for (auto& pair:mp){
        ans.push_back(pair.second);
    }
    return ans;
    }
};
