#include <cmath>

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    int first, second, len;
    vector<int> result(2);
    len = nums.size();

    for (auto it1 = nums.begin(); it1 < nums.end(); it1++) {

      first = *it1;
      auto it2 = std::find(it1 + 1, nums.end(), (target - first));
      if (it2 != nums.end()) {
        first = std::distance(nums.begin(), it1);
        second = std::distance(nums.begin(), it2);
        break;
      }
    }

    result[0] = first;
    result[1] = second;
    return result;
  }
};