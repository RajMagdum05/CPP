#include <iostream>
using namespace std;

class Outer
{
    public:
      int a=10;
      static int b;
      void display()
      {
          coutt<<"i.show(): "<<i.show()<<endl;
          i.x = 20;
          cout<<"i.x: "<<i.x<<endl;
      }
      
      class Inner
      {
          public: 
            int x=20;
            void show()
            {
                cout<<"Show of Inner "<<b<<endl
            }
            Inner i;
      };
};
int Outer::b=20;

int main()
{
    Outer::Inner i1;
    
    
}
