#pragma once
#include<string>

using namespace std;

class Weather
{
	std::string city; //   иров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	std::string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100

public:
	Weather(string city, double lon,
		double lat, double temperature, string weather, double windSpeed, int clouds) {
		this->city = city;
		this->lat = lat;
		this->temperature = temperature;
		this->weather = weather;
		this->windSpeed = windSpeed;
		this->clouds = clouds;

	};
};

