#include <gtest/gtest.h>
#include <string>
using namespace std;

bool isPrime(int N) {
    for (int i = 2; i < N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

TEST(primeTest, IsPrime) {
    EXPECT_TRUE(isPrime(2));
    EXPECT_TRUE(isPrime(3));
    EXPECT_FALSE(isPrime(4));
    EXPECT_TRUE(isPrime(5));
    EXPECT_FALSE(isPrime(6));
    EXPECT_TRUE(isPrime(7));
}