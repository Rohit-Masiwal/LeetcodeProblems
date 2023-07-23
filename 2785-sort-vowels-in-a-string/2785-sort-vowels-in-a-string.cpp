class Solution {
public:
    string sortVowels(string s) {
        vector<char> v;
        for(auto x:s)
            if(x=='A' || x=='E' ||x=='I' ||x=='O' ||x=='U' ||
              x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u') v.push_back(x);
        
        sort(v.begin(),v.end());
        string ans;
        int n=0;
        //for(auto x:v) cout<<x<<" ";
        for(auto x:s){
            if(x=='A' || x=='E' ||x=='I' ||x=='O' ||x=='U' ||
              x=='a' ||x=='e' ||x=='i' ||x=='o' ||x=='u') 
                ans+=v[n++];
            else
                ans+=x;
        }
        return ans;
    }
};