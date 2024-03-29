//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string rearrange (string S, int N)
    {
       vector<int> vowels(26, 0), conso(26, 0);
        int v = 0, c = 0;
        for(auto e : S) {
            
            if(e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u') 
                vowels[e - 'a']++, v++;
            else 
                conso[e - 'a']++, c++;
            
        }
        int i = 0, k = 0;
        if(abs(v - c) > 1) return "-1";
        bool fl = v >= c ? true : false;
        S = "";
        bool vv = false, cc = false;
        while(!vv && !cc) {
            
            if(fl) {
                while(i < 26 && vowels[i] == 0) {
                    i++;
                }
                if(i >= 26) vv = true;
                else{
                    S += char(97 + i);
                    vowels[i]--;
                } 
            }
            else {
                while(k < 26 && conso[k] == 0) {
                    k++;
                }
                if(k >= 26) cc = true;
                else {
                    S += char(97 + k);
                    conso[k]--;
                }
            }
            fl = !fl;
        }
        return S;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends