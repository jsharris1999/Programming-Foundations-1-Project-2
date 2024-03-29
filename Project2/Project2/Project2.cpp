#include <iostream>
using namespace std;

int main()
{
	// Local variable declarations 
	char command = '0';
	float Money = 0;
	float Converted = 0;

	cout << "Please enter a cryptocurrency.\n";
	cout << "Supported Cryptocurrencies:\n"
		<< "   b - Bitcoin\n"
		<< "   t - Tether\n"
		<< "   e - Ethereum\n"
		<< "   n - Namecoin\n";

	// Read user input
	cin >> command;

	if (command == 'b')
	{
		cout << "Please enter whether you would like to convert from Bitcoin to US Dollars or from US Dollars to Bitcoin.\n";
		cout << "   u - US Dollars to Selected Cryptocurrencies\n"
			<< "   c - Selected Cryptocurrency to US Dollars\n";
		cin >> command;
		if (command == 'u')
		{
			cout << "Please enter the amount of US Dollars you would like to convert to Bitcoin." << endl;
			cin >> Money;
			if (Money <= 0)
			{
				cout << "Invalid amount of money, this program will now close.\n";
			}
			else
			{
				Converted = Money / 6500;
				cout << Money << " in US Dollars is approxiamtely equivalent to " << Converted << " Bitcoin." << endl;
			}

		}
		if (command == 'c')
		{
			cout << "Please enter the amount of Bitcoin you would like to convert to US Dollars." << endl;
			cin >> Money;
			if (Money <= 0)
			{
				cout << "Invalid amount of money, this program will now close.\n";
			}
			else
			{
				Converted = Money * 6500;
				cout << Money << " in Bitcoin is approxiamtely equivalent to " << Converted << " US Dollars." << endl;
			}
		}
		if (command != 'u' && command != 'c')
		{
			cout << "Invalid command, this program will now close.\n";
		}
	}
	if (command == 't')
	{
		cout << "Please enter whether you would like to convert from Tether to US Dollars or from US Dollars to Tether.\n";
		cout << "   u - US Dollars to Selected Cryptocurrencies\n"
			<< "   c - Selected Cryptocurrency to US Dollars\n";
		cin >> command;
		if (command == 'u')
		{
			cout << "Please enter the amount of US Dollars you would like to convert to Tether." << endl;
			cin >> Money;
			if (Money <= 0)
			{
				cout << "Invalid amount of money, this program will now close.\n";
			}
			else
			{
				Converted = Money / 0.998;
				cout << Money << " in US Dollars is approxiamtely equivalent to " << Converted << " Tether." << endl;
			}
		}
		if (command == 'c')
		{
			cout << "Please enter the amount of Tether you would like to convert to US Dollars." << endl;
			cin >> Money;
			if (Money <= 0)
			{
				cout << "Invalid amount of money, this program will now close.\n";
			}
			else
			{
				Converted = Money * 0.998;
				cout << Money << " in Tether is approxiamtely equivalent to " << Converted << " US Dollars." << endl;
			}
		}
		if (command != 'u' && command != 'c')
		{
			cout << "Invalid command, this program will now close.\n";
		}
	}
	if (command == 'e')
	{
		cout << "Please enter whether you would like to convert from Ethereum to US Dollars or from US Dollars to Ethereum.\n";
		cout << "   u - US Dollars to Selected Cryptocurrencies\n"
			<< "   c - Selected Cryptocurrency to US Dollars\n";
		cin >> command;
		if (command == 'u')
		{
			cout << "Please enter the amount of US Dollars you would like to convert to Ethereum." << endl;
			cin >> Money;
			if (Money <= 0)
			{
				cout << "Invalid amount of money, this program will now close.\n";
			}
			else
			{
				Converted = Money / 219.388;
				cout << Money << " in US Dollars is approxiamtely equivalent to " << Converted << " Ethereum." << endl;
			}
		}
		if (command == 'c')
		{
			cout << "Please enter the amount of Ethereum you would like to convert to US Dollars." << endl;
			cin >> Money;
			if (Money <= 0)
			{
				cout << "Invalid amount of money, this program will now close.\n";
			}
			else
			{	
				Converted = Money * 219.388;
				cout << Money << " in Ethereum is approxiamtely equivalent to " << Converted << " US Dollars." << endl;
			}
		}
		if (command != 'u' && command != 'c')
		{
			cout << "Invalid command, this program will now close.\n";
		}
	}
	if (command == 'n')
	{
		cout << "Please enter whether you would like to convert from Namecoin to US Dollars or from US Dollars to Namecoin.\n";
		cout << "   u - US Dollars to Selected Cryptocurrencies\n"
			<< "   c - Selected Cryptocurrency to US Dollars\n";
		cin >> command;
		if (command == 'u')
		{
			cout << "Please enter the amount of US Dollars you would like to convert to Namecoin." << endl;
			cin >> Money;
			if (Money <= 0)
			{
				cout << "Invalid amount of money, this program will now close.\n";
			}
			else
			{
				Converted = Money / 1.444;
				cout << Money << " in US Dollars is approxiamtely equivalent to " << Converted << " Namecoin." << endl;
			}
		}
		if (command == 'c')
		{
			cout << "Please enter the amount of Namecoin you would like to convert to US Dollars." << endl;
			cin >> Money;
			if (Money <= 0)
			{
				cout << "Invalid amount of money, this program will now close.\n";
			}
			else
			{
				Converted = Money * 1.444;
				cout << Money << " in Namecoin is approxiamtely equivalent to " << Converted << " US Dollars." << endl;
			}
			
		}
		if (command != 'u' && command != 'c')
		{
			cout << "Invalid command, this program will now close.\n";
		}
	}
	if (command != 'b' && command != 't' && command != 'e' && command != 'n' && command != 'u' && command != 'c')
	{
		cout << "Invalid command, this program will now close.\n";
	}
	return 0;
}
