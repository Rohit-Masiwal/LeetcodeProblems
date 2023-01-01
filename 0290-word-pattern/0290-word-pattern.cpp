class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // unordered_map<char,int> mp1;
        // unordered_map<string,int> mp2;
        // for(int i=0;i<p.size();i++) mp1[p[i]]++;
        // string a;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]==' '){
        //         mp2[a]++;
        //         a="";
        //     }
        //     else a+=s[i];
        // }
        // mp2[a]++;
        // for(auto x:mp1){
        //     if(x.second!=mp2[x.first]) return 0;
        // }
        // return 1;
        unordered_map<char, int> p2i;
        unordered_map<string, int> w2i;
        
        istringstream in(s); string word;
        int i = 0, n = pattern.size();

        
        for(word; in>>word; i++){
            if(i==n || p2i[pattern[i]] != w2i[word]) return false; 
            p2i[pattern[i]] = w2i[word] = i+1; 
        }
        return i==n; 
    }
};