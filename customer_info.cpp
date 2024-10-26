// customer_info.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "struct_info.h"
#include <string>
#include <vector>

    using namespace std;

    int main() {
        //vector to locate the struct
        vector<MyStruct> customer; 

        MyStruct customer_Info = {
             66,
            "Sandratana Andrianjohary",
            "andrianjoharys06@gmail.com",
            {"Luther King Jr way", "Berkeley", 10101}
        };

        customer.push_back(customer_Info); 

        for (auto& customers : customer) {
            displayCustomerInformation(customers);
        }

        return 0;
    }
