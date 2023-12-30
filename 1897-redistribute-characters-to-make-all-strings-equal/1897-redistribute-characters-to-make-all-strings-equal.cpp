class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int> mp;
        int n=words.size();
        for(auto x:words){
            for(auto y:x) mp[y]++;
        }
        for(auto x:mp) if(x.second%n!=0) return 0;
        return 1;
    }
};