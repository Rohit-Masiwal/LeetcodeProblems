class Solution {
public:
    int isvowel(char s){
         if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u') 
            return 1;
        return 0;
    }
    int maxVowels(string s, int k) {
        int ans=0, cnt=0;
        for(int i=0;i<s.size();i++){
            cnt+=isvowel(s[i]);
            if(i>=k)
                cnt-=isvowel(s[i-k]);
            ans=max(ans,cnt);
        }
        return ans;
    }
};