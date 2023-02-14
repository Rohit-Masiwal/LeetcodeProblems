class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size()-1,m=b.size()-1,carry=0;
        string ans;
        while(n>=0 || m>=0 || carry){
            int sum=0;
            if(n>=0) sum+=int(a[n--]-'0');
            if(m>=0) sum+=int(b[m--]-'0');
            sum+=carry;
            ans+=char(sum%2+'0');
            carry=sum/2;
        }
        /*
        11 
         1
         0
        */
        reverse(ans.begin(),ans.end());
        return ans;
    }
};