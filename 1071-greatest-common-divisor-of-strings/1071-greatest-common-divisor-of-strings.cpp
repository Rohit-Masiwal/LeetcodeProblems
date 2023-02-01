class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // map<char,int> mp1,mp2;
        // for(auto x:str1) mp1[x]++;
        // for(auto x:str2) mp2[x]++;
        // string ans;
        // for(auto x:mp1){
        //     if(x[mp2]) ans+=x.first;
        // }
        // return ans;
        if(str1+str2 != str2+str1) return "";
        return str1.substr(0,__gcd(str1.size(),str2.size()));
    }
};