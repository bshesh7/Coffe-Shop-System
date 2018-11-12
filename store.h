#pragma once
#include "product.h"
#include "customer.h"
#include <vector>

class Store {
  public:
    Store(std::string store_name);
    std::string name(); // Returns the store name

    void add_product(Product* product); // Add a new product to stock
    int number_of_products(); // # of products defined
    std::string product_to_string(int product); // string version of a product

	void add_customer(Customer* customer);
	int number_of_customer();
	std::string customer_to_string(int customer);
	std::string customer_menu();
	
	std::string help(); // add this to UML Diagram

    friend std::ostream& operator<<(std::ostream& ost, Store& store); 
    
  
private:
    std::string _name;
    std::vector<Product*> _products;
    std::vector<Customer*> _customers;
    
};
