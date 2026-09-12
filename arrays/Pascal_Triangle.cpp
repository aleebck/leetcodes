#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=0; i< numRows; i++)
        {
            vector<int> curr;
            for(int j=0; j<=i; j++)
            {
                if(j==0 || j==i)
                {
                    curr.push_back(1);
                }
                else
                {
                    curr.push_back(result[i-1][j-1] + result[i-1][j]);
                }
            }
            result.push_back(curr);
        }
        return result;
    }
};