class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int one=0, flip=0;
        for(auto x:s){
            if(x=='1') 
                one++;
            else
                flip++;
            flip=min(flip,one);
        }
        return flip;
    }
};