#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int length = nums.size();
      vector<int> result(2,0);

      for(int i = 0; i < length - 1;i++)
        for(int j = i + 1; j < length;j++){
            if(nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
      return result;
    }
};

int main(void)
{
    int myints[] = {2,7,11,15};
    vector<int> nums (myints, myints + sizeof(myints) / sizeof(int));

    Solution solution;
    vector<int> result = solution.twoSum(nums,9);

    for (std::vector<int>::iterator it = result.begin(); it != result.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
}
