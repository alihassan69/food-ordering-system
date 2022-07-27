
#include "customer.h"
class menu : public customer
{
  int a;
  char n[30];
  // pizza option
  char piz1[20] = "Chicken Fazita", piz2[20] = "Chicken Bar BQ", piz3[20] = "Peri Peri", piz4[20] = "Creamy Max";
  // pizza size
  char pizSmall[30] = "Small P200.0", pizMedium[30] = "Medium P500.0", pizLarge[30] = "Large P900.0";
  // drinks option
  char drinks1[20] = "Mountain Dew", drinks2[20] = "Coca Cola", drinks3[20] = "Royal";
  // burger option
  char burger_1[30] = "Zinger Burger ", burger_2[30] = "Chicken Burger ", burger_3[20] = "Beef Burger ";
  // sandwich option
  char sandwich_1[20] = "Club Sandwich", sandwich_2[30] = "Chicken Crispy Sandwich", sandwich_3[30] = "Extream Veg Sandwich";
  // fries option
  char fries1[20] = "Masala Fries", fries2[20] = "Loaded Fries", fries3[20] = "Cheese Fries", gotobeginning;

  int choice, pizzaoption, pizzaoption1, qty, pr; // time=40;
public:
  void displayMenu();
};