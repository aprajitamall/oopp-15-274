
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

int main()
{
    return 0;
}
