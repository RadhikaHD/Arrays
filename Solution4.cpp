class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    int len = digits.size();
    if (std::all_of(digits.begin(), digits.end(), [](int i) { return i == 9; }))

    {
      digits.assign(len + 1, 0);
      digits[0] = 1;
      return digits;
    }

    for (int i = (len - 1); i >= 0; i--) {
      if ((digits[i]) != 9) {
        digits[i] = digits[i] + 1;
        break;
      }

      else {
        digits[i] = 0;
      }
    }

    return digits;
  }
};