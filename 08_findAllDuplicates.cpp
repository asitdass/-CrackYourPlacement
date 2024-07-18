class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int, int> mapArray;
        for(int i =0; i < nums.size(); i++){
            mapArray[nums[i]]++;
        }
        for(auto it: mapArray){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
