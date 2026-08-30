// #include<iostream>
// #include<string>
// using namespace std;
// class teacher{
//     private:
//     double salary;
//     // properties // attributes
//     public:
//     string name;
//     string dept;
//     string subject;

//     // methods  // member of function

//      // Setter method for salary
//     void setsalary(double sal) {
//         salary = sal;
//     }
//     // getter method for salary
//     double getsalary(){
//         return salary;
//     }

//     // methods  // member of function
//     void changedept(string newdept)
//     {
//         dept = newdept;
//     }
// };
// int main()
// {
//   teacher t1;
//   t1.name = "ravi sharma";
//   cout<<"enter the deptment -> ";
//   cin>>t1.dept;
//   t1.subject = "c++";
//   t1.setsalary(25000);
//   cout<<t1.name<<endl;
//   cout<<t1.dept<<endl;
//   cout<<t1.subject<<endl;
//   cout<<t1.getsalary()<<endl;

// }

//      FUNCTION

// #include<iostream>
// #include<string>
// using namespace std;
// class student{
//     public:
//     string name;
//     int age;
//     char section;
//     student(string name,int age ,char section)
//     {
//         this->name = name;
//         this->age = age;
//         this->section = section;
//     }
//     void print()
//     {
//         cout << name << endl;
//         cout << age << endl;
//         cout << section << endl;
//     }
// };
// int main()
// {
//  student s1("Ravi sharma",18,'A');
//  student s2("Rahul sharma",15,'B');
//  s1.print();
//  s2.print();

// }

// #include<iostream>
// #include<string>
// using namespace std;
// class student{
//     public:
//     string name;
//     int age;
//     char section;
//     student(string name,int age ,char section)
//     {
//         this->name = name;
//         this->age = age;
//         this->section = section;
//     }
//     void print(student s2)
//     {
//         cout << name << endl;
//         cout << age << endl;
//         cout << section << endl;
//     }
// };
// int main()
// {
//  student s1("Ravi sharma",18,'A');
//  student s2("Rahul sharma",15,'B');
//  s1.print(s1);
//  s2.print(s2);

// }

//         POINTER

// #include<iostream>
// #include<string>
// using namespace std;
// class student{
//     public:
//     string name;
//     int age;
//     char section;
//     student(string name,int age ,char section)
//     {
//         this->name = name;
//         this->age = age;
//         this->section = section;
//     }
//     void print()
//     {
//         cout << name << endl;
//         cout << age << endl;
//         cout << section << endl;
//     }
// };
// int main()
// {
//  student s1("Ravi sharma",18,'A');
//  student s2("Rahul sharma",15,'B');
//  student *ptr;
//  ptr = &s1;
//  ptr->age = 20;
//  ptr->print();    //  (*ptr).print();
//  s2.print();

// }

//  input

// #include <iostream>
// #include <string.h>
// using namespace std;
// class student
// {
// public:
//     char name[20];
//     int age;
//     char section;
//     void input()
//     {
//         char Name[20];
//         int age;
//         char section;
//         cout << "enter the name = ";
//         cin.get(Name, 20);
//         cout << "enter the age = ";
//         cin >> age;
//         cout << "enter the section = ";
//         cin >> section;
//         strcpy(this->name, name);
//         this->age = age;
//         this->section = section;
//         //  student(Name,age,section);
//     }
//     void print()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Section: " << section << endl;
//     }
// };
// int main()
// {
//     student s1, s2;
//     s1.input();
//     s1.print();
// }

// #include <iostream>
// #include <string.h>
// #include <vector>
// using namespace std;
// class student
// {
// public:
//     string name;
//     int age;
//     char section;
//     string mobile_num;  // long long int mobile_num;
//     void input()
//     {
//         cout << "Enter the name: ";
//         cin.ignore();       // To avoid issues with getline after previous inputs
//         getline(cin, name); // Read the full name as a string
//         cout << "Enter the age: ";
//         cin >> age;
//         cout << "Enter the section: ";
//         cin >> section;
//         cout << "Enter the mobile number: ";
//         cin >> mobile_num;
//     }
//     void print()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Section: " << section << endl;
//         cout << "phone number: " << mobile_num << endl;
//     }
// };
// int main()
// {
//     int num;
//     cout <<"enter the num = ";
//     cin >> num;
//     vector<student>s1(num);
//     for (int i = 0; i < s1.size(); i++)
//     {
//         s1[i].input();
//     }
//     cout << endl;
//     for (int i = 0; i < s1.size(); i++)
//     {
//         s1[i].print();
//     }
// }

//  PRIVATE

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// class student {
// private:
//     string fathername;

// public:
//     string name;
//     int age;
//     char section;
//     string mobile_num; // Using string for mobile number

//     // Method to input student data
//     void input() {
//         cout << "Enter the name: ";
//         cin.ignore();       // To avoid issues with getline after previous inputs
//         getline(cin, name); // Read the full name as a string

//         cout << "Enter the age: ";
//         cin >> age;

//         cout << "Enter the section: ";
//         cin >> section;

//         cout << "Enter the mobile number: ";
//         cin >> mobile_num;
//     }

//     // Method to set father's name
//     void setter() {
//         cout << "Enter the father's name: ";
//         cin.ignore();          // To avoid newline issues after previous inputs
//         getline(cin, fathername);
//     }

//     // Method to get father's name
//     string getterfath() {
//         return fathername;
//     }

//     // Method to print student data
//     void print() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Section: " << section << endl;
//         cout << "Phone number: " << mobile_num << endl;
//         cout << "Father's name: " << getterfath() << endl;
//     }
// };

// int main() {
//     int num;
//     cout << "Enter the number of students: ";
//     cin >> num;

//     vector<student> s1(num);  // Create a vector of students

//     // Input data for each student
//     for (int i = 0; i < s1.size(); i++) {
//         cout << "\nEntering details for student " << i + 1 << ":\n";
//         s1[i].input();
//         s1[i].setter();  // Set father's name
//     }

//     // Output data for each student
//     cout << "\nDisplaying student details:\n";
//     for (int i = 0; i < s1.size(); i++) {
//         cout << "\nDetails of student " << i + 1 << ":\n";
//         s1[i].print();  // Print student data along with father's name
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// class student
// {
// private:
//     string fathername;

// public:
//     string name;
//     int age;
//     char section;
//     string mobile_num; // Using string for mobile number
//     student(string n, int a, char section, string mob, string fath)
//     {
//         this->age = a;
//         this->name = n;
//         this->section = section;
//         this->mobile_num = mob;
//         this->fathername = fath;
//     }
//     void print()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Section: " << section << endl;
//         cout << "Phone number: " << mobile_num << endl;
//         cout << "Father's name: " << fathername << endl;
//     }
// };

// int main()
// {
//     student s1("ravi sharma", 14, 'A', "9958765822", "vinod sharma");
//     s1.print();

//     return 0;
// }

// #include <iostream>
// #include <string.h>
// using namespace std;
// class student
// {
// private:
//     char name[20];

// public:
//     void getter()
//     {
//         char name[20];
//         cout << "enter your name => ";
//         cin.ignore();
//         cin.get(name, 20);
//         strcpy(this->name, name);
//     }
//     void setter()
//     {
//         cout << "name => " << name << endl;
//     }
// };
// int main()
// {
//     int size;
//     cout << "enter the how many student name are filling size = ";
//     cin >> size;
//     student *st = new student[size];
//     for (int i = 0; i < size; i++)
//     {
//         st[i].getter();
//     }
//     for (int i = 0; i < size; i++)
//     {
//         st[i].setter();
//     }
//     delete[] st;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class student
// {
// public:
//     string name;
//     int age;
//     char section;
//     student(string name, int age, char section)
//     {
//         this->name = name;
//         this->age = age;
//         this->section = section;
//     }
// };
// void print(student &s)
// {
//     cout << s.name << endl;
//     cout << s.age << endl;
//     cout << s.section << endl;
// }
// int main()
// {
//     student s1("Ravi sharma", 18, 'A');
//     student s2("Rahul sharma", 15, 'B');
//     student *ptr;
//     ptr = &s1;
//     ptr->age = 20;
//     print(s1); //  (*ptr).print();
//     print(s2);
// }

// #include <iostream>
// using namespace std;
// class cricketer
// {
// public:
//     string name;
//     int runs;
//     cricketer() {}
//     cricketer(string a, int b)
//     {
//         name = a;
//         runs = b;
//     }
// };

// int main()
// {
//     cricketer c1("Rohit Sharma", 25000);
//     cricketer c2;
//     c2.name = "Rohit Sharma";
//     c2.runs = 20000;
//     cricketer c3;
//     c3.name = "Ravi Sharma";
//     c3.runs = 500;
//     cout << "" << c1.name << " " << c1.runs << endl;
//     cout << "" << c2.name << " " << c2.runs << endl;
//     cout << "" << c3.name << " " << c3.runs << endl;
// }
