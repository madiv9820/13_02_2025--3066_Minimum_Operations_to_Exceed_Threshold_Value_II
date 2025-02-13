from Solution import Solution
from timeout_decorator import timeout
import unittest

class UnitTest(unittest.TestCase):
    def setUp(self):
        self.__solution = Solution()
        self.__testcases = {
            "default_testcase_1": ([2,11,10,1,3], 10, 2),
            "default_testcase_2": ([1,1,2,4,9], 20, 4),
            "basic_case": ([1,2], 5, 1),
            "already_satisfied": ([5,10,15], 5, 0),
            "multiple_operations_required": ([1,3,5,7], 20, 3),
            "large_numbers": ([100,200,300,400], 1000, 3),
            "smallest_possible_input": ([1,1], 3, 1),
            "large_k_value": ([10,15,20], 30, 2),
            "same_numbers": ([5,5,5,5], 20, 3),
            "sorted_array": ([1,2,3,4,5], 10, 3)
        }
        return super().setUp()
    
    @timeout(0.5)
    def test_case_default_testcase_1(self):
        nums, k, expected = self.__testcases["default_testcase_1"]
        output = self.__solution.minOperations(nums = nums, k = k)
        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_default_testcase_2(self):
        nums, k, expected = self.__testcases["default_testcase_2"]
        output = self.__solution.minOperations(nums = nums, k = k)
        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_basic_case(self):
        nums, k, expected = self.__testcases["basic_case"]
        output = self.__solution.minOperations(nums = nums, k = k)
        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_already_satisfied(self):
        nums, k, expected = self.__testcases["already_satisfied"]
        output = self.__solution.minOperations(nums = nums, k = k)
        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_multiple_operations_required(self):
        nums, k, expected = self.__testcases["multiple_operations_required"]
        output = self.__solution.minOperations(nums = nums, k = k)
        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_large_numbers(self):
        nums, k, expected = self.__testcases["large_numbers"]
        output = self.__solution.minOperations(nums = nums, k = k)
        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_smallest_possible_input(self):
        nums, k, expected = self.__testcases["smallest_possible_input"]
        output = self.__solution.minOperations(nums = nums, k = k)
        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_large_k_value(self):
        nums, k, expected = self.__testcases["large_k_value"]
        output = self.__solution.minOperations(nums = nums, k = k)
        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_same_numbers(self):
        nums, k, expected = self.__testcases["same_numbers"]
        output = self.__solution.minOperations(nums = nums, k = k)
        self.assertEqual(output, expected)
    @timeout(0.5)
    def test_case_sorted_array(self):
        nums, k, expected = self.__testcases["sorted_array"]
        output = self.__solution.minOperations(nums = nums, k = k)
        self.assertEqual(output, expected)

if __name__ == '__main__':
    unittest.main()