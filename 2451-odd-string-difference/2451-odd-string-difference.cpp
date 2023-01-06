class Solution {
public:
    string oddString(vector<string>& words) {
        //vector<vector<int>> vv;
        map<vector<int>,string> mp1;
        map<vector<int>,int> mp2;
        for(int i=0;i<words.size();i++) {
            vector<int>v;
            int n=words[i].size();
            for(int j=0;j<n-1;j++){
                v.push_back(int(words[i][j+1])-int(words[i][j]));
            }
            //vv.push_back(v);
            mp1[v]=words[i];
            mp2[v]++;
        }
        // cout<<"MP1"<<"\n";
        // for(auto x:mp1){
        //     for(auto y:x.first) cout<<y<<" ";
        //     cout<<x.second<<"\n";
        // }
        // cout<<"MP2"<<"\n";
        // for(auto x:mp2){
        //     for(auto y:x.first) cout<<y<<" ";
        //     cout<<x.second<<"\n";
        // }
        for(auto x:mp2) {
            if(x.second==1) return mp1[x.first];
        }
        return "";
    }
};