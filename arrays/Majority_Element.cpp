#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i: nums)
        {
            m[i]++;
        }

        int res;
        for(auto i: m)
        {
            if(i.second > (nums.size()/2))
            {
                res = i.first;
            }
        }
        return res;
    }
};