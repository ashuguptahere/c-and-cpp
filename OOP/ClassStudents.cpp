#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
        int v1;
        string v2;
        string v3;
        int v4;
    public:
        void set_age(int age)
        {
            v1=age;
        }
        void set_first_name(string first_name)
        {
            v2=first_name;
        }
        void set_last_name(string last_name)
        {
            v3=last_name;
        }
        void set_standard(int standard)
        {
            v4=standard;
        }
        int get_age()
        {
            return v1;
        }
        string get_first_name()
        {
            return v2;
        }
        string get_last_name()
        {
            return v3;
        }
        int get_standard()
        {
            return v4;
        }
        string to_string()
        {
            stringstream ss;
            string out_string;
            ss<<v1<<','<<v2<<','<<v3<<','<<v4;
            out_string = ss.str();
            return (out_string);
        }
};

int main()
{
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}