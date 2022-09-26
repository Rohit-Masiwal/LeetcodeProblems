class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // multiset<int> s;
        // for(auto x:nums) s.insert(x);
        // for(int i=31;i>=0;i--) {
        //     vector<int> v;
        //     for(auto x:s) {
        //         if( !(x& (1<<i)) ) {
        //             v.push_back(x);
        //         } 
        //     }
        //     if(v.size()==s.size()) continue;
        //     for(auto x:v) s.erase(s.lower_bound(x));
        // }
        // return s.size();
        vector<pair<int,int>> v;
        v.push_back({0,nums.size()-1});
        for(int i=31;i>=0;i--) {
            // for(auto x:v) cout<<x.first<<" "<<x.second<<"\n";cout<<"-\n";
            vector<pair<int,int>> v1;
            for(auto x:v) {
                int k=x.first,l=x.second;
                int c=0;
                for(int j=k;j<=l;) {
                    if(!(nums[j]&(1<<i))) {
                        j++;
                        c++;
                    }
                    else {
                        int m=j;
                        while( m<=l && (nums[m]&(1<<i)) ) {
                            m++;
                        }
                        v1.push_back({j,m-1});
                        j=m;
                    }
                }
                if(c==l-k+1) v1.push_back({k,l});
            }
            v=v1;
        }
        int m=INT_MIN,pos=-1;
        for(auto x:v) {
            int s=nums[x.first];
            for(int i=x.first+1;i<=x.second;i++) s=(s&nums[i]);
            m=max(m,s);
        }
        for(auto x:v) {
            int s=nums[x.first];
            for(int i=x.first+1;i<=x.second;i++) s=(s&nums[i]);
            if(s==m) pos=max(pos,x.second-x.first+1);
        }
        return pos;
    }
};