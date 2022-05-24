#include "MenueItem.h"

void MenueItem::setMenueName(std::string name)
{
	menue_name = name;
}

void MenueItem::setPrice(double num)
{
	price = num;
}

std::string MenueItem::getMenueName()
{
	return menue_name;
}

double MenueItem::getPrice()
{
	return price;
}
