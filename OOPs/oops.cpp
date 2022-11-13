#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    void setName(string s)
    {
        name = s;
    }
    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
    student(string s, int a, int g){
        name = s;
        age = a;
        gender = g;
    }
};
int main()
{
    // student a;
    // a.name = "ajay";
    // a.age = 20;
    // a.gender = 1;

    string s;
    cin >> s;

    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].setName(s);
    //     cin >> arr[i].age;
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }
    //constructor
    student a("ajay ",20,1);
    a.printInfo();

    return 0;
}