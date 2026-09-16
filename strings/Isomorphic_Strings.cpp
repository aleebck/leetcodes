#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mpS;
        unordered_map<char, char> mpT;
        for(int i = 0; i< s.length(); i++)
        {
            if(mpS.count(s[i]) || mpT.count(t[i]))
            {
                if(mpS[s[i]] != t[i] || mpT[t[i]] != s[i])
                {
                    return false;
                }
            }
            else
            {
                mpS[s[i]] = t[i];
                mpT[t[i]] = s[i];
            }
        }
        return true;
    }
};