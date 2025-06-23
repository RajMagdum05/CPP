//Operator Overloading using friend function.
#include<iostream>
using namespace std;

class Complex
{
	private:
		int real;
		int img;
	public:
		Complex(int r=0, int i=0)
		{
			real = r;
			img = i;
		}
		friend Complex operator+(Complex c1, Complex c2);
		
		void display()
		{
			cout<<"c3: "<<real<<"+i"<<img<<endl;
		}
};

Complex operator+(Complex c1, Complex c2)
{
	Complex temp;
	temp.real = c1.real+c2.real;
	temp.img = c1.img+c2.img;
	return temp;
}
int main()
{
	int c1real, c1img, c2real, c2img;
	cout<<"Enter real no. of c1: ";
	cin>>c1real;
	
	cout<<"Enter img no. of c1: ";
	cin>>c1img;
	
	cout<<"Enter real no. of c2: ";
	cin>>c2real;
	
	cout<<"Enter img no. of c2: ";
	cin>>c2img;
	
	Complex c1(c1real, c1img);
	Complex c2(c2real, c2img);
	Complex c3;
	
	c3 = c1+c2;
	c3.display();
	
}
