class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        vector<pair<int,int>>postfix(n);
        vector<pair<int,int>>prefix(n);
        stack<pair<int,int>>st;
        for(int i=n-1;i>=0;i--){
           while(!st.empty() && st.top().first>=h[i]){
            st.pop();   
            
           }
            if(st.empty()) postfix[i]={-1,n};
            else{
                postfix[i]={st.top().first,st.top().second};
            }
            st.push({h[i],i});
        }
        while(!st.empty()) st.pop();
          for(int i=0;i<n;i++){
           while(!st.empty() && st.top().first>=h[i]){
            st.pop();   
            
           }
            if(st.empty()) prefix[i]={-1,-1};
            else{
                prefix[i]={st.top().first,st.top().second};
            }
            st.push({h[i],i});
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,h[i]*(postfix[i].second-prefix[i].second-1));
        }

        return ans;
    }
};