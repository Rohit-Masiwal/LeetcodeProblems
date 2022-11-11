class Solution {
public:
    bool isdiv(int tar , int d){
        while(d>0){
            int last = d%10 ;
            if(last == 0) return false ;
            if(tar%last != 0) return false ;
            d = d/10 ;
        }
        return true ;
    }
    vector<int> selfDividingNumbers(int left, int right) {
//         vector<int> ans;
//         for(int i=left;i<=right;i++){
//             int num=i,n=i,f=0; //10
//             while(n>0){
//                 int l=n%10;
//                 if(l==0 || num%l!=0){
//                     f=1;
//                     break;
//                 }
//                 n=n/10;//1
//             }
//             if(f==0) ans.push_back(i);
            
//         }
//         return ans;
        vector<int> v ;
        for(int i = left ; i <= right ; i++){
            if(isdiv(i , i)) v.push_back(i);
        }
        return v ;
    }
};