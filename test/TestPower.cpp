#include <gtest/gtest.h>
#include "../src/Power.h"


TEST(PowerTest, operator_plus)
{
    Power power(5, 6);
    Power another(7, 8);
    Power third;
    third = power + another;


    EXPECT_EQ(third.getKick(), 14);
    EXPECT_EQ(third.getPunch(), 12);
    
}
TEST(PowerTest, operator_equal){

    Power power(5, 6);
    Power another(7, 8);
    Power third;

}