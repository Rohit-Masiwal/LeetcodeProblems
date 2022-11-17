class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1= (ax2+(-1*ax1)) * (ay2+(-1*ay1));
        int area2= (bx2+(-1*bx1)) * (by2+(-1*by1));
        int x= min(ax2, bx2) - max(ax1, bx1);
        int y= min(ay2, by2) - max(ay1, by1);
        int overlap = (x>0 && y>0) ? x*y : 0;
        return (area1+area2-overlap);    
    }
};