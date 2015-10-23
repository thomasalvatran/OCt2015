#ifndef MAIN_H
#define MAIN_H
#include <iostream>
using namespace std;

class InputNum;
class CelestialBody;

//class InputNum{
//    int num;
//public:
//    InputNum()
//    {
//        cout << "Enter number" << endl;
//        cin >> num;
//    }
//    int getValueNum() const { return num; }  //read-only access to InputNum class content
//    void addInput()
//    {
//        InputNum anum;
//        num = num + anum.getValueNum();
//    }
//};

class InputNum{
    int num;
public:
//    InputNum(char msg[])
//    InputNum(string msg)
    InputNum(char *msg)

    {
        cout << msg << endl;
        cin >> num;
    }
    int getValueNum() const { return num; }  //read-only access to InputNum class content
    void addInput(char *msg)
    {
        InputNum anum(msg);
        num = num + anum.getValueNum();
    }
};

class Hello {
//    string msg;  // for string msg3
//    char *msg; // for char *msg1 and char msg2[]
//    char msg[];
    char *msg; //for char msg[]; *msg == mgs[]
public:
//    Hello(string msg) : msg(msg){ cout << msg << endl; } // for string msg3 same without &
//    Hello(string &msg) : msg(msg){ cout << msg << endl; }  //for string msg3 same with &
//    Hello(char *msg) : msg(msg){ cout << msg << endl; } // for char *msg1 and char msg2[]
    Hello(char msg[]) : msg(msg) { cout << msg << endl; } //??? for char msg[] need:
    //need dtor here???                                   // char *msg not char msg[]
};

const char sumString[] = "The sume is ";

class CelestialBody{
    const double mass;

public:
    CelestialBody (double mass) : mass(mass)
    {
        cout << "Creating celestial body of mass " << mass << "\n";
    }
    ~CelestialBody()
    {
        cout << "Destroying celestiabl body of mass "<< mass << "\n";
    }
};

class Star : public CelestialBody{  //star derived from CelestialBody
                                    //star is a CelestialBody
    const double brightness;
public:
    Star(double mass, double brightness) : CelestialBody(mass), brightness(brightness)
    {                                      //^^^^^^^^^^
        cout << "Creating a star of brightness " << brightness << endl;
    }
    ~Star()
    {
        cout << "Destroying a star of brightness " << brightness << "\n";
    }
};


#endif // MAIN_H

