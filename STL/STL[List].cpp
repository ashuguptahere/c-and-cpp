#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l0; // Creating an empty list:
    list <int> l1 {5, 2, 3, 1, 4};
    list <string> l2 {"Delhi", "Punjab", "Kolkata"};

    list <int> :: iterator it = l1.begin();
    while(it != l1.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<"\nTotal size of the list is: "<<l1.size()<<endl;

    // Pushing value in front and back:
    l1.push_front(0);
    l1.push_back(6);
    it = l1.begin();
    cout<<"\nAfter Pushing elements onto the list: "<<endl;
    while(it != l1.end())

    {
        cout<<*it<<" ";
        it++;
    }
    cout<<"\nTotal size of the list is: "<<l1.size()<<endl;

    // Popping values in front and back:
    l1.pop_front();
    l1.pop_back();
    cout<<"\nAfter Popping elements from the list: "<<endl;
    it = l1.begin();
    while(it != l1.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<"\nTotal size of the list is: "<<l1.size()<<endl;

    // Sorting
    l1.sort();
    it = l1.begin();
    cout<<"\nSorting List1 in Ascending order..."<<endl;
    while(it != l1.end())
    {
        cout<<*it<<" ";
        it++;
    }

    // Sorting the list in reverse/descending order:
    l1.reverse();
    it = l1.begin();
    cout<<"\n\nSorting List1 in Reverse/Descending order..."<<endl;
    while(it != l1.end())
    {
        cout<<*it<<" ";
        it++;
    }

    // To remove a particular element from a list:
    l1.remove(3); // pass the element which you want to delete
    it = l1.begin();
    cout<<"\n\nAfter removing the 3 from the list..."<<endl;
    while(it != l1.end())
    {
        cout<<*it<<" ";
        it++;
    }

    // To clear all the elements of a list
    l1.clear();
    it = l1.begin();
    cout<<"\n\nAfter using clear() function..."<<endl;
    while(it != l1.end())
    {
        cout<<*it<<" ";
        it++;
    }
}
