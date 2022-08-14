class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int>v1(nums1);
    vector<int>v2(nums2);
    int mid,mid1,mid2;
    double ans;
    int n=v1.size()+v2.size();
    vector<int>v3(n);
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

    for (int i:v3)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    if(n%2!=0){
        mid=(n/2);
        ans=(double)v3[mid];
    }
    else{
        mid1=(n/2)-1;
        mid2=(n/2);
        ans=((double)v3[mid1]+(double)v3[mid2])/2;
    }

    return ans;

    }
};