#include<iostream>

using namespace std;

int main(){
	float cel, fah; 
	cout << "Enter temperature in celcius : ";
	cin >> cel;
	fah = cel + 32;
	cout << cel <<" Celcius is = "<<fah<<" Fahrenheit."<<endl;
	return 0;
}
