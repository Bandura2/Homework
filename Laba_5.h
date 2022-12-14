#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>

using namespace std;

class Sneaker
{
public:
    string brand;
    int size;
    string color;
    float price_on_hryvna;
    int quantity_in_stock;
    string material;
    int quantity_sales;

    Sneaker () {}

    ~Sneaker () {}
};

class SportShoesStore
{
public:
    SportShoesStore () {}

    void Sort_array(float arr[], int size)  /*Bubblesort*/
    {
        int i, j;
        for (i = 0; i <= size-1 ; i++) 
        {
            for (j = 0; j < size - i ; j++) 
            {
                if (arr[j + 1] > arr[j])
                    swap(arr[j + 1], arr[j]);
            }
        }
    }

    void Sort_array(int aray[], int size)   /*Bubblesort*/
    {
        int i, j;
        for (i = 0; i < size  ; i++)
        {
            for (j = 0; j < size ; j++)
            {
                if (aray[j] < aray[i])
                    swap(aray[j], aray[i ]);
            }
        }
    }
};

istream &operator>>(istream& is, Sneaker& object)
{
    cout << "Enter Brand: ";
    is >> object.brand;
    cout << "Enter size: ";
    is >> object.size;
    cout << "Enter color: ";
    is >> object.color;
    cout << "Enter price: ";
    is >> object.price_on_hryvna;
    cout << "Enter quantity in stock: ";
    is >> object.quantity_in_stock;
    cout << "Enter material: ";
    is >> object.material;
    cout << "Enter quantity salers: ";
    is >> object.quantity_sales;
    return is;
}
ostream &operator <<(ostream& os, const Sneaker& object)
{
    os <<"Brand: "<< object.brand << endl;
    os <<"Size: "<< object.size <<endl;
    os <<"Color: "<< object.color <<endl;
    os <<"Price: "<< object.price_on_hryvna <<endl;
    os <<"Quantity in stock: "<< object.quantity_in_stock <<endl;
    os <<"Material: "<< object.material <<endl;
    os <<"Quantity sales: "<< object.quantity_sales <<endl << endl;
    return os;
}

float Comparing(float array_prices[], vector<Sneaker> comparable_vector,int size)

    {
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
            {
                if(array_prices[i] == comparable_vector[j].price_on_hryvna)
                    cout << comparable_vector[j];

            }
        }
    }
int Comparing(int array_sales[], vector<Sneaker> comparable_vector,int size)
{
    for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
            {
                if(array_sales[i] == comparable_vector[j].quantity_sales)
                    cout << comparable_vector[j];

            }
        }
}