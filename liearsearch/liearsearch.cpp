#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "enter the number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\narray should have minimum 1 and maximum 20 element.\n\n";
	}


	cout << "\n---------------------\n";
	cout << " enter array element \n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}



void linesearch()
{
	char ch;
	int comparisons;

	do
	{
		cout << "\nenter the element you want to search: ";
		int item;
		cin >> item;

		