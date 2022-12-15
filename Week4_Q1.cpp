#include<iostream>
using namespace std;
inline float triangle(float b, float h)
{
	float area=0.0;
	area=0.5*b*h;
	return area;
}
inline float area_circle(float r)
{
	float area_circle =0.0;
	area_circle=3.14*r*r;
	return area_circle;
}
int main()
{
	float b,h,r,x,y;
	cout<<"Enter the base of tirangle="<<endl;
	cin>>b;
	cout<<"Enter the height of triangle="<<endl;
	cin>>h;
	x=triangle(b,h);
	cout<<"Area of triangle="<<x<<endl;
	cout<<"Enter the radius of circle="<<endl;
	cin>>r;
	y=area_circle(r);
	cout<<"Area of circle="<<y<<endl;
	return 0;
}
