#include "romanToInteger.hpp"

#include <unordered_map>

int romanToInt(const std::string_view roman_number)
{
	int resultNumber = 0;
	const std::unordered_map<char, int> alphabet{
		{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
		{'C', 100}, {'D', 500}, {'M', 1000}
	};

	auto it = roman_number.cbegin();

	while (it != roman_number.cend())
	{
		const int current = alphabet.at(*it);

		if (it + 1 != roman_number.end() && current < alphabet.at(*(it + 1)))
		{
			resultNumber += alphabet.at(*(it + 1)) - current;
			std::advance(it, 2);
		}
		else
		{
			resultNumber += current;
			++it;
		}
	}

	return resultNumber;
}
