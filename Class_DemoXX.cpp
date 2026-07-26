#include<iostream>
using namespace std;

class Demo{
    public:
        int i;         //characteristics
        float f;       //characteristics

        void fun(){    //Behaviour
            cout<<"Inside Fun\n";
        }
};

int main(){

    Demo dobj;

    cout<<dobj.i<<"\n";

    dobj.fun();
    return 0;
}