#include "store.h"
#include<iostream>
#include<vector>
Store::Store(std::string store_name){ 
_name = store_name;
}
std::string Store::name(){
return _name;
};   	
void Store::add_product(Product* product){
_products.push_back(product);
};
int Store::number_of_products(){
return _products.size();
};
/*std::string product_to_string(int products){

}
*/

