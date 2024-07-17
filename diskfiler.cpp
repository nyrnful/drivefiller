#include <iostream>
#include <fstream>
#include <time.h>

int randomizenum() {
	srand(time(NULL));
	int num = rand() % 10 + 1;
	return num;
}


int askuserandprint() {
	std::ofstream outfile ("Spammedfile");
	std::cout << "How many lines do you want?" << '\n';
	int lines{};
	std::cin >> lines;
	std::cout << lines << '\n';
	for (size_t i = 0; i < lines; i++) {
		outfile << randomizenum() << '\n';
	}
	return 0;
}


int main() {
	askuserandprint();
	return 0;
}