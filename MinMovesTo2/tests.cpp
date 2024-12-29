#define BOOST_TEST_MODULE MyClassTest
#include <boost/test/included/unit_test.hpp>

#include "MinMovesTo2.hpp"

BOOST_AUTO_TEST_CASE(test1)
{
    Solution solution;
    std::vector<int> test1{1,2,3};
    BOOST_CHECK_EQUAL(solution.minMoves(test1), 3);
}

BOOST_AUTO_TEST_CASE(test2)
{
    Solution solution;
    std::vector<int> test2{-100,0,100};
    BOOST_CHECK_EQUAL(solution.minMoves(test2), 300);
}

