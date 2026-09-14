#include<iostream>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for(char c: columnTitle)
        {
            res*=26;
            res += c-64;
        }
        return res;
    }
};