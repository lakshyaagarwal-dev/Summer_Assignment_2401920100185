class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0,watero,lp=0,rp=height.size()-1;
        while(lp<rp)
        {

          int h=min(height[lp],height[rp]);
          watero=h*(rp-lp);
          water=max(water,watero);
          height[lp]<height[rp]?lp++:rp--;
        
        }
        return water;
    }
};

