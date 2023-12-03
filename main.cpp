#include <iostream>
#include <string>

using namespace std;

struct WashingMachine {
	string brand;
	string color;
	double height ;
	double length;
	double width;
	int power;
	int spinSpeed;
	int  heatingTemperature;
};

int main()
{
	WashingMachine myWashingMachine;

	myWashingMachine.brand = "Bosh";
	myWashingMachine.color = "White";
	myWashingMachine.width = 60.0;
	myWashingMachine.length = 80.0;
	myWashingMachine.height = 100.0;
	myWashingMachine.power = 1200;
	myWashingMachine.spinSpeed = 800;
	myWashingMachine.heatingTemperature = 40;

	cout << "Washing Machine Information:" << endl;
	cout << "Brand: " << myWashingMachine.brand << endl;
	cout << "Color: " << myWashingMachine.color << endl;
	cout << "Dimensions (W x L x H): " << myWashingMachine.width << " x " << myWashingMachine.length << " x " << myWashingMachine.height << endl;
	cout << "Power: " << myWashingMachine.power << " Watts" << endl;
	cout << "Spin Speed: " << myWashingMachine.spinSpeed << " RPM" << endl;
	cout << "Heating Temperature: " << myWashingMachine.heatingTemperature << " °C" << endl;

	return 0;
}
