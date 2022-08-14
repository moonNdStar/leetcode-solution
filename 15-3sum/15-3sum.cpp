class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        int i,start,end;
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
                                         }
            start=i+1;end=n-1; int sum;
            while(start<end){
                sum=nums[i]+nums[start]+nums[end];
                if(sum>0){
                    end--;
                }
                else if(sum<0){
                    start++;
                }
                else{
                    v.push_back(vector<int>{nums[i],nums[start],nums[end]});
                    start++;
                    while(nums[start]==nums[start-1] && start<end){
                        start++;
                    }
                }
            }
        }
        return v;
    }

};