class Solution {
public:
    int passThePillow(int n, int time) {
        // if(time<=n-1) return time+1;
        // int ans=0;
        // time-=(n-1);
        // while(true) {
        //     for(int i=n-1;i>=0;i--) {
        //         time-=1;
        //         if(time==0) return i;
        //     }
        //     for(int i=2;i<=n;i++) {
        //         time-=1;
        //         if(time==0) return i;
        //     }
        // }
        // return ans;
        // vector<int>ans;
        // int t=0;
        // for(int i=1;i<=n;i++) {
        //     ans.push_back(i);
        //     t++;
        //     if(t==time+1) break;
        // }
        // while(t<time) {
        //     for(int i=n-1;i>=1;i--) {
        //         ans.push_back(i);
        //         t++;
        //         if(t==time+1) break;
        //     }
        //     for(int i=2;i<=n;i++) {
        //         ans.push_back(i);
        //         t++;
        //         if(t==time+1) break;
        //     }
        // }
        // for(auto x:ans) cout<<x<<" ";
        // return ans[time];
        time = time % ((n - 1) * 2) + 1;
        return min(time, n * 2 - time);
    }
};

/*
1   2   3   4
7   6   5
    8   9   10
13  12  11
    14  15  16

*/