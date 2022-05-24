#pragma once
#include <string>

class MenueItem
{
	std::string menue_name;
	double price;

public:

	MenueItem(): menue_name(""), price(0.0) {}
	~MenueItem() = default;
	//setters
	void setMenueName(std::string name);
	void setPrice(double num);
	//getters
	std::string getMenueName();
	double getPrice();
};

