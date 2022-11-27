class Solution {
public:
    int pivotInteger(int n) {
        int sum=n*(n+1)/2;
        int sum1=0,sum2=0;
        for(int i=1;i<=n;i++){
            sum1+=i;
            /*
            s=32
            s1=1,3,6
            s2=32-1-1=30,32-3-2=27,32-6-3=21
            */
            sum2=sum-sum1+i;
            //cout<<sum1<<" "<<sum2<<"\n";
            if(sum1==sum2) return i;
        }
        return -1;
    }
};