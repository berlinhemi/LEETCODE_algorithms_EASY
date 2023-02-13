#include "pch.h"
#include "../04_ValidParentheses/04_ValidParentheses.h"

TEST(ValidParentheses, ValidBraces) {

	Solution s;

	EXPECT_EQ(s.isValid("()[]{}"), true);
	EXPECT_EQ(s.isValid("([]){([])}"), true);
	EXPECT_EQ(s.isValid("(([]){})"), true);

}



TEST(ValidParentheses, InvalidBraces) {

	Solution s;
	EXPECT_EQ(s.isValid("[([]])"), false);
	EXPECT_EQ(s.isValid("[({])}"), false);
	EXPECT_EQ(s.isValid("(([]){)}"), false);

}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

