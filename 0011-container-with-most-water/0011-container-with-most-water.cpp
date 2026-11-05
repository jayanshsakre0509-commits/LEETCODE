class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
        int lp=0,rp=height.size()-1;
        while(lp<rp){
            int weight=rp-lp;
            int ht=min(height[rp],height[lp]);
            int area =weight*ht;
            maxarea=max(area,maxarea);
             height[lp]<height[rp]?lp++:rp--;
        }
        return maxarea;
    }
};