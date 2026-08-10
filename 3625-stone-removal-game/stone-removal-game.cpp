class Solution {
public:
    bool canAliceWin(int n) {
        int j=0;
        for(int i=10; ;i--){
            if(i<=n){
                n-=i;
                j++;
            }
            else break;
        }
        if(j%2==0) return false;
        else return true;
    }
};