class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
        int index1=0;
        int  index2=-1;
        for(int i=0;i<nums.size();i++){
        int temp_find=target-nums[index1];
        for(int i=0;i<nums.size() && i!=index1;i++){
            if(temp_find==nums[i]){
                index2=i;
                goto label1;
            }
        }
        index1++;
    }
    label1:
    ans.push_back(index2);
    ans.push_back(index1);
    return ans;
    }
};
