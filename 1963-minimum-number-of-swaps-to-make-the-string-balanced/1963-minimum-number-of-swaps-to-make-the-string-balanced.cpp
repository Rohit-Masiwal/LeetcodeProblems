class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        for(auto x:s){
            if(!st.empty() && st.top()=='[' && x==']')
                    st.pop();
                else if(x=='[')
                    st.push(x);
        }
        // while(!st.empty()){
        //    cout<<st.top()<<" ";
        //     st.pop();
        // }
        //cout<<st.size();
        if(st.size()%2==0) return st.size()/2;
        return (st.size()+1)/2;
    }
}; 
    /*
    ]]][[[
    ]]]
    [[[
    
    */