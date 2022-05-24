// Restaurant-Management-System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "RestaurantManager.h"

void Menue();


int main()
{
    Menue();
    
    


    return 0;
}



void Menue() {
    RestaurantManager item1;
    item1.addMenue("Wehshi cheese paratha", 200);
    item1.addMenue("Tandoori Chicken", 800);
    item1.addMenue("Beef Karahi", 1800);
    item1.addMenue("Some Dish", 200);
    item1.addMenue("Some Dish", 200);
    item1.addMenue("Some Dish", 200);
    item1.addMenue("Some Dish", 200);
    item1.addMenue("Some Dish", 200);
    item1.addMenue("Some Dish", 200);
    item1.addMenue("Some Dish", 200);
    item1.menue();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
