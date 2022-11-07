class Solution {
public:
    int maximum69Number (int num) {
        stack<int> st;
        vector<int> res;
        while(num>0){
            res.push_back(num%10);
            num=num/10;
        }
        reverse(res.begin(),res.end());
        // for(auto x:res) cout<<x<<" ";
        // cout<<"\n";
        for(int i=0;i<res.size();i++){
            if(res[i]==6){
                res[i]=9;
                break;
            }else continue;
        }
        int ans=0;
        for(auto x:res) ans=ans*10+x;
        return ans;
    }
};