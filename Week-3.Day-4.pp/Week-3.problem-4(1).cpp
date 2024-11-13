class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        long long int l=0,r=0;
        long long int sum=0,ans=0;
        while(r<=arr.size()-1)
        {
            sum+=arr[r];
            if((r-l+1)==k)
            {
                ans=max(sum,ans);
                sum-=arr[l];
                l++;r++;
            }
            else 
            {
                r++;
            }
        }
        return ans;
    }
};