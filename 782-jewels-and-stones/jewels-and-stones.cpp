class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0;
        for(char ch:stones){
for(char j:jewels){
    if(ch==j) cnt++;
}
        }
        return cnt;
    }
};