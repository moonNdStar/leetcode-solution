class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i,start,end,j;
        long long int sum;
        vector<vector<int>>v;
        set<vector<int>>store;
        sort(nums.begin(),nums.end());
        for(i=0;i<n-3;i++){
           if (i>0 && nums[i]==nums[i-1])
            continue;
            for(j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1])
            continue;
                start=j+1;end=n-1;
                while(start<end){
                    sum=(long long int)nums[i]+(long long int)nums[j]+(long long int)nums[start]+(long long int)nums[end];
                    if(sum>target){
                        end--;
                    }
                    else if(sum<target){
                        start++;
                    }
                    else{
                
                       vector<int>t; 
                        t.push_back(nums[i]);                        t.push_back(nums[j]);
                        t.push_back(nums[start]);
                        t.push_back(nums[end]);
store.insert(t);
                        start++;
                        while(nums[start]==nums[start-1]&&start<end){
                            start++;
                        }
                    }
                }
            }
          
        }
         for(auto i : store){
            v.push_back(i);
        }
        return v;
    }
};