#include "pch.h"
#include "split.h"

TEST(SplitStringTest, basictest)
{
	std::string input = "sun,wen,zhen";
	char separator = ',';
	std::vector<std::string> expect = { "sun", "wen", "zhen" };
	std::vector<std::string> result = splitString(input, separator);
	EXPECT_EQ(expect, result);

}

TEST(SplitStringTest, ContinuousSeparator)
{
	std::string input = "sun,,,wen,,zhen";
	char separator = ',';
	std::vector<std::string> expect = { "sun", "wen", "zhen" };
	std::vector<std::string> result = splitString(input, separator);
	EXPECT_EQ(expect, result);
}

TEST(SplitStringTest, HeadOrTailSeparator)
{
	std::string input = ",sun,wen,zhen,";
	char separator = ',';
	std::vector<std::string> expect = { "sun", "wen", "zhen" };
	std::vector<std::string> result = splitString(input, separator);
	EXPECT_EQ(expect, result);
}

TEST(SplitStringTest, EmptyInput)
{
	std::string input = "";
	char separator = ',';
	std::vector<std::string> expect = {};
	std::vector<std::string> result = splitString(input, separator);
	EXPECT_EQ(expect, result);
}

TEST(SplitStringTest, NoSeparator)
{
	std::string input = "sun wen zhen";
	char separator = ',';
	std::vector<std::string> expect = { "sun wen zhen" };
	std::vector<std::string> result = splitString(input, separator);
	EXPECT_EQ(expect, result);
}

TEST(SplitStringTest, OnlySeparator)
{
	std::string input = ",,,";
	char separator = ',';
	std::vector<std::string> expect = {};
	std::vector<std::string> result = splitString(input, separator);
	EXPECT_EQ(expect, result);
}