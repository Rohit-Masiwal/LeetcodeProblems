class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size(),m=1;
        for(int i=0;i<n;i++) {
            map<pair<int,int>, int> mp;
            for(int j=i+1;j<n;j++) {
                int x=points[i][0]-points[j][0];
                int y=points[i][1]-points[j][1];
                if(x==0) y=1;
                else if(y==0) x=1;
                else {
                    int g=__gcd(abs(x),abs(y));
                    x/=g;
                    y/=g;
                    if(y<0) x*=-1,y*=-1;
                }
                mp[{x,y}]++;
            }
            for(auto x:mp) m=max(m,x.second+1);
        }
        return m;
    }
};