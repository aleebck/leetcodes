#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int x: nums)
        {
            res = res ^ x;
        }
        return res;
    }
};