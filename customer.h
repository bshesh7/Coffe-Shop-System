#pragma once
#include <string>
#include <ostream>
#include <istream>
#include <vector>

class Customer {
  public:
    Customer(std::string customer, std::string customer_phone);
    Customer();
    Customer(std::istream& ist);
    void save(std::ostream& ost);
    std::string to_string() const;
    std::vector<std::string> to_strings();
    friend std::ostream& operator<<(std::ostream& ost, const Customer& customer);
  private:
    std::string _customer;
    std::string _customer_phone;  
};

