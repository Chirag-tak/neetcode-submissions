class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {

        unordered_map<int ,int> mp;
        for(int i=0;i<nums.size();i++){
            int temp_tar=target-nums[i];
            if(mp.find(temp_tar)!=mp.end()){
                int j=mp[temp_tar];
                if(i!=j)
                return {min(i,j),max(i,j)};
            }
            mp[nums[i]]=i;
        }
            return {};
    }
};
