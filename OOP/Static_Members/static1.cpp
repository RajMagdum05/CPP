// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Student
{
    public:
      string name;
      int rollNo;
      static int addNo;
      
      Student(string n)
      {
          addNo++;
          rollNo = addNo;
          name = n;
      }
      void display()
      {
          cout<<"Name: "<<name<<endl<<"Roll No.: "<<rollNo<<endl;
      }
};

int Student::addNo=0;

int main()
{
    Student s1("Raj");
    Student s2("Prasad");
    Student s3("Prasad");
    Student s4("Prasad");
    Student s5("Prasad");
    Student s6("Prasad");
    
    s1.display();
    s3.display();
    cout<<"No. of Addmissions: "<<Student::addNo<<endl;
    
}
