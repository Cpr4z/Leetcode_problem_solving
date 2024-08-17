#include <string>
#include <unordered_map>
#include <stack>
#include <boost/test/included/unit_test.hpp>

bool isValid(const std::string& s)
{
	std::unordered_map<char, char> couples{{'(', ')'}, { '[', ']' }, {'{', '}'}};

	std::stack<char> balancer;
	auto it = s.cbegin();
	balancer.push(*it);
	++it;

	while (it != s.end())
	{
		if (couples.find(*it) != couples.cend())
		{
			balancer.push(*it);
		}
		else if (!balancer.empty() && couples.find(balancer.top()) == couples.cend())
		{
			return false;
		}
		else if (!balancer.empty() && couples[balancer.top()] == *it)
		{
			balancer.pop();
		}
		else
		{
			return false;
		}

		++it;
	}
	
	if (!balancer.empty())
	{
		return false;
	}

	return true;
}

BOOST_AUTO_TEST_CASE(test1)
{
	BOOST_CHECK(isValid("()"));
}

BOOST_AUTO_TEST_CASE(test2)
{
	BOOST_CHECK(isValid("()[]{}"));
}

BOOST_AUTO_TEST_CASE(test3)
{
	BOOST_CHECK(!isValid("(]"));
}

BOOST_AUTO_TEST_CASE(test4)
{
	BOOST_CHECK(!isValid("(((()))"));
}

BOOST_AUTO_TEST_CASE(test5)
{
	BOOST_CHECK(!isValid("(((((((("));
}

BOOST_AUTO_TEST_CASE(test6)
{
	BOOST_CHECK(!isValid("(){}}{"));
}