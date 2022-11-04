class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        for(auto x:s)
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || 
               x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
                v.push_back(x);
        reverse(v.begin(),v.end());
        int i=0;
        string ans;
        for(auto x:s){
           if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || 
               x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
                ans+=v[i++];
            else
                ans+=x;
        }
        return ans;
    }
};