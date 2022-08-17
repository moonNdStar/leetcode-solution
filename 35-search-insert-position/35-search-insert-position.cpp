class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int i,ans=0;
        for(i=0;i<n;i++){
            if(target==nums[i]){
                return i;
            }
            else if(target<nums[i]){
                return i;
            } 
            
        }
        return n;
    }
};