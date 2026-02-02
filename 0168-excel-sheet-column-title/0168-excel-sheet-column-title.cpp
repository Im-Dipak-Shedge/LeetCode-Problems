class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        int n = columnNumber;
        while(n>0)
        {
            n= n-1;
            int rem = n % 26;
            char ch = 'A' + rem;
            result = ch + result; 
            n = n/26;
        }
        return result;
    }
};