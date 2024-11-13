class Solution {
  public:
    deque<int> neg;
    vector<int> ans;
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        long long int l=0,r=0;
        while(r<=arr.size()-1)
        {
            if(arr[r]<0)  neg.push_back(arr[r]);
            if((r-l+1)==k)
            {
                if(neg.size()==0)  ans.push_back(0);
                else
                {
                    ans.push_back(neg[0]);
                    if(arr[l]<0)
                    neg.pop_front();
                }
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