#include <iostream>
using namespace std;

void customerInterface()
{
    cout << "Hello, how can I assist you today?" << endl;
    cout << "1. Browse products" << endl;
    cout << "2. Find product information" << endl;
    cout << "3. Purchase a product" << endl;
    cout << "4. Get technical support" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    
    int choice;
    cin >> choice;
    
    switch (choice)
    {
        case 1:
            cout << "You can browse our products on our website or visit our store." << endl;
            break;
        case 2:
            cout << "Please provide the name or model number of the product you need information about." << endl;
            // Code to fetch and display product information
            break;
        case 3:
            cout << "To purchase a product, you can visit our store or make a purchase on our website." << endl;
            break;
        case 4:
            cout << "For technical support, please visit our store or contact our customer support at 123-456-7890." << endl;
            break;
        case 5:
            cout << "Thank you for visiting. Have a great day!" << endl;
            return;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
    
    cout << endl;
    customerInterface(); // Recursive call to continue interaction with the customer
}

int main()
{
    customerInterface();
    return 0;
}
