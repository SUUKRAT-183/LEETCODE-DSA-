class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int i,l,n=stones.size();
        while(n>=2){
            auto j = max_element(stones.begin(), stones.end());
            int a = *j;            
            stones.erase(j);
            auto k = max_element(stones.begin(), stones.end());
            int b = *k;
            stones.erase(k);
            n=n-2;
            l=(a>b)?a-b:b-a;
            if(a==b){
                continue;
            }
            else{
                stones.push_back(l);
                n=n+1;
            }
        }
        if(n==0){
            return 0;
        }
        else{ 
            return stones[0];
        }
    }
};