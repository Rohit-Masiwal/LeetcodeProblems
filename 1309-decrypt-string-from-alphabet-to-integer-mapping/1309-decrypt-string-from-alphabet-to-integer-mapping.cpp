class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        for(int i=0;i<s.size();){
            if(i+2<s.size() && s[i+2]=='#'){
                ans+='a'+((s[i]-'0')*10+(s[i+1]-'0'))-1;
                i=i+3;
            }else{
                ans+='a'+(s[i]-'0')-1;
                i++;
            }
        }
        return ans;
    }
};