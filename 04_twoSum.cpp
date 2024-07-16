class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> map;
        int remainingValue = 0;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++) {
            remainingValue = target - nums[i];
            if(map.find(remainingValue) != map.end()) {
                ans.push_back(i);
                ans.push_back(map[remainingValue]);
                break;
            }
            map[nums[i]] = i;
        }
        return ans;
    }
    
};
