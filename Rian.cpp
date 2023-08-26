#include<iostream>
using namespace std;
class Time {
	int hour;
	int mintue;
	int second;
public:
	Time(){};
	void sethour(int a)
	{
		hour = a;
	}
	void setmintue(int b)
	{
		mintue = b;
	}
	void setsecond(int c)
	{
		second = c;
	}
	void display()
	{
		int m, h;
		if (second >= 60)
		{
			second = second % 60;

			m = second / 60;
			mintue += m;
		}
		if (mintue > 60)
		{
			mintue = mintue % 60;
			h = mintue / 60;
			hour += h;
		}


		if (hour > 23)
		{
			
			int days = 0;
			days = hour / 24;
			cout << "Here hours are converted into days so we can say :" << days<<" days"<<endl;
			hour = hour % 24;
		}
		if (hour > 12)
		{
			hour = hour % 12;
			cout << "The time will be =" << hour << ":" << mintue << ":" << second << " PM" << endl;

		}
		else
		{

			cout << "The time will be =" << hour << ":"<< mintue << ":"<< second << " AM" << endl;
		}
		
	}
	Time add_object(Time a, Time b)
	{
		Time t;
		t.hour = a.hour + b.hour;
		t.mintue = a.mintue + b.mintue;
		t.second = a.second + b.second;
		return t;
	}
	void correcter()
	{
		int m,h;
		
		if (second >= 60)
		{
			m = second / 60;
			mintue += m;
		second = second % 60;
		
			
		}
		
		if (mintue > 60)
		{
			h = mintue / 60;
			hour += h;
			mintue = mintue % 60;
			
		}

	}


};

int main()
{
	int a, b, c;
	cout << "Enter the first object time =";
	cin >> a >> b >> c;
	Time obj,obj2,obj3;
	obj.sethour(a);
	obj.setmintue(b);
	obj.setsecond(c);

	int x, y, z;
	cout << "Enter the first object time =";
	cin >> x >> y >> z;
	obj2.sethour(x);
	obj2.setmintue(y);
	obj2.setsecond(z);

	obj3=obj3.add_object(obj, obj2);
	obj3.correcter();
	obj3.display();



	return 0;
}