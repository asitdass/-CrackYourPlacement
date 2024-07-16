class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0){
            return;
        }
        vector<int> nums(m+n,0);
        int i=0, j=0, k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                nums[k]=nums1[i];
                k++;
                i++;
            }
            else{
                nums[k]=nums2[j];
                k++;
                j++;
            }
        }
        while(i<m){
            nums[k]=nums1[i];
                k++;
                i++;
        }
        while(j<n){
            nums[k]=nums2[j];
                k++;
                j++;
        }
        nums1=nums;
    }
};
