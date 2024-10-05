//Defining class and objects.
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
    s1.name = "Shravani";
    s1.age = 19;
    s1.branch = "ENTC";
    s1.prn = 056;
    s1.result = 7.8;
    s1.year = 2;
    cout<<s1.name<<endl<<s1.age<<endl<<s1.branch<<endl<<s1.prn<<endl<<s1.result<<endl<<s1.year<<endl;

    cout<<"2nd student: "<<endl;
    s2.age = 19;
    s2.name = "arya";
    s2.branch = "ENTC";
    s2.prn = 29;
    s2.result = 8.83;
    s2.year = 2;
    cout<<s2.name<<endl<<s2.age<<endl<<s2.branch<<endl<<s2.prn<<endl<<s2.result<<endl<<s2.year<<endl;

}

/*output
1st student:
Shravani
19
ENTC
46
7.8
2
2nd student:
arya
19
ENTC
29
8.83
2


