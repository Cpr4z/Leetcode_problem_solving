#define BOOST_TEST_MODULE MyTestModule
#include <unordered_map>
#include <boost/test/included/unit_test.hpp>

int romanToInt(const std::string& romanNumber)
{
	int resultNumber = 0;
	std::unordered_map<char, int> alphabet;

	alphabet.emplace('I', 1);
	alphabet.emplace('V', 5);
	alphabet.emplace('X', 10);
	alphabet.emplace('L', 50);
	alphabet.emplace('C', 100);
	alphabet.emplace('D', 500);
	alphabet.emplace('M', 1000);

	auto it = romanNumber.cbegin();

	while (it != romanNumber.cend())
	{
		int current = alphabet[*it];

		if (it + 1 != romanNumber.end() && current < alphabet[*(it + 1)])
		{
			resultNumber += alphabet[*(it + 1)] - current;
			std::advance(it, 2);
		}
		else
		{
			resultNumber += alphabet[*it];
			++it;
		}
	}

	return resultNumber;
}


BOOST_AUTO_TEST_CASE(roman1)
{
	BOOST_CHECK(romanToInt("III") == 3);
}

BOOST_AUTO_TEST_CASE(roman2)
{
	BOOST_CHECK(romanToInt("CM") == 900);
}

BOOST_AUTO_TEST_CASE(roman3)
{
	BOOST_CHECK(romanToInt("LVIII") == 58);
}

BOOST_AUTO_TEST_CASE(roman4)
{
	BOOST_CHECK(romanToInt("MCMXCIV") == 1994);
}

BOOST_AUTO_TEST_CASE(roman5)
{
	BOOST_CHECK(romanToInt("MVIII") == 1008);
}