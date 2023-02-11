#include "pch.h"
#include "../01_TwoSum/TwoSum.h"

TEST(TwoSum, PositiveElements) {
	std::vector<int> expected1{ 1, 2 };
	std::vector<int> result1 = Solution::twoSum({ 1, 2, 3 }, 5);

	std::vector<int> expected2{ 1, 3 };
	std::vector<int> result2 = Solution::twoSum({ 5, 1, 2, 4 }, 5);

	std::vector<int> expected3{ 3, 4 };
	std::vector<int> result3 = Solution::twoSum({ 4, 3, 2, 1, 1 }, 2);
 
	EXPECT_EQ(result1, expected1);
	EXPECT_EQ(result2, expected2);
	EXPECT_EQ(result3, expected3);

}

TEST(TwoSum, NegativeElements) {
	std::vector<int> expected1{ 1, 3 };
	std::vector<int> result1 = Solution::twoSum({ -1, -2, -3, -4 }, -6);

	std::vector<int> expected2{ 0, 1 };
	std::vector<int> result2 = Solution::twoSum({ -5, -4, -3 }, -9);

	std::vector<int> expected3{ 3, 4 };
	std::vector<int> result3 = Solution::twoSum({ -4, -3, -2, -1, -1 }, -2);

	EXPECT_EQ(result1, expected1);
	EXPECT_EQ(result2, expected2);
	EXPECT_EQ(result3, expected3);

}

TEST(TwoSum, EmptyResult) {
	std::vector<int> expected1{ };
	std::vector<int> result1 = Solution::twoSum({ -1, -2, -3, -4 }, 0);

	std::vector<int> expected2{ };
	std::vector<int> result2 = Solution::twoSum({ -5, -4, -3 }, -10);

	std::vector<int> expected3{ };
	std::vector<int> result3 = Solution::twoSum({ -4, -3, -2, -1, -1 }, -1);

	std::vector<int> expected4{ };
	std::vector<int> result4 = Solution::twoSum({  }, 1);

	EXPECT_EQ(result1, expected1);
	EXPECT_EQ(result2, expected2);
	EXPECT_EQ(result3, expected3);
	EXPECT_EQ(result4, expected4);

}



int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}