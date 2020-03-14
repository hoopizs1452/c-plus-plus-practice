#include"TemperatureConversion.h"
using namespace std;

TemperatureConversion::TemperatureConversion(int newFahrenheit)
{
	fahrenheit = newFahrenheit;
}

double TemperatureConversion::getAnswer()
{
	return (fahrenheit - 32) * 5 / 9.0;
}