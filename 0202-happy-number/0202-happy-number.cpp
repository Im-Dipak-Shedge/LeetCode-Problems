class Solution {
public:
    int sumOfSquares(int n) {
        int digit = 0;
        int sum = 0;
        while (n != 0) {
            digit = n % 10;
            sum += digit*digit;
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
    unordered_set<int> set;
        while (n != 1 && !set.count(n))
        {    set.insert(n);
            n = sumOfSquares(n);
    }
    return n==1;}
};