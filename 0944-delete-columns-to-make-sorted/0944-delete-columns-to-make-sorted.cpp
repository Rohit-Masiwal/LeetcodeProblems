class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            string a,b;
            for(int j=0;j<n;j++){
                a+=strs[j][i];
                b+=strs[j][i];
            }
            /*0 1 2 3
            0 r r j k
            1 f u r t
            2 g u z m
            */
            cout<<a<<" "<<b<<"\n";
            sort(a.begin(),a.end());
            if(a!=b) count++;
        }
        return count;
    }
};