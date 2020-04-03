#include<iostream>
#include<array>
using namespace std;
int main()
{
    // Creating First array using Array Container
    array <int, 5> a1 = {1, 2, 3, 4, 5};
    cout<<"Element at the 3rd index: "<<a1[3]<<endl;
    cout<<"Element at the 4th index: "<<a1.at(4)<<endl;
    cout<<"Front Element of the array: "<<a1.front()<<endl;
    cout<<"Back Element of the array: "<<a1.back()<<endl;
    cout<<"Size of the array: "<<a1.size()<<endl<<endl;

    array <int, 8> a2 = {1, 2, 3, 4, 5};
    cout<<"Back Element of the array (when number of elements are filled less than the required size): "<<a2.back()<<endl;

    array <int, 8> a3;
    a3.fill(5);
    // Printing all the elements stored in array
    for(int i = 0; i < 8; i++)
        cout<<a3[i];
    cout<<endl;

    // Swapping of the element of one array with another array
    array <int, 5> same_array1 = {1, 2, 3, 4, 5};
    array <int, 5> same_array2 = {6, 7, 8, 9, 10};

    cout<<"\nArray1 before Swap: \n";
    for (int i = 0; i < same_array1.size(); i++)
        cout<<same_array1[i]<<" ";
    cout<<endl;
    cout<<"\nArray2 before Swap: \n";
    for (int i = 0; i < same_array2.size(); i++)
        cout<<same_array2[i]<<" ";
    cout<<endl;

    // Performing Swapping between same_array1 and same_array2
    same_array1.swap(same_array2);

    cout<<endl;
    cout<<"\nArray1 after Swap: \n";
    for (int i = 0; i < same_array1.size(); i++)
        cout<<same_array1[i]<<" ";
    cout<<"\nArray2 after Swap: \n";
    for (int i = 0; i < same_array2.size(); i++)
        cout<<same_array2[i]<<" ";
    cout<<endl;
}
