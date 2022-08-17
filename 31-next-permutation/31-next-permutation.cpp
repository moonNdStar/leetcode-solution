class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n=nums.size();
        int i,index1=-1;
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index1=i;
                break;
            }
        }
        for(i=n-1;i>index1 and index1!=-1;i--){
            if(nums[i]>nums[index1]){
                swap(nums[i],nums[index1]);
            break;
            }
        }
        reverse(nums.begin()+index1+1,nums.end());

    }
};