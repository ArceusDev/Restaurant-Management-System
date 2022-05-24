#pragma once
#include <iostream>
#include <list>
#include <vector>
#include <iomanip>
#include <fstream>
#include "MenueItem.h"

class RestaurantManager
{
	std::list<MenueItem> listItem;
	std::list<MenueItem>::iterator it;
	MenueItem menue_item[10];
	int count;
	int product_id;	
	int customer_id;
	int managers_id;
	double product_price;
	std::string product_name;
	std::string customer_name;
	std::string managers_name;

public:

	RestaurantManager(){
		product_id =  customer_id = managers_id = count = 0;
		product_price = 0.0;
		product_name = customer_name = managers_name = "";
		it = listItem.begin();
	}

	~RestaurantManager() = default;

	void menue();
	void addMenue(std::string name, double price);



};

