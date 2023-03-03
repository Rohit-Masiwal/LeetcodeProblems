class Solution {
public:
    int compress(vector<char>& c) {
        string s;
        s.push_back(c[0]);
        int cnt=1;
        for(int i=1;i<c.size();i++){
            if(c[i-1]==c[i]) 
                cnt++;
            else{
                if(cnt>1) s=s+to_string(cnt); 
                cnt=1;
                s.push_back(c[i]);
            }
        }
        if(cnt>1) s=s+to_string(cnt);
        for(int i=0;i<s.size();i++) c[i]=s[i];
        return s.size();
    }
};