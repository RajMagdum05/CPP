//Addition of 2 Rational objects

#include <iostream>
using namespace std;

class Rational
{
	private:
		int p;
		int q;
	public:
	    Rational(int p=0, int q=0)
	    {
	    	setP(p);
	    	setQ(q);
		}
		void setP(int p){this->p = p;}
		void setQ(int q){this->q = q;}
		Rational operator+ (Rational r)
		{
			Rational temp;
			temp.p = p * r.q + q * r.p;
			temp.q = q * r.q;
			return temp;
		}
		friend ostream & operator<<(ostream &out, Rational r);
};
ostream & operator<<(ostream &out, Rational r)
{
	out<<r.p<<"/"<<r.q;
	return out;
}
int main()
{
	int p1,q1,p2,q2;
	cout<<"Enter p1: ";
	cin>>p1; 
	
	cout<<"Enter q1: ";
	cin>>q1;
	
	cout<<"Enter p2: ";
	cin>>p2;
	
	cout<<"Enter q2: ";
	cin>>q2;
	
	Rational r1(p1,q1);
	Rational r2(p2,q2);
	Rational r3;
	r3=r1+r2;
	cout<<"Addition of "<<r1<<" and "<<r2<<" is "<<r3<<endl;
}
