class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int num=i,n=i,f=0; //10
            while(n>0){
                int l=n%10;
                if(l==0 || num%l!=0){
                    f=1;
                    break;
                }
                n=n/10;//1
            }
            if(f==0) ans.push_back(i);
            
        }
        return ans;
    }
};