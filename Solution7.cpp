class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    int len = nums.size();
    bool result = false;
    if (len == 1)
      result = false;
    else {
      std::sort(nums.begin(), nums.end());
      for (auto it = nums.begin(); it != (nums.end() - 1); it++) {
        if ((*it == *(it + 1))) {
          result = true;
          break;
        }
      }
    }
    return result;
  }
};