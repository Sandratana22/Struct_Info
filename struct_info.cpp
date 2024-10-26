
#include <iostream>
#include "struct_info.h"

using namespace std;

// Function to display customer details
void displayCustomerInformation(const MyStruct& customers) {

        cout << "ID: " << customers.id << endl;
        cout << "Name: " << customers.name << endl;
        cout << "Email: " << customers.email << endl; 
        cout << "Address: " << customers.address.street << ", " << customers.address.city << ", " << customers.address.zipCode << endl;
}