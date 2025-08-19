class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int>answer(n,0);
        stack<int>st;
        for(int i =0; i<n;i++){
            while(!st.empty()&& temp[i]>temp[st.top()]){
                int s = st.top();
                st.pop();
                 answer[s]=i-s;
            }
            st.push(i);
        }
        return answer;
    }
};
