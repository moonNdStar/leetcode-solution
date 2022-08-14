class Solution {
public:
   int removeDuplicates(vector<int>& nums)
    {
        int k=0,j,n=nums.size();
       for(int i=0;i<n;i++){
           j=i;
           while(j<n&&nums[i]==nums[j]){
               j++;
           }
           nums[k]=nums[i];
           k++;
           i=j-1;
       }
   return k; 
   }
    
};