#include "vehicle.h"

Vehicle::Vehicle(int year, std::string make, std::string model, Body_style body_style)
    : _year{year}, _make{make}, _model{model}, _body_style{body_style} { }
std::string Vehicle::make() {return _make;}
std::string Vehicle::model() {return _model;}
int Vehicle::year() {return _year;}
Body_style Vehicle::body_style() {return _body_style;}
std::string Vehicle::body_style_to_string() {
    if (body_style() == Body_style::SEDAN) return "Sedan"; 
    else if (body_style() == Body_style::HATCHBACK) return "Hatchback";
    else if (body_style() == Body_style::MINIVAN) return "Minivan";
    else if (body_style() == Body_style::TRUCK) return "Truck";
    else if (body_style() == Body_style::CROSSOVER) return "Crossover";
    else return "SUV";

}
std::string Vehicle::to_string() {
    return std::to_string(year()) + ' ' + make() + ' ' + model() + ' ' + body_style_to_string();
}

 
