#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside Base Fun\n";
        }
        void gun()
        {
            cout<<"Inside Base Gun\n";
        }
        void sun()
        {
            cout<<"Inside Base Sun\n";
        }



};                    //8 bytes

class Derived:public Base    
{
    public:
        int x,y;

        void fun()                                   //Redefination
        {
            cout<<"Inside Derived Fun\n";
        }
        virtual void sun()                                    //Redefination
        {
            cout<<"Inside Derived Sun\n";
        }
        virtual void run()                                     //Defination
        {
            cout<<"Inside Derived Run\n";
        }



};                    //16 bytes

int main()
{
    Base*bp = new Derived(); //Upcasting

    bp->fun();    //base fun
    bp->gun();     //base gun
    bp->sun();     //derived sun
    // bp->run();     //Error

    return 0;
}