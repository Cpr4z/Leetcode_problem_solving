#include "warming_forecast.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(WarmingForecast, SimpleTest) {
    std::vector<int> temp {5,6,9,7,5,-1,8,11,2};
    std::vector<int> result {1,1,5,3,2,1,1,0,0};
    EXPECT_THAT(
            predictWarming(temp),
            ::testing::UnorderedElementsAreArray(result)
    );
}
