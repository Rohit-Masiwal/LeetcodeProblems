class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int n=num1.size()-1,m=num2.size()-1,carry=0;
        while(n>=0 || m>=0 || carry){
            int sum=0;
            if(n>=0) sum+=int(num1[n--]-'0');
            if(m>=0) sum+=int(num2[m--]-'0');
            sum+=carry;
            ans+=char((sum%10)+'0');
            carry=sum/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};