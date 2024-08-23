#include <gtest/gtest.h>
#include "SensorStub.h"

TEST(WeatherState, isWeatherRainy) {
    WeatherSpace::SensorStub sensor;
    string report = WeatherSpace::SensorReport(sensor);
    cout << report << endl;
    EXPECT_NE(report.find("rain"), std::string::npos);
}

TEST(WeatherState, isWeatherHighPrecipitationAndLowWindspeed) {
    WeatherSpace::SensorStub sensor(29, 78, 72, 42);
    string report = WeatherSpace::SensorReport(sensor);
    EXPECT_NE(report.find("Heavy"), std::string::npos);
}
