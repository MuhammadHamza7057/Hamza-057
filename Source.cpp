#include<iostream>
using namespace std;
int main()
{

	int stock, sold, restocked, threshold, opt;

	cout << "Welcome to to Inventory Management with Restocking !\n";

	cout << "Enter the intial stock : ";
	cin >> stock;

	cout << "Enter minimum stockthreshold  : ";
	cin >> threshold;

	do
	{

		cout << "Enter how many item are you sold : ";
		cin >> sold;



		if (stock < threshold)
		{
			cout << "Stock is below then threshold Please Restart : ";
			cout << "Remaining stock : " << stock << endl;
			cout << "Do You want to restart ? (y/n)";
			cin >> restocked;
		}
		if (restocked > 0)
		{
			stock += restocked;
			cout << "Stock sucessfully restocked. Remaing stock " << stock << endl;

		}
		stock -= sold;
		cout << "Your remaing stock is : " << stock << endl;

		cout << "Continue Managing Inventory ! (y/n) : ";
		cin >> opt;

	} while (restocked == 'y' || restocked == 'n');

	cout << "Thanks for Join Us : \n";


	return 0;
}
