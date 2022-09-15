class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1) return 0;
        if((n&(n-1))==0) return 1;
        return 0;
    }
};
/*
4 100
3 011
  000 ans =true
  
16 10000
15 01111   ans =true
 

*/