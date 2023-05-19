#include <iostream>

using namespace std;

void counter(int cost, int inc, int pulls ,int n) {
	
	cout << "===============================================\n";
	cout << "Insert starting cost per pull: ";
	cin >> cost;
	cout << "Insert increase per new pull: ";
	cin >> inc;
	cout << "Insert needed pulls: ";
	cin >> pulls;
	cout << "===============================================\n";

	for (int i = 1; i <= pulls; i++) {
		n = n + cost;
		cost = cost + inc;
		cout << i << " draw costs total cost is " << cost << " Total cost is: " << n << endl;
	}
	cout << "===============================================\n";
}

int main() {
	int cost(0), pulls(0), inc(0), n(0);
	counter(cost, inc, pulls, n);
	return 0;
}