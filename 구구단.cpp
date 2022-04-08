#include <iostream>
using namespace std;

//2019102197 오세헌 -> 2019102226 전언석 수정

int main()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << i + 1 << " * " << j + 1 << " = " << (i + 1) * (j + 1);
		}
	}

	return 0;
}