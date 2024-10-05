Classes-and-objects
Aim:
To use and implement C++ classes and objects.

Software used:
Visual studio code.

Theory
Classes
Classes are the building blocks of object-oriented programming (OOP). A class is essentially a blueprint for creating objects. It encapsulates data and functions that operate on the data into a single unit.

Syntax
class MyClass {
public:
    int myNumber;
};
#include<iostream>
using namespace std;
class student               
{
    public:
    string name;
    int age;
    string branch;          
    float result;
    int year;
    int prn;
};
Objects
An object is an instance of a class. When you define a class, you create a blueprint for objects. Once the class is defined, you can create objects that follow the structure and behavior defined by the class.

Syntax
class MyClass {
public:
    int myNumber;
};

int main() {
    MyClass obj1;  // Create an object of MyClass
    obj1.myNumber = 10;
    obj1.displayNumber();  // Output: Number: 10
    return 0;
}
```cpp
#include<iostream>
using namespace std;
class student               
{
    public:
    string name;
    int age;
    string branch;          
    float result;
    int year;
    int prn;
};
int main()
{
    student s1,s2;

    cout<<"1st student: "<<endl;
    s1.name = "Soham";
    s1.age = 19;
    s1.branch = "ENTC";
    s1.prn = 065;
    s1.result = 7.8;
    s1.year = 2;
    cout<<s1.name<<endl<<s1.age<<endl<<s1.branch<<endl<<s1.prn<<endl<<s1.result<<endl<<s1.year<<endl;
}
Algorithms
Defining class and objects
Start

Class Definition:
Define a class named student with the following public data members:

string name: To store the student's name.
int age: To store the student's age.
string branch: To store the student's branch of study.
float result: To store the student's result.
int year: To store the student's current academic year.
int prn: To store the student's PRN (Personal Registration Number).
Main Function:
Declare two objects s1 and s2 of the class student.

Input and Output for First Student (s1):
Assign the following values to the object s1:

name = "Shravani"
age = 19
branch = "ENTC"
prn = 065
result = 7.8
year = 2
Display the values stored in s1:
Print the name, age, branch, prn, result, and year.
Input and Output for Second Student (s2):
Assign the following values to the object s2:

name = "Hussain"
age = 19
branch = "ENTC"
prn = 060
result = 8.83
year = 2
Display the values stored in s2:
Print the name, age, branch, prn, result, and year.
End

Defining Method in class
Start

Class Definition:

1.Define a class named student.
Inside the class, define a public method named myMethod():
This method outputs the message: "I am studying in 2nd year.".
Main Function:

2.Declare an object s1 of the class student.

3.Method Invocation:

Call the myMethod() function using the object s1.
Output:

The program prints the message "I am studying in 2nd year.".
End

About
No description, website, or topics provided.
Resources
 Readme
 Activity
Stars
 0 stars
Watchers
 1 watching
Forks
 0 forks
Report repository
Releases
No releases published
Packages
No packages published
Languages
C++
100.0%
Footer
# classes-and-objects
