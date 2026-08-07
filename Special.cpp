#include<iostream>
using namespace std;

class Demo{
    public:
        int i;         //characteristics
        float f;       //characteristics

        Demo()         //Constructor
        {
            cout<<"Inside Constructor\n";
            i=0;
            f=0.0f;
        }

        ~Demo()        //Destructor
        {
            cout<<"Inside Destructor\n";
        }

        void fun(){    //Behaviour
            cout<<"Inside Fun\n";
        }
};

int main(){

    cout<<"Inside Main\n";

    Demo dobj;         //object creation
    

    cout<<dobj.i<<"\n";

    dobj.fun();

    cout<<"End of Main\n";
    return 0;
}
