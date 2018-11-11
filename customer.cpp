
#include "customer.h"
Customer::Customer(std::string customer,std::string customer_phone)
    : _customer{customer},  _customer_phone{customer_phone} { }
Customer::Customer() : Customer("",  "") { }

Customer::Customer(std::istream& ist) {
    std::getline(ist, _customer);
    
    std::getline(ist, _customer_phone);
}
void Customer::save(std::ostream& ost) {
    ost << _customer << std::endl;
    //ost << _customer_dl << std::endl;
    ost << _customer_phone << std::endl;
}

std::vector<std::string> Customer::to_strings() {
    std::vector<std::string> result;
    result.push_back(_customer);
    //result.push_back(_customer_dl);
    result.push_back(_customer_phone);
    return result;
}

std::string Customer::to_string() const {
    return _customer + ", "  + _customer_phone;
}

std::ostream& operator<<(std::ostream& ost, const Customer& customer) {
    ost << customer.to_string();
    return ost;
}

 
