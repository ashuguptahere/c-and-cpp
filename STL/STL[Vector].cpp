#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v1 {10, 20, 30, 40, 50};
    vector <char> v2 (4);
    vector <int> v3 (5, 10); //10 is filled in every index
    vector <string> v4 (3, "Hello");
    cout<<v4[0]<<endl;
    cout<<v4[1]<<endl;
    cout<<v4[2]<<endl;
    for(int i = 0; i < 5; i++)
        cout<<v1[i]<<endl;

    // Adding and Checking capacity of the vector:
    vector <int> v5;
    for(int i = 0; i < 10; i++)
    {
        cout<<"Current capacity is: "<<v5.capacity()<<endl;
        v5.push_back(10 * (i+1));
    }

    // Printing the value at a particular index:
    cout<<"\nValue at the 3rd index: "<<v5.at(3);

    // Printing first value of the Vector:
    cout<<"\nFront Value is: "<<v5.front();

    // Printing last/back value of the Vector:
    cout<<"\nLast Value is: "<<v5.back();

    // Inserting the element at the given position:
    vector <int> :: iterator it = v5.begin(); // Pointing at the beginning of the vector
    v5.insert(it + 3, 35); // '0' means insertion at beginning
    cout<<"\n\nAfter Insertion at a particular position the vector is now: \n";
    for(int i = 0; i < v5.size(); i++)
        cout<<"Element "<<i + 1<<" is: "<<v5[i]<<endl;  

    cout<<"\n\nAfter Popping elements from the vector: \n";
    for(int i = 0; i < 5; i++)
    {
        cout<<"Popping element "<<v5.size()<<"...\n";
        v5.pop_back();
        cout<<"Current capacity is: "<<v5.capacity()<<" and total size of vector is now: "<<v5.size()<<endl;
    }
    // After popping the capacity of the Vector does not decrease...

    // Printing all the elements of Vector:
    cout<<endl;
    for(int i = 0; i < v5.size(); i++)
        cout<<"Element "<<i + 1<<" is: "<<v5[i]<<endl;

    // To clear all the elements of the Vector:
    v5.clear();
    cout<<"\nAfter Clearing the Vector..."<<endl;
    cout<<"Current capacity is: "<<v5.capacity()<<" and total size of vector is now: "<<v5.size()<<endl;
}
