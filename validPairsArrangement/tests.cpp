#define BOOST_TEST_MODULE MyClassTest
#include <boost/test/included/unit_test.hpp>

#include "validArrangement.hpp"

namespace utils
{
    template <typename T>
    std::vector<T> flattenMatrix(const std::vector<std::vector<T>>& matrix)
    {
        std::vector<T> flat;
        for (const auto& row : matrix)
        {
            flat.insert(flat.end(), row.begin(), row.end());
        }
        return flat;
    }
}

BOOST_AUTO_TEST_CASE(test9)
{
    Solution solution;
    //[[5,1],[4,5],[11,9],[9,4]]
    std::vector<std::vector<int>> test9{{5, 1}, {4, 5}, {11, 9}, {9, 4}};
    //[11,9],[9,4],[4,5],[5,1]
    std::vector<std::vector<int>> expected{{11,9}, {9 ,4}, {4, 5}, {5, 1}};
    std::vector<int> flatExpected = utils::flattenMatrix(expected);

    std::vector<std::vector<int>> result = solution.validArrangement(test9);
    std::vector<int> flatResult = utils::flattenMatrix(result);

    BOOST_CHECK_EQUAL_COLLECTIONS(
    flatExpected.begin(), flatExpected.end(),
    flatResult.begin(), flatResult.end());
}

BOOST_AUTO_TEST_CASE(test10)
{
    Solution solution;
    //[1,3],[3,2],[2,1]
    std::vector<std::vector<int>> test10 {{1, 3}, {3, 2}, {2, 1}};
    //[1,3],[3,2],[2,1]
    std::vector<std::vector<int>> expected {{1, 3}, {3, 2}, {2, 1}};
    std::vector<int> flatExpected = utils::flattenMatrix(expected);

    std::vector<std::vector<int>> result = solution.validArrangement(test10);
    std::vector<int> flatResult = utils::flattenMatrix(result);
    BOOST_CHECK_EQUAL_COLLECTIONS(
    flatExpected.begin(), flatExpected.end(),
    flatResult.begin(), flatResult.end()
    );
}

BOOST_AUTO_TEST_CASE(test11)
{
    Solution solution;
    //[1,2],[1,3],[2,1]
    std::vector<std::vector<int>> test11 {{1, 2}, {1, 3}, {2, 1}};

    //[1,2],[2,1],[1,3]
    std::vector<std::vector<int>> expected {{1, 2}, {2, 1}, {1, 3}};
    std::vector<int> flatExpected = utils::flattenMatrix(expected);

    std::vector<std::vector<int>> result = solution.validArrangement(test11);
    std::vector<int> flatResult = utils::flattenMatrix(result);
    BOOST_CHECK_EQUAL_COLLECTIONS(
    flatExpected.begin(), flatExpected.end(),
    flatResult.begin(), flatResult.end()
    );
}