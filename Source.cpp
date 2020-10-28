#include <iostream>
using namespace std;

int main()
{
	int numbers[10], x, z = 0;
	for (x = 0; x <= 9; x++) {
		if (x % 2 == 0){
			numbers[x] = 0;
		}
		else {
			numbers[x] = 1;
		}
	}
	while (z <= 9) {
		cout << numbers[z] << " ";
		z++;
	}
}