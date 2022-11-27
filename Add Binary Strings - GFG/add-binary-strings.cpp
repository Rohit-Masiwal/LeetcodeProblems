//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    int i=A.size()-1,j=B.size()-1;
	    int carry=0;
	    string ans;
	    while(i>=0 || j>=0){
	        int sum=0;
	        if(i>=0){
	            sum+=(A[i]-'0');
	        }
	        if(j>=0){
	            sum+=(B[j]-'0');
	        }
	        sum+=carry;
	        ans.push_back(sum%2+'0');
	        //cout<<ans<<"\n";
	        carry=sum/2;
	        i--;j--;
	    }
	    if(carry!=0) ans+=(carry+'0');
	    reverse(ans.begin(),ans.end());
	    int a=0;
	    while(ans[a]=='0') a++;
	    ans.erase(0,a);
	   //int num = stoi(ans);
    //     ans= to_string(num);
	    return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends