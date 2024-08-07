#pragma once
#include "IWeatherSensor.h"

namespace WeatherSpace {
    class SensorStub : public IWeatherSensor {
    public:
        SensorStub();
        SensorStub(int temperature, int precipitation, int humidity, int windSpeed);
        double TemperatureInC() const override;
        int Precipitation() const override;
        int Humidity() const override;
        int WindSpeedKMPH() const override;

    private:
        int m_temperature = 26;
        int m_precipitation = 70;
        int m_humidity = 72;
        int m_windSpeed = 52;
    };
}
