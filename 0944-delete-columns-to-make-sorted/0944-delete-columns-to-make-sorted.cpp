class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                if(strs[j][i]<strs[j-1][i]){ 
                    count++;
                    break;
                }
            }
        }/*
        a b c
        b c e
        c a e
        
        c b a
        d a f
        g h i
        */
        return count;
    }
};