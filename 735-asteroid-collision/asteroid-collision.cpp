class Solution {
public:
    vector<int> asteroidCollision(vector<int>& star) {
        stack<int>st;
        for(int i=0;i<star.size();i++){
            if(star[i]>=0) st.push(star[i]);
            
            else{
                while(!st.empty() && st.top()>0 && st.top()<-star[i]){
                    st.pop();
                }
                if(st.empty()||st.top()<0) st.push(star[i]);
                else if (st.top() == -star[i]) {
                    st.pop();
                }
            }
        }
          vector<int> ans(st.size());

        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};