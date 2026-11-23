#include "convoluted_route.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(ConvolutedRoute, SimpleTest) {
    std::vector<std::vector<std::string>> cities {{"Lima","Tokyo"}};
    std::vector<std::string> result {"Lima","Tokyo"};
    EXPECT_THAT(
            route(cities),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(ConvolutedRoute, SimpleTest1) {
    std::vector<std::vector<std::string>> cities {{"Berlin","Rome"}, {"Berlin","Dubai"}};
    std::vector<std::string> result {"Dubai","Berlin","Rome"};
    EXPECT_THAT(
            route(cities),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(ConvolutedRoute, SimpleTest2) {
    std::vector<std::vector<std::string>> cities {{"Berlin","Rome"}, {"Cairo","Rome"}, {"Berlin","Dubai"}};
    std::vector<std::string> result {"Dubai","Berlin","Rome","Cairo"};
    EXPECT_THAT(
            route(cities),
            ::testing::UnorderedElementsAreArray(result)
    );
}