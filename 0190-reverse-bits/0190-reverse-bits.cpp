class Solution {
public:
    int reverseBits(int n) {
        long long res=0;
        int pos = 31;
        while(n!=0){
            res +=((n & 1)<< pos);
            pos--;
            n = n>>1;
        }
        return res;
    }
};