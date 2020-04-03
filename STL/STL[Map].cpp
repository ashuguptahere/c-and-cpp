#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int, string> customerNo;
    customerNo[100] = "John Doe";
    customerNo[105] = "Jane Doe";
    customerNo[123] = "John Jane";

    cout<<customerNo[100]<<endl;
    cout<<customerNo[101]<<endl; // nothing will print on the screen
    cout<<customerNo[105]<<endl;

    map <int, string> :: iterator p = customerNo.begin();
    while(p != customerNo.end())
    {
        cout<<p->first<<"->"<<p->second<<endl;
        p++;
    }

    map <int, string> c
    {
        {100, "John Doe"},
        {105, "Jane Doe"},
        {123, "John Jane"}
    };

    cout<<"\nPrinting element at 100 position: "<<customerNo.at(100)<<endl;
    cout<<"\nSize of the map is: "<<customerNo.size()<<endl;

    // To check if the map is empty:
    cout<<"\nIs empty (0 = No/1 = Yes): "<<customerNo.empty()<<endl;

    // To insert a pair in map:
    customerNo.insert(pair <int, string> (205, "Jane John"));

    p = customerNo.begin();
    while(p != customerNo.end())
    {
        cout<<p->first<<"->"<<p->second<<endl;
        p++;
    }

    // To clear the map:
    customerNo.clear();
    p = customerNo.begin();
    while(p != customerNo.end())
    {
        cout<<p->first<<"->"<<p->second<<endl;
        p++;
    }
}
