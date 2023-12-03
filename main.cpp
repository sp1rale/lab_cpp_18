#include <iostream>
#include <string>

using namespace std;

struct Boiler {
	string brand;
	string color;
	int power;
	double volume;
	int heatingTemperature;
};



int main()
{
	Boiler myBoiler;

	myBoiler.brand = "Bosh";
	myBoiler.color = "White";
	myBoiler.power = 2000;
	myBoiler.volume = 50.0;
	myBoiler.heatingTemperature = 80;

	cout << "Boiler Information:" << endl;
	cout << "Brand: " << myBoiler.brand << endl;
	cout << "Color: " << myBoiler.color << endl;
	cout << "Power: " << myBoiler.power << " Watts" << endl;
	cout << "Volume: " << myBoiler.volume << " liters" << endl;
	cout << "Heating Temperature: " << myBoiler.heatingTemperature << " °C" << endl;

	return 0;
}
