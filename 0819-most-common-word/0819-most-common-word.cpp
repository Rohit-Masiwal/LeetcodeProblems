class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        // string ans;
        // for(auto x:p) ans.push_back(tolower(x));
        // return ans;
        //transform(p.begin(),p.end(),p.begin(),::tolower);
        string s;
        map<string,int> mp;
        vector<string> v;
        for(auto x:p){
            if(isalpha(x)){
                s+=tolower(x);
            }else{
                if(s!="") v.push_back(s);
                s="";
            }
        }
        if(s!="")v.push_back(s);
        //for(auto x:v) cout<<x<<"\n";
        for(auto x:v) mp[x]++;
        for(auto x:banned) mp[x]=0;
        // for(auto x:mp){
        //     cout<<x.first<<" "<<x.second<<"\n";
        // }
        int max=0; 
        string ans;
        for(auto it : mp)
        {
            if(it.second>max)
            {
                ans=it.first;
                max=it.second;
                
            }
        }
        return ans;   
    }
};