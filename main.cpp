/*
Static data members are class members that are declared using static keywords. A static member has certain special characteristics which are as follows:

    Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.

    It is initialized before any object of this class is created, even before the main starts outside the class itself.

    It is visible can be controlled with the class access specifiers.

    Its lifetime is the entire program.
*/


#include <iostream>
using namespace std;


class StaticLearning {
public:

    static int staticNum;
    StaticLearning() { cout << "StaticLearning's Constructor Called " << endl; }
};

int StaticLearning::staticNum = 82;

int main()
{

    // Statement 1: accessing static member without creating
    // the object
    cout << "Accessing static member without creating the "
            "object: ";

    cout << StaticLearning::staticNum << endl;

    // Statement 2: Creating a single object to verify if
    // the seperate instance will be created for each object
    cout << "Creating object1 now: ";
    StaticLearning obj1;

    // Statement 3: Creating multiple objects to verify that
    // each object will refer the same static member
    cout << "Creating object2 now: ";
    StaticLearning obj2;
    cout << "Printing values from each object and classname"
         << endl;

    cout << "obj1.staticNum: " << obj1.staticNum << endl;
    cout << "obj2.staticNum: " << obj2.staticNum << endl;
    cout << "StaticLearning::staticNum: " << StaticLearning::staticNum << endl;

    StaticLearning::staticNum = 53;
    cout << "obj1.staticNum: " << obj1.staticNum << endl;
    cout << "obj2.staticNum: " << obj2.staticNum << endl;
    cout << "StaticLearning::staticNum: " << StaticLearning::staticNum << endl;

    obj1.staticNum = 61;
    cout << "obj1.staticNum: " << obj1.staticNum << endl;
    cout << "obj2.staticNum: " << obj2.staticNum << endl;
    cout << "StaticLearning::staticNum: " << StaticLearning::staticNum << endl;

    return 0;
}
