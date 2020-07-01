#include <iostream>
#include <string>

int BaseConverter(int inputbase, int outputbase, int base10)
{
	int div6remainder = 1;
	int sum = 0;
	int i = 0;
	while (div6remainder > 0)
	{
		//check the remainder
		div6remainder = base10 % outputbase;
		// update the number acc to power of 10;
		sum += div6remainder * pow(inputbase,i);
		i = i + 1;
		//update base10 number now
		base10 = base10 / outputbase;
	}
	return sum;
}

int is_polydivisible(const char* str, int base)
{ 
	int digits = 0;
	int number;
	int newnumber;
	int polyres = 1;

	//convert the strings to number
	number = std::stoi(str);
	int number_cpy = number;

	//find number of digits
	while (number_cpy != 0)
	{
		number_cpy /= 10; digits++;
	}

	int total_digits = digits;
	for (int i = 0; i < total_digits; i++)
	{
		newnumber = number / pow(10, digits - 1);
		digits -= 1;

		//somewhere the polydivisbility condition wasnt true
		if (newnumber % (i+1) != 0) { polyres = 0; }

	}

	return polyres;

}

int main()
{
	int number = 1232; // result is 1232
	int result = BaseConverter(6,10,number);
	int is_poly = is_polydivisible("1239", 10);
	std::cout << "Done "<<result <<"   " << is_poly;
	std::cin.get();
}