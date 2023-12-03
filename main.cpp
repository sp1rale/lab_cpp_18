#include <iostream>
#include <string>

using namespace std;

struct Iron {
    string brand;
    string model;
    string color;
    int minTemperature;
    int maxTemperature;
    bool steamFunction;
    int power;
};


int main()
{
    Iron myIron;

    myIron.brand = "ExampleBrand";
    myIron.model = "Philips";
    myIron.color = "Black";
    myIron.minTemperature = 100;
    myIron.maxTemperature = 200;
    myIron.steamFunction = true;
    myIron.power = 1500;

    cout << "Iron Information:" << endl;
    cout << "Brand: " << myIron.brand << endl;
    cout << "Model: " << myIron.model << endl;
    cout << "Color: " << myIron.color << endl;
    cout << "Temperature Range: " << myIron.minTemperature << " - " << myIron.maxTemperature << " °C" << endl;
    cout << "Steam Function: " << (myIron.steamFunction ? "Yes" : "No") << endl;
    cout << "Power: " << myIron.power << " Watts" << endl;

	return 0;
}
