#include <iostream>
#include <variant>
#include <string> 

int main()
{
	std::variant<std::string, int> data;
	std::cout << sizeof(std::string) << "\n";
	std::cout << sizeof(int) << "\n";
	std::cout << sizeof(data) << "\n";
	data = "GWH";
	std::cout << std::get<std::string>(data) << "\n";
	if (auto value = std::get_if<std::string>(&data))
	{
		std::string& v = *value;
	}
	else
	{

	}
	data = 2;
	std::cout << std::get<int>(data) << "\n";

	std::cin.get();
}