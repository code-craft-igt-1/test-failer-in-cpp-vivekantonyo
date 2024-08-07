#pragma once
#include "SensorStub.h"

namespace WeatherSpace
{
    SensorStub::SensorStub(){}

    SensorStub::SensorStub(int temperature, int precipitation, int humidity, int windSpeed)
    {
        m_temperature = temperature;
        m_precipitation = precipitation;
        m_humidity = humidity;
        m_windSpeed = windSpeed;
    }

    double SensorStub::TemperatureInC() const { return m_temperature; }
    int SensorStub::Precipitation() const { return m_precipitation; }
    int SensorStub::Humidity() const { return m_humidity; }
    int SensorStub::WindSpeedKMPH() const { return m_windSpeed; }
}
