#include <iostream>
#include <vector>

using namespace std;

/*enum{
    good, bad, unknown
};

bool canJump(vector<int>& nums)
{
    int n = nums.size();
    if(n == 0)
    {
        return false;
    }
    vector<int> dp(n, unknown);
    dp[n - 1] = good;
    for(int i = n - 2; i >= 0; i--)
    {
        int farthestJump = min(i + nums[i], n - 1);
        for(int j = i + 1; j <= farthestJump; j++)
        {
            if(dp[j] == good)
            {
                dp[i] = good;
                break;
            }
        }
    }

    return dp[0] == good;
}
*/

bool canJump(vector<int>& nums)
{
    int n = nums.size();
    int lastPos;
    lastPos = n - 1;
    for(int i = n - 2; i >= 0; i--)
    {
        if(i + nums[i] >= lastPos)
        {
            lastPos = i;
        }
    }
    return lastPos == 0;
}

int main()
{
    vector<int> nums{2,3,1,1,4};
    canJump(nums) ? cout <<"true" << endl : cout << "false" << endl;
}