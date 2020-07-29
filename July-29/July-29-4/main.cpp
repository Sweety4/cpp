#include"Static.h"

int main()
{
	int a = 11;
	float res;

	res = a / 2;
	cout << "\n\n\t" << res;
	res = (float)a / 2;
	cout << "\n\n\t" << res;
	res = static_cast<float>(a) / 2;
	cout << "\n\n\t" << res;

	cout << "\n\n";
}