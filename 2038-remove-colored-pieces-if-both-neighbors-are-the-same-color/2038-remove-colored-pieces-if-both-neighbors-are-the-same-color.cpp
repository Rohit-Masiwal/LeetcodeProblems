class Solution {
public:
    bool winnerOfGame(string c) {
        int Acnt=0,Bcnt=0;
        for(int i=1;i<c.size()-1;i++) {
            if(c[i-1]=='A' && c[i]=='A' && c[i+1]=='A')
                Acnt++;
            if(c[i-1]=='B' && c[i]=='B' && c[i+1]=='B')
                Bcnt++;          
        }
        return Acnt>Bcnt;
    }
};