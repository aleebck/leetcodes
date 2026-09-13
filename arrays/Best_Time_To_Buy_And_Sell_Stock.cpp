#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int left = 0;
        int right = 1;
        while(right<prices.size())
        {
            if(max< prices[right] - prices[left])
            {
                max = prices[right] - prices[left];
            }
            if(prices[right] < prices[left])
            {
                left++;
                right = left;
            }
            right++;
        }
        return max;
    }
};