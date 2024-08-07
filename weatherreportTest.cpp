#pragma once
#include <gtest/gtest.h>
#include "IWeatherSensor.h"
#include "SensorStub.h"
#include <string>
using namespace std;
using namespace WeatherSpace;

TEST(WeatherState, isWeatherRainy)
{
    SensorStub sensor;
    string report = WeatherSpace::SensorReport(sensor);
    cout << report << endl;
    //assert(report.find("rain") != string::npos);
}

TEST(WeatherState, isWeatherHighPrecipitationAndLowWindspeed)
{
    SensorStub sensor(72, 70, 26, 48);
    string report = WeatherSpace::SensorReport(sensor);
    EXPECT_EQ(report.length(), 0);
}
