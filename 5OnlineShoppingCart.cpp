#include <iostream>
using namespace std;
#include <vector>

class Item
{
public:
    string name;
    int price, quantity; // quantity the user wants to buy

    // constructor

    Item()
    {
        name = "";
        price = 0;
        quantity = 0;
    }

    Item(string n, int p, int q)
    {
        name = n;
        price = p;
        quantity = q;
    }

    int getPrice()
    {
        return price;
    }
    int getQuantity()
    {
        return quantity;
    }
};

class Cart
{
public:
    vector<Item> myBasket;

    void addItem(string name, int price, int quantity)
    {
        Item i(name, price, quantity);
        myBasket.push_back(i);
    }

    void totalPrice()
    {
        int totalPrice = 0;
        for (int i = 0; i < myBasket.size(); i++)
        {
            totalPrice = totalPrice + myBasket[i].getQuantity() * myBasket[i].getPrice();
        }
        cout << "the total price is :" << totalPrice << endl;
    }
};

int main()
{
    Cart c1;
    c1.addItem("jam", 100, 2);
    c1.addItem("fruit", 200, 1);
    c1.totalPrice();
}