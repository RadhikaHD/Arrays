class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int len = nums.size();
    int count = 0;
    int unique_element = 0;
    if (len == 1)
      return nums[0];
    else {
      std::sort(nums.begin(), nums.end());

      if (nums[0] != nums[1]) {
        return nums[0];
      }

      if (nums[len - 2] != nums[len - 1]) {
        return nums[len - 1];
      }

      for (int i = 1; i < (len - 1); i++) {
        if ((nums[i] != nums[i + 1]) and (nums[i - 1] != nums[i])) {
          unique_element = nums[i];
          break;
        }
      }
    }
    return unique_element;
  }
};