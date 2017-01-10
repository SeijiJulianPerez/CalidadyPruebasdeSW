#include "first.h"
#include "gtest/gtest.h"

TEST(Factorial, positivos)
{
	ASSERT_EQ(1, fact(1));
	ASSERT_EQ(120, fact(5));
	ASSERT_EQ(1, fact(0));	
}

TEST(Factorial, negativos)
{
	ASSERT_EQ(0, factorial(-5));
}
