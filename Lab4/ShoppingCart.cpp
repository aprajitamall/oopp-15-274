
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

int main()
{
    return 0;
}
