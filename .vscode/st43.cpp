#include <algorithm>
#include <iostream>
int main() {
  std::cout << std::min(10, -20) << "\n";
  std::cout << std::min(10, 20) << "\n";
  std::cout << std::min('a', 'c') << "\n";
  std::cout << std::min('a', 'C') << "\n";
  std::cout << std::min({10, 20, 30, -30, 9, 100}) << "\n";

  std::cout << "\n=================\n";

  std::cout << "\n" << std::max(10, -20) << "\n";
  std::cout << std::max(10, 20) << "\n";
  std::cout << std::max('a', 'C') << "\n";
  std::cout << std::max('a', 'c') << "\n";
  std::cout << std::max({10, 20, 30, -30, 9, 100}) << "\n";

  int nums[]{10, -20, 30, -100, 100, -50};
  int numsSize = sizeof(nums) / sizeof(nums[0]);
  int checkMinNum = 0;
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] < checkMinNum) {
      checkMinNum = nums[i];
    }
  }
  std::cout << checkMinNum << "\n";
  return 0;
}