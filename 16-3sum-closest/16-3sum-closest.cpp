class Solution {
public:
   int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
         if(nums.size() < 3) return 0;
        int mindiff=nums[0]+nums[1]+nums[2];
        int i,start,end,sum;
        sort(nums.begin(),nums.end());
        for(i=0;i<n-2;++i){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            start=i+1;end=n-1;
            while(start<end){
                sum=nums[i]+nums[start]+nums[end];
                if(abs(target-sum)<abs(target-mindiff)){
                    mindiff=sum;
                }
                if(sum>target){
                    --end;
                }
                else{
                    ++start;
                }
            }     
        }
        return mindiff;
    }
};