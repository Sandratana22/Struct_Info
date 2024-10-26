
#ifndef STRUCT_INFO_h
#define STRUCT_INFO_h

struct Address {
	std::string street; 
	std::string city; 
	short zipCode; 
};

struct MyStruct {
	short id;
	std::string name;
	std::string email;
	Address address;  //nested structure
};

void displayCustomerInformation(const MyStruct& customers);

#endif 
