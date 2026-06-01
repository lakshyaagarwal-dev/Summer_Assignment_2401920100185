class Solution {
public:
    int maxProfit(vector<int>& pr) {
        int profit=0,buy=pr[0];
        for(int i=1;i<pr.size();i++)
        {
            if(pr[i]>buy)
            {
                profit=max(profit,pr[i]-buy);
            }
            buy=min(buy,pr[i]);
        }
        return profit;
        
    }
};