class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        // vector<int> v;
        // int res=customers[0][0];
        // for(int i=0;i<customers.size();i++) {
        //     res+=customers[i][1];
        //     v.push_back(res-customers[i][0]);
        // }
        // int sum=0;
        // for(auto x:v) sum+=x;
        // return double(sum/v.size());
        int n = customers.size();
        double time_waiting = customers[0][1];
        int finished_prev = customers[0][0] + customers[0][1];

        for (int customer_ind = 1; customer_ind < n; ++customer_ind) {
            vector<int> times = customers[customer_ind];
            int arrive = times[0];

            int start_cook = max(arrive, finished_prev);
            int end_time = start_cook + times[1];
            finished_prev = end_time;
            time_waiting += end_time - arrive;
        }

        return time_waiting / n;
    }
};