#include <iostream>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }
};

int main() {
    // Example usage
    Solution solution;
    std::vector<int> nums1 = {1, 2, 3, 1};
    std::cout << "Contains duplicate in nums1: " << std::boolalpha << solution.containsDuplicate(nums1) << std::endl;

    std::vector<int> nums2 = {1, 2, 3, 4};
    std::cout << "Contains duplicate in nums2: " << std::boolalpha << solution.containsDuplicate(nums2) << std::endl;

    std::vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    std::cout << "Contains duplicate in nums3: " << std::boolalpha << solution.containsDuplicate(nums3) << std::endl;

    return 0;
}
