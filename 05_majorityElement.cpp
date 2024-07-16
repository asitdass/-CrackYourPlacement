class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> freqArray;
        for(int i = 0; i<nums.size(); i++){
            freqArray[nums[i]]++;
        }
        for(auto it: freqArray){
            if(it.second > (nums.size())/2){
                return it.first;
            }
        }
        return 0;
    }
};
