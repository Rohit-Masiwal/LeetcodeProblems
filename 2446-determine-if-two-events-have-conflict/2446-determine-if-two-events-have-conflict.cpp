class Solution {
public:
    bool haveConflict(vector<string>& e1, vector<string>& e2) {
        int a,b,c,d,e,f,g,h;
        a=e1[0][0]-'0';
        a=a*10+e1[0][1]-'0';
        b=e1[1][0]-'0';
        b=b*10+e1[1][1]-'0';
        e=e1[0][3]-'0';
        e=e*10+e1[0][4]-'0';
        f=e1[1][3]-'0';
        f=f*10+e1[1][4]-'0';
        c=e2[0][0]-'0';
        c=c*10+e2[0][1]-'0';
        d=e2[1][0]-'0';
        d=d*10+e2[1][1]-'0';
        g=g+e2[0][3]-'0';
        g=g*10+e2[0][4]-'0';
        h=e2[1][3]-'0';
        h=h*10+e2[1][4]-'0';
        if(c*100+g >= a*100+e && c*100+g<=b*100+f) return 1;
        if(a*100+e >= c*100+g && a*100+e<=d*100+h) return 1;
        return 0;
    }
};