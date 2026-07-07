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
        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};