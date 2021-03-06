#include "store.h"
#include <sstream>

Store::Store(std::string store_name) : _name{store_name} { }
std::string Store::name() {return _name;}
//Product
void Store::add_product(Product* product) {_products.push_back(product);}

int Store::number_of_products() {return _products.size();}

std::string Store::product_to_string(int product) {
    std::ostringstream oss;
    oss << _products[product];
    return oss.str();
}
//Cusotmer
void Store::add_customer(Customer* customer) {_customers.push_back(customer);}

int Store::number_of_customer() {return _customers.size();}

std::string Store::customer_to_string(int customer) {
    std::ostringstream oss;
    oss << _customers[customer];
    return oss.str();
}

std::string Store::help() {
    return R"(
<span font='18' weight='bold'>JAVA COFFEE AND DONUTS Copyright Bishesh Shrestha <sup><small>™</small></sup></span>
by Bishesh Shrestha

<span font='7'>Copyright 2018. </span>
This Program manages the coffee shop system of a store.

You may create a donut or a coffee.
And you can also add the customer. 
With thier phone number. 

)";
}
std::ostream& operator<<(std::ostream& ost, Store& store) {
    ost << "Store " << store._name << std::endl << std::endl;
    ost << "Products: " << std::endl;
    for (auto p : store._products) ost << "  " << p->to_string() << std::endl;
    return ost;
}

std::string Store::customer_menu() {
    std::ostringstream ost;
    for (auto c : _customers) ost << " " << c->to_string()<< std::endl;

    return ost.str();
}
