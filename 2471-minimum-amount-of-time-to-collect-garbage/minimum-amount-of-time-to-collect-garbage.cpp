class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int cnt=0;
        int p=0,m=0,g=0,a=0;
        for(int i=0;i<garbage.size();i++){
            cnt+=garbage[i].size();
            for(int j=0;j<garbage[i].size();j++){
               
               if(garbage[i][j]=='G')  g=i;
               else if(garbage[i][j]=='M')  m=i;
               else if(garbage[i][j]=='P')  p=i;
            }
          
        }
      
      for (int i = 0; i < travel.size(); i++) {
    if (i < p) cnt += travel[i];
    if (i < m) cnt += travel[i];
    if (i < g) cnt += travel[i];
}
      return cnt;
    }
};