class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v;
        int i;
        for(i=0;i<n;i++){
            if(target==nums[i]){
                v.push_back(i);
                break;
            }    
           
        }
        for(i=n-1;i>=0;i--){
            if(target==nums[i]){
                v.push_back(i);
                break;
            }
           
        }
        if(v.empty()){
            v.push_back(-1);   
            v.push_back(-1);

        }
       
      return v;
    }
};