class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int> un;
            for(int j=i;j<n;j++){
                un[s[j]]++;
                int maxx=INT_MIN;
                int minn=INT_MAX;
                for(auto x:un){
                    if(x.second>maxx) maxx=x.second;
                    if(x.second<minn) minn=x.second;
                }
            sum+=(maxx-minn);
            }
        }
        return sum;
    }
};