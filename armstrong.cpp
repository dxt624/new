#include<iostream>
using namespace std;
class name
{

    int a;
    int b;
    void read();
public:
    void display()
    {
        read();
        cout <<a<<endl<<b;
    }

};
void name::read()
  {

      int a=10;
      int b=20;
  }
//this code is being edited by abhishek at 12pm


int main()
{

    name n;
    n.display();
}
