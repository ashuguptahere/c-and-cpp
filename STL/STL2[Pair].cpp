#include<iostream>
//#include<pair>

using namespace std;

class student
{
private:
    string name;
    int age;
public:
    void setStudent(string s, int a)
    {
        name = s;
        age = a;
    }
    void showStudent()
    {
        cout<<" NAME: "<<name;
        cout<<", AGE: "<< age;
    }
};

int main()
{
    pair <string, int> p1;
    pair <string, string> p2;
    pair <string, float> p3;
    pair <string, student> p4;
    p1 = make_pair("John", 20);
    p2 = make_pair("India", "New Delhi");
    p3 = make_pair("John", 201.201f);
    student s1;
    s1.setStudent("Doe", 25);
    p4 = make_pair("John", s1);

    cout<<"\nPair 1: "<<p1.first<<", "<< p1.second;
    cout<<"\nPair 2: "<<p2.first<<", "<< p2.second;
    cout<<"\nPair 3: "<<p3.first<<", "<< p3.second;
    cout<<"\nPair 4: "<<p4.first<<", ";
    student s2 = p4.second;
    s2.showStudent();
    //cout<<"\n Pair 4: "<<p4.first<<", "<< s2.showStudent();
}
