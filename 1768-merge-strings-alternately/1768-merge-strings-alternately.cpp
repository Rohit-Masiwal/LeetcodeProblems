class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size(), m=word2.size();
        string ans;
        int i=0,j=0;
        while(n>0 || m>0){
            if(n!=0){
                ans+=word1[i++];
                n--;
            }
            if(m!=0){
                ans+=word2[j++];
                m--;
            }
        }
        return ans;
    }
};