#pragma once
#include <string>
using namespace std;
namespace WeatherSpace{
    class IWeatherSensor{
    public:
        virtual double TemperatureInC() const = 0;
        virtual int Precipitation() const = 0;
        virtual int Humidity() const = 0;
        virtual int WindSpeedKMPH() const = 0;
    };
    string SensorReport(const IWeatherSensor& sensor);
}
