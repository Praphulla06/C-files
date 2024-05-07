#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int size = nums.size();
        std::vector <int> result;
        for (int i = 0; i < size - 1; i++)
        {
          if ((nums[i] + nums[i+1]) ==  target)
          {
            result.push_back(i);
            result.push_back(i+1);
            return result;
          }
        }
    }
};
int main() {
  Solution s1;
  s1.twoSum();
  return 0;
}