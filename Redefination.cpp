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
        void sun()                                    //Redefination
        {
            cout<<"Inside Derived Sun\n";
        }
        void run()                                     //Defination
        {
            cout<<"Inside Derived Run\n";
        }



};                    //16 bytes

int main()
{
    Base*bp=NULL;
    Derived dobj;

    bp=new Derived();        //upcasting

    bp->fun();       //Base fun will be called
    bp->gun();       //Base gun
    bp->sun();       //Base sun
    // bp->run();       //Error

    return 0;
}