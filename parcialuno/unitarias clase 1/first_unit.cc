#include "first.h"
#include "gtest/gtest.h"

TEST(factorial, positivos){
	ASSERT_EQ(1, factorial(1));
}

TEST(factorial, negativos){
	ASSERT_EQ(-1, factorial(-1));
}

TEST(factorial, cero){
	ASSERT_EQ(1, factorial(0));
}