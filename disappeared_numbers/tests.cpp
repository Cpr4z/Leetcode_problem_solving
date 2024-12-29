#define BOOST_TEST_MODULE MyClassTest
#include <boost/test/included/unit_test.hpp>

#include "disappearedNumbers.hpp"

using numbers = std::vector<int>;

BOOST_AUTO_TEST_CASE(test1)
{
    Solution solution;
    numbers input{4,3,2,7,8,2,3,1};
    numbers expected{5, 6};

    numbers result = solution.findDisappearedNumbers(input);

    BOOST_CHECK_EQUAL_COLLECTIONS(
            result.begin(), result.end(),
            expected.begin(), expected.end()
            );

}


BOOST_AUTO_TEST_CASE(test2)
{
    Solution solution;
    numbers input{1,1};
    numbers expected{2};

    numbers result = solution.findDisappearedNumbers(input);

    BOOST_CHECK_EQUAL_COLLECTIONS(
            result.begin(), result.end(),
            input.begin(), input.end()
            );
}