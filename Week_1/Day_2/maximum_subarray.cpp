class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int end=nums.size(),cs,ms;
        ms=INT_MIN;
        for(int i=0;i<end;i++)
        {
            cs=cs+nums[i];
            ms=max(ms,cs);
            if(cs<0)
            {
                cs=0;
            }
        }
        return ms;
    }
};
