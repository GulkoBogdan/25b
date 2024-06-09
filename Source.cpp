#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a;
	int b; 
	int c;

	cout << "Input a: ";
	do {
		cin >> a;
	} while (a<=0);

	cout << "Input b: ";
	do {
		cin >> b;
	} while (b <= 0);

	cout << "Input c: ";
	do {
		cin >> c;
	} while (c <= 0);

	int s = 2 * (a * c + b * c + a * b);
	int v = a * c * b;

	cout << "S = " << s << endl;
	cout << "V = " << v<<endl;

	//2
		
	int a2;
	int b2;
	int c2;
	int s2;

	cout << "Input a: ";
	do {
		cin >> a;
	} while (a <= 0);

	cout << "Input b: ";
	do {
		cin >> b;
	} while (b <= 0);

	c2 = sqrt(pow(a2, 2) + pow(b2, 2));
	int p = c2 + a2 + b2;
	cout << "C = " << c2;
	cout << "P = " << p;

	//3


}