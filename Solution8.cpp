class Solution {
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());
    int len1 = nums1.size();
    int len2 = nums2.size();
    vector<int> result;
    int i = 0;
    int j = 0;

    while ((i < len1) and (j < len2)) {
      if (nums1[i] == nums2[j]) {
        result.push_back(nums1[i]);
        i++;
        j++;
      } else if (nums1[i] > nums2[j])
        j++;
      else if (nums1[i] < nums2[j])
        i++;
    }
    return result;
  }
};