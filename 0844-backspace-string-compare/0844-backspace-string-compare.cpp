class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a,b;
        for(int i=0;i<s.size();i++) {
            if(!a.empty() && s[i]=='#') 
                a.pop();
            else if(s[i]!='#'){
                a.push(s[i]);}
        }
        for(int i=0;i<t.size();i++) {
            if(!b.empty() && t[i]=='#') 
                b.pop();
            else if(t[i]!='#'){
                b.push(t[i]);}
        }
        string c,d;
        while(!a.empty()) {
            c+=a.top();
            a.pop();
        }
        while(!b.empty()) {
            d+=b.top();
            b.pop();
        }
        reverse(c.begin(),c.end());
        reverse(d.begin(),d.end());
        // cout<<c<<" "<<d;
        return c==d;
    }
};