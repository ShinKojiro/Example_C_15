#include <iostream>
#include <string>

using namespace std;

//Constants
const int CAPACITY = 5;

int main()
{

	//Array ==> dataType nameOfArray[];
	//string colors[] = {"red", "orange", "yellow", "green", "blue", "purple"};

	string colors[CAPACITY];

	int i = 0;
	int numOfElements = 0;
	string input;

	cout << "Please type in the colors you want (-1 to stop): ";
	cin >> input;

	while ((input != "-1") && (i < CAPACITY))
	{
		numOfElements++;
		colors[i] = input;
		i++;
		cin >> input;
	}

	for (int j = 0; j < numOfElements; j++)
	{
		cout << "Color #" << (j + 1) << " " << colors[j] << endl;
	}

	return 0;
}