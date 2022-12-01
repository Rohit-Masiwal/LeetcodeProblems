class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int mid=n/2;
        int count=0,count1=0;
        for(int i=0;i<n;i++){
            if(i<mid){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
                   s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                    count++;
            }else{
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
                   s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                    count1++;
            }
        }
        return count==count1;
    }
};