class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>> pq;
        for(auto a:arr) { 
            pq.push({abs(a - x), a});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0)
        {
            ans.push_back(pq.top().second);
            pq.pop(); 
        }
        sort(ans.begin(), ans.end());
        return ans;
        // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        // for(int i=0;i<arr.size();i++)pq.push({abs(arr[i] - x), arr[i]});
        // vector<int> ans;
        // for(int i=0;i<k;i++)
        // {
        //     ans.push_back(pq.top().second);
        //     pq.pop(); 
        // }
        // sort(ans.begin(), ans.end());
        // return ans;
    }
};