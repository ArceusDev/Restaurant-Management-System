#include "RestaurantManager.h"

void RestaurantManager::menue()
{

}

void RestaurantManager::addMenue(std::string name, double price)
{
	/*menue_item.setMenueName(name);
	menue_item.setPrice(price);
	listItem.push_back(menue_item);*/

	menue_item[count].setMenueName(name);
	menue_item[count].setPrice(price);
	listItem.push_back(menue_item[count]);
	++count;
}
