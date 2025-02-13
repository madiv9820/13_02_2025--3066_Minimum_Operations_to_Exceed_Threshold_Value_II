#include <iostream>
#include <string>
#include <unordered_map>
#include "Solution.hpp"

struct testcase {
    vector<int> nums;
    int k, output;
};

class UnitTest {
private:
    Solution solution;
    unordered_map<string, testcase> testcases;
    void test_case_default_testcase_1() {
        vector<int>& nums = testcases["default_testcase_1"].nums;
        int k = testcases["default_testcase_1"].k, output = testcases["default_testcase_1"].output;
        int result = solution.minOperations(nums = nums, k = k);
        
        cout << "test_case_default_testcase_1: " << ((result == output) ? "passed":"failed") << endl;
    }
    void test_case_default_testcase_2() {
        vector<int>& nums = testcases["default_testcase_2"].nums;
        int k = testcases["default_testcase_2"].k, output = testcases["default_testcase_2"].output;
        int result = solution.minOperations(nums = nums, k = k);
        
        cout << "test_case_default_testcase_2: " << ((result == output) ? "passed":"failed") << endl;
    }
    void test_case_basic_case() {
        vector<int>& nums = testcases["basic_case"].nums;
        int k = testcases["basic_case"].k, output = testcases["basic_case"].output;
        int result = solution.minOperations(nums = nums, k = k);
        
        cout << "test_case_basic_case: " << ((result == output) ? "passed":"failed") << endl;
    }
    void test_case_already_satisfied() {
        vector<int>& nums = testcases["already_satisfied"].nums;
        int k = testcases["already_satisfied"].k, output = testcases["already_satisfied"].output;
        int result = solution.minOperations(nums = nums, k = k);
        
        cout << "test_case_already_satisfied: " << ((result == output) ? "passed":"failed") << endl;
    }
    void test_case_multiple_operations_required() {
        vector<int>& nums = testcases["multiple_operations_required"].nums;
        int k = testcases["multiple_operations_required"].k, output = testcases["multiple_operations_required"].output;
        int result = solution.minOperations(nums = nums, k = k);
        
        cout << "test_case_multiple_operations_required: " << ((result == output) ? "passed":"failed") << endl;
    }
    void test_case_large_numbers() {
        vector<int>& nums = testcases["large_numbers"].nums;
        int k = testcases["large_numbers"].k, output = testcases["large_numbers"].output;
        int result = solution.minOperations(nums = nums, k = k);
        
        cout << "test_case_large_numbers: " << ((result == output) ? "passed":"failed") << endl;
    }
    void test_case_smallest_possible_input() {
        vector<int>& nums = testcases["smallest_possible_input"].nums;
        int k = testcases["smallest_possible_input"].k, output = testcases["smallest_possible_input"].output;
        int result = solution.minOperations(nums = nums, k = k);
        
        cout << "test_case_smallest_possible_input: " << ((result == output) ? "passed":"failed") << endl;
    }
    void test_case_large_k_value() {
        vector<int>& nums = testcases["large_k_value"].nums;
        int k = testcases["large_k_value"].k, output = testcases["large_k_value"].output;
        int result = solution.minOperations(nums = nums, k = k);
        
        cout << "test_case_large_k_value: " << ((result == output) ? "passed":"failed") << endl;
    }
    void test_case_same_numbers() {
        vector<int>& nums = testcases["same_numbers"].nums;
        int k = testcases["same_numbers"].k, output = testcases["same_numbers"].output;
        int result = solution.minOperations(nums = nums, k = k);
        
        cout << "test_case_same_numbers: " << ((result == output) ? "passed":"failed") << endl;
    }
    void test_case_sorted_array() {
        vector<int>& nums = testcases["sorted_array"].nums;
        int k = testcases["sorted_array"].k, output = testcases["sorted_array"].output;
        int result = solution.minOperations(nums = nums, k = k);
        
        cout << "test_case_sorted_array: " << ((result == output) ? "passed":"failed") << endl;
    }
public:
    UnitTest() {
        testcases = {
            {"default_testcase_1", {{2,11,10,1,3}, 10, 2}},
            {"default_testcase_2", {{1,1,2,4,9}, 20, 4}},
            {"basic_case", {{1,2}, 5, 1}},
            {"already_satisfied", {{5,10,15}, 5, 0}},
            {"multiple_operations_required", {{1,3,5,7}, 20, 3}},
            {"large_numbers", {{100,200,300,400}, 1000, 3}},
            {"smallest_possible_input", {{1,1}, 3, 1}},
            {"large_k_value", {{10,15,20}, 1000, 2}},
            {"same_numbers", {{5,5,5,5}, 20, 3}},
            {"sorted_array", {{1,2,3,4,5}, 10, 3}}
        };
    }
    void test() {
        test_case_default_testcase_1();
        test_case_default_testcase_2();
        test_case_basic_case();
        test_case_already_satisfied();
        test_case_multiple_operations_required();
        test_case_large_numbers();
        test_case_smallest_possible_input();
        test_case_large_k_value();
        test_case_same_numbers();
        test_case_sorted_array();
    }
};

int main() {
    UnitTest test;
    test.test();
}