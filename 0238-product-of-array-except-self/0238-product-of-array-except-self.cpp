class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> v,q,res;
        // right prduct
        int mul=1;
        for(int i=n-1;i>=0;i--){
            mul*=nums[i];
            v.push_back(mul);
        }
        reverse(v.begin(),v.end());
        //left product
        mul=1;
        for(int i=0;i<n;i++){
            mul*=nums[i];
            q.push_back(mul);
        }
        for(int i=0;i<n;i++) {
            if(i==0) res.push_back(v[1]);
            else if(i==n-1) res.push_back(q[i-1]);
            else res.push_back(q[i-1]*v[i+1]);
        }
        return res;
    }
};