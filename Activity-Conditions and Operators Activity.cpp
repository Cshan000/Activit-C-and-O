#include <iostream>

using namespace std;

int main ()
{
	string fullName, Country;
	int Age;
	char Vaccinated;
	cout<< "Name\n";
	getline (cin, fullName);
	
	cout<< "Age\n";
	cin >> Age;
	
	if (Age < 12){
		cout<< "We are sorry, your travel pass cannot be issued.\n";
		return 0;
	}
	cout<< "Country\n";
	cin>> Country;
	
	cout<< "Vaccinated\n";
	cin>> Vaccinated;
	
	if (!(Country != "Philippines" && Vaccinated != 'Y')){
	cout<< "Your travel pass has been issued.";
}   else {
	cout<< "We are sorry, your travel pass cannot be issued.\n";
}
    return 0;
}
