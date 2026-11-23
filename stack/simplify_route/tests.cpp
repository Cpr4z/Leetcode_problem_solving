#include "simplify_route.hpp"

#include <gtest/gtest.h>

TEST(SimplifyRoute, SimpleTest) {
    std::string path {"/usr/local/"};
    std::string result {"/usr/local"};
    EXPECT_EQ(simplifyPath(path), result);
}

TEST(SimplifyRoute, SimpleTest1) {
    std::string path {"/var///www/html/"};
    std::string result {"/var/www/html"};
    EXPECT_EQ(simplifyPath(path), result);
}

TEST(SimplifyRoute, SimpleTest2) {
    std::string path {"/tmp/.../a/../b/c/../d/./"};
    std::string result {"/tmp/.../b/d"};
    EXPECT_EQ(simplifyPath(path), result);
}
