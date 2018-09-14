#ifndef __VEHICLE_H
#define __VEHICLE_H
#include <string>

enum class Body_style{SEDAN, HATCHBACK, MINIVAN, TRUCK, CROSSOVER, SUV};

class Vehicle {
  public:
    Vehicle(int year, std::string make, std::string model, Body_style body_style);
    std::string make();
    std::string model();
    int year();
    Body_style body_style();
    std::string to_string();
  private:
    std::string body_style_to_string();
    int _year;
    std::string _make;
    std::string _model;
    Body_style _body_style;
};
#endif
