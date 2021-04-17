class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    vector<int> copyvector;
    int len = nums.size();
    int countzeroes = 0;

    for (int i = 0; i < len; i++) {
      if (nums[i] == 0)
        countzeroes++;
      else
        copyvector.push_back(nums[i]);
    }

    for (int i = 0; i < countzeroes; i++) {
      copyvector.push_back(0);
    }

    std::copy(copyvector.begin(), copyvector.end(), nums.begin());
  }
};