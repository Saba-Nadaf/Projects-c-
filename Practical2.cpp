//Name:SAba Nadaf
//Rollno: 70
//Calculate Area & Volume of room using class & object program using cpp.
#include<iostream>
using namespace std;
class Room
{
	public:
		double leng,breadth,height;
		double area()
		{
			return leng*breadth;
		}
		double volume()
		{
			return leng*breadth*height;
		}
};
int main()
{
	Room rm;
	cout<<"Enter Length="<<endl;
	cin>>rm.leng;
	cout<<"Enter Breadth="<<endl;
	cin>>rm.breadth;
	cout<<"Enter Height="<<endl;
	cin>>rm.height;
	cout<<"Area of Room="<<rm.area()<<endl;
	cout<<"Volume of Room="<<rm.volume()<<endl;
	
	return 0;
}
