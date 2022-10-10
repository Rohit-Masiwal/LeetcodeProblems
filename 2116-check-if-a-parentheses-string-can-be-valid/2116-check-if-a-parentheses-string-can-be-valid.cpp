class Solution {
public:
    bool canBeValid(string s, string l) {
        stack<char> st;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(l[i]=='0' || s[i]=='(') c++;
            else if(l[i]=='1' && s[i]==')') c--;
            if(c<0) return false;
        }
        c=0;
        for(int i=s.size()-1;i>=0;i--){
            if(l[i]=='0' || s[i]==')') c++;
            else if(l[i]=='1' && s[i]=='(') c--;
            if(c<0) return false;
        }
        return s.size()%2==0;
    }
};