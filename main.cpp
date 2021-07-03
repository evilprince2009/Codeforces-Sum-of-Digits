#include <iostream>
#include <string>
 
using namespace std;
int iteration_to_single_digit(string number)
{
	string buffer = number;
	int iteration_count = 0;
	
	int number_length = buffer.length();
	while (number_length > 1)
	{
		int sum = 0;
		for (int i = 0; i < number_length; i++)
		{
			sum += buffer[i] - '0';
		}
		
		buffer = to_string(sum);
		number_length = buffer.length();
		++iteration_count;
	}
	return iteration_count;
}
 
int main()
{
	string number;
	cin >> number;
	cout << iteration_to_single_digit(number) << endl;
	return 0;
}