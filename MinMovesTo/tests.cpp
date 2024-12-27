#define BOOST_TEST_MODULE MyClassTest
#include <boost/test/included/unit_test.hpp>

#include "minMovesTo.hpp"

BOOST_AUTO_TEST_CASE(test1)
{
    Solution solution;
    std::vector<int> test1{1, 2, 3};
    BOOST_CHECK_EQUAL(solution.minMovesTo(test1), 2);
}

BOOST_AUTO_TEST_CASE(test2)
{
    Solution solution;
    std::vector<int> test2{1, 10, 2, 9};
    BOOST_CHECK_EQUAL(solution.minMovesTo(test2), 16);
}

BOOST_AUTO_TEST_CASE(test3)
{
    Solution solution;
    std::vector<int> test3{1,0,0,8,6};
    BOOST_CHECK_EQUAL(solution.minMovesTo(test3), 14);
}
