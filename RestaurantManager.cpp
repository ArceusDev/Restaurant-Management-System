#include "RestaurantManager.h"

void RestaurantManager::menue()
{
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << std::setw(3) << std::setfill('.') << std::left << i + 1 << " || "
			<< std::setw(40) << menue_item[i].getMenueName()
			<< std::showpoint << std::setprecision(2) << std::fixed << menue_item[i].getPrice() << std::endl ;
	}
	
}

void RestaurantManager::addMenue(std::string name, double price)
{
	/*menue_item.setMenueName(name);
	menue_item.setPrice(price);
	listItem.push_back(menue_item);*/
	if (count < 10)
	{
		menue_item[count].setMenueName(name);
		menue_item[count].setPrice(price);
		listItem.push_back(menue_item[count]);
		++count;
	}
	else
	{
		std::cout << "Can't add more items in the menue\n";
	}
	
}
