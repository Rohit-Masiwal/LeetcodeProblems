class Solution {
public:
    int commonFactors(int a, int b) {
        set<int> s;
        for(int i=1;i<=a && i<=b ;i++) if(a%i==0 && b%i==0) s.insert(i);
        return s.size();
    }
};