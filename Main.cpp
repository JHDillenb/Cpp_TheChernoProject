#include <iostream>
#include <vector>
using namespace std;


int Hello_world() {
	std::cout << "What's going on, World" << std::endl;
	for (int i = 0; i < 100000; i++) {
		std::cout << 7 * i << " ";
	}
	return 0;
}

int Prime_numbers() {
	std::vector<int> primes = { 2 };
	int a = 2;
	//	Hello_world();
	bool butts = true;
	while (butts == true) {
		a++;
		double sqrty = sqrt(a);
		int number = ceil(sqrty);
		int stop_at = primes.size();
		for (int i = 0; i < primes.size(); i++) {
			int num2check = primes[i];
			if (number > num2check) {
				int stop_at = i;
				break;
			}
		}
		bool acceptance = true;
		for (int i = 0; i < stop_at; i++) {
			int num2check = primes[i];
			int mod = a % num2check;
			if (mod == 0) {
				acceptance = false;
				break;
			}
		}
		if (acceptance == true) {
			primes.push_back(a);
			std::cout << a << " ";
		}
	}
	return 0;
}



int main() {
//	Hello_world();
//	Prime_numbers();
	std::cin.get();
	return 0;
}
