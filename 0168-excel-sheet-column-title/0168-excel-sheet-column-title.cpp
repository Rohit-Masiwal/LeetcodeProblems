class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        int n=columnNumber;
        while(n>0) {
            n--;
            ans+=char((n%26)+65);
            //cout<<n%26<<" "<<n<<"\n";
            n=n/26;
        }
        // if(n%26==0) ans+='Z';
        // else ans+=char((n%26)+64);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

/*
A - 1
Z - 26
AA - 27
AB - 28
AC - 29
AD - 30
AZ - 52
AZA - 53

*/