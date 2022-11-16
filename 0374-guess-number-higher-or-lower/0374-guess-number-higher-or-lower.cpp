/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        // vector<int> nums;
        // for(int i=1;i<=n;i++){
        //     int x=guess(i);
        //     nums.push_back(x);
        // }
        // //for(auto x:nums) cout<<x<<" ";
        int low=1,high=n-1;
        int val=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int g=guess(mid);
            if(g==0) return mid;
            if(g==1) 
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
};