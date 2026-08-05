class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0,rp=n-1;
        int maxWATER=0;
        while(lp<rp){
            int width=rp-lp;
            int heightLOL=min(height[lp],height[rp]);
            int water=width*heightLOL;
             maxWATER=max(maxWATER,water);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxWATER;
    
    }};