class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    vector<int> copyvector;
    int len = nums.size();
    int countzeroes = 0;
    int temp;

    for (int i = 0; i < len; i++) {
      if (nums[i] == 0) {
        // find the first non zero element from i+1 to len
        for (int j = i + 1; j < len; j++) {
          if (nums[j] != 0) {
            temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            break;
          }
        }
      }
    }
  }
};