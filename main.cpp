#include "Laba_5.h"

/** Created a Sneaker class, added a SportShoesStore class
 *  that contains an assortment of sneakers,
 *  methods for sorting shoes by price,
 *  and the ability to display the top most popular sneakers by number of sales */

int main()
{
    vector<Sneaker> sneakers;
    cout << "Enter number of objects: " << endl;
    int count_of_object;
    cin >> count_of_object;
    cout << "----------------------------------------------------------" << endl;

    for(int i = 0; i < count_of_object; i++)
    {
        sneakers.push_back(Sneaker());
    }

    for(int i = 0; i < count_of_object; i++)
    {
        cout << "\nSneaker "<< i + 1 <<" :"<<endl;
        cin >> sneakers[i];
    }
    cout << "----------------------------------------------------------" << endl;

    float *array_prices = new float[count_of_object];
    for(int i = 0; i < count_of_object; i++)
    {
        array_prices[i] = sneakers[i].price_on_hryvna;
    }

    SportShoesStore Object_for_sorting_array;

    Object_for_sorting_array.Sort_array(array_prices, count_of_object);

    cout<< "Catalog: " << endl;

    Comparing(array_prices, sneakers, count_of_object);

    cout << "The catalog has been sorted by price" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "If you want to see the top, enter 1, else program will be closed" << endl;
    int choice = 0;
    cin >> choice;

    if (choice == 1)
    {
        cout << "----------------------------------------------------------" << endl;
        cout << "Top sales : " << endl;

        int *array_sales = new int[count_of_object];

        for(int i = 0; i < count_of_object; i++)
        {
            array_sales[i] = sneakers[i].quantity_sales;
        }

        Object_for_sorting_array.Sort_array(array_sales,count_of_object);

        Comparing(array_sales, sneakers, count_of_object);

        delete[] array_sales;
    }else
    {
        cout << "----------End----------" << endl;
        return 0;
    }

    delete[] array_prices;
    system ("Pause");
}
