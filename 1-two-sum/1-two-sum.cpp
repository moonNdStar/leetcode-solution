class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        map<int,int>m;
        int i;
        int size=nums.size();
        for(i=0;i<size;i++){
            int diff=target-nums[i];
            if(m.find(diff)!=m.end()&&m.find(diff)->second!=i){
                v.push_back(i);
                v.push_back(m.find(diff)->second);
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};