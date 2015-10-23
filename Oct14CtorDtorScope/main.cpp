#include "main.h"

//Syntax (from cprogramming function pointer
//Declaring
//Initialize
//Invoking
//Benefit

//class CelestialBody; //class declaration

class Matter
{
    const int id;
public:
    Matter(int i) : id(i)
    {
        cout << "Matter for " << id << " created" << endl;
    }
    ~Matter()
    {
        cout << "Matter in " << id << " destroyed"<< endl;
    }
    int getid() const { return id; } //method does not change the state of object
};             //^^^

class World
{
    const int id;
    const Matter matter; //embedded object of type Matter
   //^^^
   //const matter is const therefor in class Matter int getid() const { return id; }
public:
    World( int i) : id(i), matter(i + 2) { cout << "Hello " << id << endl; }
    ~World() { cout << "Goodbye " << id << endl; }
    int getid() { return id; }
    int getMatter() { return matter.getid(); } //matter const called getid has to const too.
};

World theworld1(1); //global

char *msg1 = "test1 test1 test1";
char msg2[] = "test2 test2 test2";
string msg3 = "test3 test3 test3";

int main() {
    World theworld2(2);
//    cout << theworld2.getid() << "----" << theworld2.matter.getid() << endl;
     cout << theworld2.getid() << "----" << theworld2.getMatter() << endl;

    for(int i = 3; i < 6; i++)
        World theworld3(i);
    { // begin scope ctor is called
    Star aStar(1234.5, 0.1);
    } //end scope destructor is called
//    InputNum num;
//    cout << "The value is " << num.getValueNum() << endl;
//    num.addInput();
//    cout << "Now the value is " << num.getValueNum() << endl;
    InputNum num("Enter number ");
    num.addInput("Another one ");
    num.addInput("One more ");
    cout << sumString << num.getValueNum() << endl;
    [] {
    std::cout << "hello lambda" << std::endl;
    } (); // prints ‘‘hello lambda’’      //l()
    cout << msg1 << " - " << msg2 << " " << msg3 << endl;
    cout << *msg1 << endl;
    cout << msg2 << endl;
    cout << msg3 << endl;
}
//[](int &x){ cout << x << " ";}); //lambda
//([]()
//{
//char msg[] = "Hello world------------------\n";
//cout << msg;
//});
//inline void hello() { cout << "test" << endl; }
//char msg[] = "Hello World";
//hello();
//char *msg = "Hello World char mgs[]";
Hello world(msg2);

World theworld4(6);  //global
//CelestialBody celes(1234.5);

