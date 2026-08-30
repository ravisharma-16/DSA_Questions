// #include <iostream>
// using namespace std;
// class circle
// {
// private:
//     float radius;

// public:
//     void areaof(float radi)
//     {
//         radius = radi;
//     }
//     float areaofcircle()
//     {
//         float pi = 3.14;
//         return pi * radius * radius;
//     }
//     float areaofcircumference()
//     {
//         float pi = 3.14;
//         return pi * radius * 2;
//     }
// };

// int main()
// {
//     circle s1;
//     float radius;
//     cout << "enter the radius = ";
//     cin >> radius;
//     s1.areaof(radius);
//     cout << "area of circle = " << s1.areaofcircle() << endl;
//     cout << "area of circumference = " << s1.areaofcircumference();
// }

// #include <iostream>
// using namespace std;
// class rectangle
// {
// private:
//     float lenght;
//     float breath;

// public:
//     void areaof(float len,float bre)
//     {
//         lenght = len;
//         breath = bre;
//     }
//     float areaofrectangle()
//     {
//         return  lenght * breath;
//     }
//     float areaofperimeter()
//     {
//         return 2 * (lenght + breath);
//     }
// };

// int main()
// {
//     rectangle s1;
//     float lenght,breath;
//     cout << "enter the lenght = ";
//     cin >> lenght;
//     cout << "enter the breath = ";
//     cin >> breath;
//     s1.areaof(lenght,breath);
//     cout << "area of rectangle = " << s1.areaofrectangle() << endl;
//     cout << "area of perimeter = " << s1.areaofperimeter();
// }

// #include <iostream>
// using namespace std;
// template <class T>
// T getmax(T a, T b)
// {
//     T result;
//     result = (a > b) ? a : b;
//     return result;
// }
// int main()
// {
//     int i = 5, j = 6, k;
//     long l = 10, m = 5, n;
//     k = getmax<int>(i, j);
//     n = getmax<long>(l, m);
//     cout << k << endl;
//     cout << n << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// class personal
// {
// private:
//     string name;
//     int age;
//     string country;

// public:
//     void setter(string name, int age, string country)
//     {
//         this->name = name;
//         this->age = age;
//         this->country = country;
//     }
//     void getter()
//     {
//         cout << "name of the person = " << name << endl;
//         cout << "age of the person = " << age << endl;
//         cout << "country of person = " << country << endl;
//     }
// };
// int main()
// {
//     int size, age;
//     string name, country;
//     cout << "enter the who many person detail are required = ";
//     cin >> size;
//     vector<personal> s1(size);
//     for (int i = 0; i < s1.size(); i++)
//     {
//         cout << "enter the name = ";
//         cin.ignore();
//         getline(cin, name);
//         cout << "enter the age = ";
//         cin >> age;
//         cout << "enter the country = ";
//         cin.ignore();
//         getline(cin, country);
//         s1[i].setter(name, age, country);
//     }
//     for (int i = 0; i < s1.size(); i++)
//     {
//         s1[i].getter();
//         cout << endl;
//     }
// }

 #include <iostream>
#include <string>
#include <vector>
using namespace std;
class personal
{
private:
    string name;
    int age;
    string country;

public:
    void setter(string name, int age, string country)
    {
        this->name = name;
        this->age = age;
        this->country = country;
    }
    void getter()
    {
        cout << "name of the person = " << name << endl;
        cout << "age of the person = " << age << endl;
        cout << "country of person = " << country << endl;
    }
};
int main()
{
    int size, age;
    string name, country;
    cout << "enter the who many person detail are required = ";
    cin >> size;
    vector<personal> s1(size);
    for (int i = 0; i < s1.size(); i++)
    {
        cout << "enter the name = ";
        cin.ignore();
        getline(cin, name);
        cout << "enter the age = ";
        cin >> age;
        cout << "enter the country = ";
        cin.ignore();
        getline(cin, country);
        s1[i].setter(name, age, country);
    }
    for (int i = 0; i < s1.size(); i++)
    {
        s1[i].getter();
        cout << endl;
    }
}

