#include "tourist's_route.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(TouristsRoute, SimpleTest) {
    std::vector<std::vector<std::string>> cities {{"Vladivostok","Moscow"}};
    std::vector<std::string> result {"Vladivostok","Moscow"};
    EXPECT_THAT(
            route(cities),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(TouristsRoute, SimpleTest1) {
    std::vector<std::vector<std::string>> cities {{"Moscow","Yerevan"}, {"Vladivostok","Moscow"}, {"Yerevan","NY"}};
    std::vector<std::string> result {"Vladivostok","Moscow","Yerevan","NY"};
    EXPECT_THAT(
            route(cities),
            ::testing::UnorderedElementsAreArray(result)
    );
}
