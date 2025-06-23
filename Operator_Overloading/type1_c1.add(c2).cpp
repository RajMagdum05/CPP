//operator overloading
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
		void display()
		{
			cout<<"c3: "<<real<<"+i"<<img<<endl;
		}
		Complex operator+(Complex c)
		{
			Complex temp;
			temp.real = real + c.real;
			temp.img = img + c.img;
			return temp;
		}
};
int main()
{
	int c1real, c2real, c1img, c2img;
	cout<<"Enter real no. for c1: ";
	cin>>c1real;
	
	cout<<"Enter img no. for c1: ";
	cin>>c1img;
	
	cout<<"Enter real no. for c2: ";
	cin>>c2real;
	
	cout<<"Enter img no. for c2: ";
	cin>>c2img;
	
	Complex c1(c1real, c1img);
	Complex c2(c2real, c2img);
	Complex c3;
	c3 = c1+c2;
    c3.display();
}
