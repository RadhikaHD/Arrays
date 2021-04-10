#include <cmath>

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    len = nums.size();
    a = std::abs(len - (k % len));

    if (nums.empty()) {
    }
    // do nothing
    else if (len == 1) {
    }
    // don't modify nums
    else {
      for (int i = 0; i < len; i++) {
        rotated_nums.push_back(nums[(a + i) % len]);
      }

      std::copy(rotated_nums.begin(), rotated_nums.end(), nums.begin());
    }
  }

  vector<int> rotated_nums;
  int len = 0;
  int a = 0;
};