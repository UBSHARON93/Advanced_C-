#include <iostream>

int main()
{ 
	int base10 = 6;
	int base6;
	int div6res;
	//case when exact divider of 6
	int div6mod = (base10 % 6);
	
	div6res = base10 / 6;
	base6 = (div6res * 10) + (base10 - (6 * div6res));
	
		
	std::cout << base6;
	std::cin.get();
}