#include "IWeatherSensor.h"
#include <string>
#include <iostream>

namespace WeatherSpace {
    std::string SensorReport(const IWeatherSensor& sensor) {
        int precipitation = sensor.Precipitation();
        double temperature = sensor.TemperatureInC();
        int windSpeed = sensor.WindSpeedKMPH();
        std::string report = "Sunny day";

        if (precipitation >= 60) {
            return "Heavy rain";
        }
        if (temperature > 25) {
            if (precipitation >= 20) {
                return "Partly cloudy";
            }
            if (windSpeed > 50) {
                return "Alert, Stormy with heavy rain";
            }
        }
        return "Sunny day";
    }
}  // namespace WeatherSpace
