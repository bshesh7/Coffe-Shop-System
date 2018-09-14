#include "gas_vehicle.h"
#include "electric_vehicle.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<double> cost_per_gallon = {2.00, 2.25, 2.50, 3.00, 4.00};
    std::vector<double> cost_per_kwh = {0.05, 0.08, 0.11, 0.13, 0.15};
    std::vector<Electric_vehicle> evs = {
        Electric_vehicle{2014, "Telsa", "Model S 85", Body_style::SEDAN, 3.12, 85},
        Electric_vehicle{2014, "Telsa", "Model 3 LR", Body_style::SEDAN, 4.13, 75},
        Electric_vehicle{2018, "GM", "Bolt", Body_style::HATCHBACK, 3.58, 60},
        Electric_vehicle{2018, "Nissan", "LEAF SL", Body_style::HATCHBACK, 3.88, 40},
    };
    std::vector<Gas_vehicle> ice = {
        Gas_vehicle{2017, "Toyota", "RAV4", Body_style::CROSSOVER, 26, 15.9},
        Gas_vehicle{2018, "Ford", "F-150", Body_style::TRUCK, 21, 36},
        Gas_vehicle{2018, "Nissan", "Rogue", Body_style::HATCHBACK, 29, 14.5},
        Gas_vehicle{2018, "Chrysler", "Pacifica", Body_style::MINIVAN, 22, 19},
    };

    for (auto ev : evs) {
        std::cout << ev.to_string() << " costs per 100 miles:" << std::endl;
        for (auto pkwh : cost_per_kwh) {
            std::cout << "    at $" << pkwh << " per kwh -> $" << pkwh * ev.kwh_consumed(100) << std::endl;
        }
    }

    for (auto car : ice) {
        std::cout << car.to_string() << " costs per 100 miles:" << std::endl;
        for (auto pgal : cost_per_gallon) {
            std::cout << "    at $" << pgal << " per gallon -> $" << pgal * car.gallons_consumed(100) << std::endl;
        }
    }

}
