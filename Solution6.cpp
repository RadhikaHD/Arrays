class Solution {
public:
  int maxProfit(vector<int> &prices) {

    int len = 0;
    int first, last, profit, pay, get;

    len = prices.size();
    first = prices[0];
    last = prices[len - 1];

    // if prices has only one element return 0;
    if (len == 1)
      return 0;

    // if all elements of prices are the same return 0;
    if (std::all_of(prices.begin(), prices.end(),
                    [=](int i) { return (i == first); }))
      return 0;

    // if prices are sorted in desc return 0;
    if (std::is_sorted(prices.rbegin(), prices.rend()))
      return 0;

    // if prices is sorted in asc then return (last element - first element);
    if (std::is_sorted(prices.begin(), prices.end())) {
      return (last - first);
    }

    for (int i = 0; i < len; i++) {
      if (i == 0) {
        if (prices[1] > prices[0]) {
          // buy = true;
          pay = prices[0];
        }
      } else if (i == (len - 1)) {

        if (prices[len - 1] > prices[len - 2]) {
          // buy = false;
          // sell = true;
          get = prices[(len - 1)];
          profit = profit + (get - pay);
        }
      } else if ((prices[i + 1] <= prices[i]) and (prices[i - 1] < prices[i])) {
        // sell = true;
        // buy = false;
        get = prices[i];
        profit = profit + (get - pay);
      } else if ((prices[i + 1] > prices[i]) and (prices[i - 1] >= prices[i])) {
        // sell = false;
        // buy = true;
        pay = prices[i];
      }
    }

    return profit;
  }
};