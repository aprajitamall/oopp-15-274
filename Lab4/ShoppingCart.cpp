
#include <bits/stdc++.h>
using namespace std;

class Item
{
public:
    string name;
    int quantity;
    double price;
};

void displayCart(const vector<Item>& cart)
{
    cout << "\nName\tQuantity\tPrice\n";

    for (auto item : cart)
        cout << item.name << "\t" << item.quantity
             << "\t\t" << item.price << endl;
}
double calculateTotal(const vector<Item>& cart)
{
    double total = 0;

    for (auto item : cart)
        total += item.quantity * item.price;

    return total;
}
Item findMostExpensiveItem(const vector<Item>& cart)
{
    auto expensive = cart[0];

    for (auto item : cart)
    {
        if (item.price > expensive.price)
            expensive = item;
    }

    return expensive;
}
void applyDiscount(vector<Item>& cart)
{
    for (auto &item : cart)
    {
        if (item.price > 1000)
            item.price = item.price * 0.90;
    }
}
void displayBill(const vector<Item>& cart)
{
    cout << "\n--- Final Bill ---\n";

    displayCart(cart);

    cout << fixed << setprecision(2);
    cout << "Updated Total: Rs. "
         << calculateTotal(cart) << endl;
}

int main()
{
    vector<Item> cart = {
        {"Laptop", 1, 50000},
        {"Mouse", 2, 500},
        {"Keyboard", 1, 1500},
        {"Bag", 1, 800}
    };

    cout << "--- Shopping Cart ---\n";
    displayCart(cart);

    cout << "\nTotal Amount: Rs. "
         << calculateTotal(cart) << endl;

    auto expensive = findMostExpensiveItem(cart);

    cout << "Most Expensive Item: "
         << expensive.name << endl;

    applyDiscount(cart);

    cout << "\nAfter Applying Discount:\n";
    displayBill(cart);

    return 0;
}
