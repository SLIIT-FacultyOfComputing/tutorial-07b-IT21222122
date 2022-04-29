#include "Item.h"
#include <iostream>
using namespace std;

// 4. Implement Default Constructor Implementation
Item::Item(){
    int item;
    float price;
    cout<<"Enter item code : ";
    cin>> item;
    cout<<"Enter price : ";
    cin>> price;
    cout<< endl; 
    itemCode = item;
    unitPrice = price;
}
// 5. Implement Overloaded Constructor Implementation
Item::Item(int code, float price){
  itemCode = code;
  unitPrice = price;
}
// 6. Implement Destructor (display "Destructor Called")
Item::~Item(){
  cout << "Destructor Called" << endl;
}

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price: " << discountedPrice() << endl;
}
