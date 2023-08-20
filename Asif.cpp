#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

	int number,usernumber,leftnumber = 0;

	srand(time(0)); 

	number = rand() % 100 + 1; 

	cout << "Welcome to My Guessing the number Game"<<endl<<endl;

	do
	{
		cout << "Enter a number between 1 to 100 = ";

		cin >> usernumber;

		leftnumber++;

		if (usernumber > number)

			cout << "Number is too high!"<<endl<<endl;

		else if (usernumber < number)

			cout << "Number is too low!"<<endl<<endl;

		else

			cout << "\nBooyah! you guess the number in " << leftnumber << " attempts\n";
	} while (usernumber != number);

	return 0;
}
