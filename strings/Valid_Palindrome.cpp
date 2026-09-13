#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string onlyAlpha;
        for(char c: s)
        {
            if(isalnum(c))
            {
                onlyAlpha.push_back(tolower(c));
            }
        }
        int left = 0;
        int right = onlyAlpha.length()-1;
        while(left<right)
        {
            if(onlyAlpha[left] != onlyAlpha[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};