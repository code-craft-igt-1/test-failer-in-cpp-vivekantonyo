#include "gtest/gtest.h"
#include "SensorStub.h"
using namespace WeatherSpace;

TEST(WeatherState, isWeatherRainy){
    SensorStub sensor;
    string report = WeatherSpace::SensorReport(sensor);
    cout << report << endl;
    EXPECT_NE(report.find("rain"), std::string::npos);
}

TEST(WeatherState, isWeatherHighPrecipitationAndLowWindspeed){
    SensorStub sensor(29, 78, 72, 42);
    string report = WeatherSpace::SensorReport(sensor);
    EXPECT_NE(report.find("rainy day"), std::string::npos);
}