class Solution {
public:
  int removeDuplicates(vector<int> &nums) {

    if (nums.size() == 0) {
      len = 0;
      return len;
    } else if (nums.size() == 1) {
      len = 1;
      return len;
    } else {
      len = 1;
      for (auto it1 = nums.begin(); it1 != nums.end() - 1; it1++) {
        base = *it1;
        for (auto it2 = it1 + 1; it2 != nums.end(); it2++) {
          if ((*it2 == base) or (*it2 < base)) {
          } else {
            temp = *it2;
            *it2 = *(it1 + 1);
            *(it1 + 1) = temp;
            break;
          }
        }
      }
    }

    for (auto it1 = nums.begin(); it1 != nums.end() - 1; it1++) {
      if ((*it1 == *(it1 + 1)) or (*it1 > *(it1 + 1)))
        return len;
      else
        len++;
    }

    return len;
  }

  int len;
  int temp = 0;
  int base;
};