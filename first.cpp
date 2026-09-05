#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i = 1; i<nums.size(); i++)
        {
            if(nums[i] != nums[k-1])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};