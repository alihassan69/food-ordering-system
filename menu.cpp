#include "menu.h"
void menu::displayMenu()
{

    cout << "enter ur name :";
    cin.getline(n, 20);
    cout << "enter ur ID :";
    cin >> a;
    customer::setID(a);
    customer::setName(n);
    cout << "Hello " << customer::getName() << "\n\nWhat would you like to order?\n\n";

start:

    cout << "\t\t\t-------------------------------------------------------\n";
    cout << "\t\t\t|                      Fast Food Menu                   |\n";
    cout << "\t\t\t-------------------------------------------------------\n\n";
    cout << "[1] Pizzas\n";
    cout << "[2] Burgers\n";
    cout << "[3] Sandwich\n";
    cout << "[4] Drinks\n";
    cout << "[5] Fries\n";
    cout << "Please Enter your Choice: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "[1] " << piz1 << endl;
        cout << "[2] " << piz2 << endl;
        cout << "[3] " << piz3 << endl;
        cout << "[4] " << piz4 << endl;
        cout << "Which flavour would you like to have? ";
        cin >> pizzaoption;
        if (pizzaoption >= 1 && pizzaoption <= 5)
        {
            cout << "[1] " << pizSmall << endl;
            cout << "[2] " << pizMedium << endl;
            cout << "[3] " << pizLarge << endl;
            cout << "Select pizza size ";
            cin >> pizzaoption1;
            if (pizzaoption1 >= 1 && pizzaoption1 <= 3)
                cout << "Enter quantity" << endl;
            cin >> qty;
            switch (pizzaoption1)
            {
            case 1:
                pr = 250.00 * qty;
                break;

            case 2:
                pr = 500.00 * qty;
                break;

            case 3:
                pr = 900.00 * qty;
                break;
            }

            switch (pizzaoption1)
            {
            case 1:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << piz1;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << piz2;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << piz3;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            case 4:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << piz4;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            default:
                cout << "\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! " << endl;
                goto start;
                break;
            }
            cout << "Would you like to order anything else? Y / N:";
            cin >> gotobeginning;
            if (gotobeginning == 'Y' || gotobeginning == 'y')
            {
                goto start;
                // return 0;
            }
        }
    }
    else if (choice == 2)
    {
        cout << "[1]" << burger_1 << " P300.0" << endl;
        cout << "[2]" << burger_2 << " P400.0" << endl;
        cout << "[2]" << burger_3 << "P500.0" << endl;
        cout << "which burger you want to order? ";
        cin >> pizzaoption1;
        if (pizzaoption1 >= 1 && pizzaoption1 <= 3)
        {
            cout << "\nPlease Enter Quantity: ";
            cin >> qty;
            switch (pizzaoption1)
            {
            case 1:
                pr = 300.00 * qty;
                break;

            case 2:
                pr = 400.00 * qty;
                break;

            case 3:
                pr = 500.00 * qty;
                break;
            }
            switch (pizzaoption1)
            {
            case 1:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << burger_1;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << burger_2;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << burger_3;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            default:
                cout << "\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! " << endl;
                goto start;
                break;
            }
            cout << "\nWould you like to order anything else? Y / N:";
            cin >> gotobeginning;
            if (gotobeginning == 'Y' || gotobeginning == 'y')
            {
                goto start;
                // return 0;
            }
        }
    }
    else if (choice == 3)
    {
        cout << "[1]" << sandwich_1 << "P240.0" << endl;
        cout << "[2]" << sandwich_2 << "P160.0" << endl;
        cout << "[3]" << sandwich_3 << "P100.0" << endl;
        cout << "Please Enter which Sandwich you would like to have? ";
        cin >> pizzaoption1;
        if (pizzaoption1 >= 1 && pizzaoption1 <= 3)
        {
            cout << "\nPlease Enter Quantity: ";
            cin >> qty;
            switch (pizzaoption1)
            {
            case 1:
                pr = 240.00 * qty;
                break;

            case 2:
                pr = 160.00 * qty;
                break;

            case 3:
                pr = 100.00 * qty;
                break;
            }
            switch (pizzaoption1)
            {
            case 1:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << sandwich_1;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << sandwich_2;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << sandwich_3;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            default:
                cout << "\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! " << endl;
                goto start;
                break;
            }
            cout << "Would you like to order anything else? Y / N:";
            cin >> gotobeginning;
            if (gotobeginning == 'Y' || gotobeginning == 'y')
            {
                goto start;
                // return 0;
            }
        }
    }
    else if (choice == 4)
    {
        cout << "[1] " << drinks1 << "P120.0" << endl;
        cout << "[1] " << drinks2 << "P140.0" << endl;
        cout << "[1] " << drinks3 << "P180.0" << endl;
        cout << "Which drink you would like to have?";
        cin >> pizzaoption1;
        if (pizzaoption1 >= 1 && pizzaoption1 <= 3)
        {
            cout << "\nEnter quantity you want: ";
            cin >> qty;
            switch (pizzaoption1)
            {
            case 1:
                pr = 120.00 * qty;
                break;

            case 2:
                pr = 140.00 * qty;
                break;

            case 3:
                pr = 180.00 * qty;
                break;
            }

            switch (pizzaoption1)
            {
            case 1:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << drinks1;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << drinks2;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << drinks3;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            default:
                cout << "\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! " << endl;
                goto start;
                break;
            }
        }
    }
    else if (choice == 5)
    {
        cout << "[1] " << fries1 << "P200.0" << endl;
        cout << "[2] " << fries1 << "P300.0" << endl;
        cout << "[3] " << fries1 << "P400.0" << endl;

        cout << "Enter which Fries you would like to have? ";
        cin >> pizzaoption1;
        if (pizzaoption1 >= 1 && pizzaoption1 <= 3)
        {
            cout << "\nPlease Enter Quantity: ";
            cin >> qty;
            switch (pizzaoption1)
            {
            case 1:
                pr = 200.00 * qty;
                break;

            case 2:
                pr = 300.00 * qty;
                break;

            case 3:
                pr = 400.00 * qty;
                break;
            }
            switch (pizzaoption1)
            {
            case 1:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << fries1;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            case 2:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << fries2;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;
            case 3:
                cout << "\t\t--------Your Order---------\n";
                cout << "" << qty << "  " << fries3;
                cout << "\nYour Total Bill= " << pr << "\nYour Order Will be delivered in 40 Minutes" << endl;
                cout << "Thank you For Ordering" << endl;
                break;

            default:
                cout << "\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! " << endl;
                goto start;
                break;
            }
            cout << "Would you like to order anything else? Y / N:";
            cin >> gotobeginning;
            if (gotobeginning == 'Y' || gotobeginning == 'y')
            {
                goto start;
                // return 0;
            }
        }
    }
    else
    {
        cout << "Invalid Choice: \n";
        cout << "Would You like to Start the program again? Y / N: ";
        cin >> gotobeginning;

        if (gotobeginning == 'Y' || gotobeginning == 'y')
        {
            goto start;
            // it will return 0;
        }
    }
}