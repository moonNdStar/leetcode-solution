class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i,j,k=0;
        for(i=0;i<n;i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};