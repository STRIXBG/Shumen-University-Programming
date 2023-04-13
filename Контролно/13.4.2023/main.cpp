/* Задача 19 */
#include <iostream>

using namespace std;

int idx = 0;
class Point 
{
	private:
		double x, y, z;
		void setX(double x);
		void setY(double y);
		void setZ(double z);
		
	public:
		Point();
		~Point();
		Point multiplication(const Point& first, const Point& other)
		{
			double newX = first.x * other.x;
			double newY = first.y * other.y;
			double newZ = first.z * other.z;
			Point resultPoint;
			resultPoint.setX(newX);
			resultPoint.setY(newY);
			resultPoint.setZ(newZ);
        	return resultPoint;
		}
};

void Point :: setX(double x)
{
	this->x = x;
}

void Point :: setY(double y)
{
	this->y = y;
}

void Point :: setZ(double z)
{
	this->z = z;
}

Point :: Point() 
{
	if(idx != 9)
	{
		double x, y, z;
		cout << "Â ìîìåíòà âúâåæäàòå äàííè çà point idx: " << idx << endl;
		cout << "Äîáàâåòå êîîðäèíàòèòå x, y, z. Ðàçäåëåòå ãè ñ èíòåðâàë\n";
		cin >> x >> y >> z;
		setX(x);
		setY(y);
		setZ(z);
		cout << "Äàííèòå áÿõà çàïèñàíè óñïåøíî!\n";
		idx++;
	}
}

Point :: ~Point() 
{
	if(idx != 9) cout << "Ñåãà ùå âèäèòå ñòîéíîñòèòå çà Point idx: " << idx << endl;
	else cout << endl << endl << "Ñåãà ùå âèäèòå ñòîéíîñòèòå çà Point 9 â êîéòî å ðåøåíèåòî íà çàäà÷àòà\n";
	cout << "x: " << this->x << endl;
	cout << "y: " << this->y << endl;
	cout << "z: " << this->z << endl;
	cout << endl;
	idx++;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Bulgarian");
	Point point[9];
	Point result = result.multiplication(point[0], point[2]);
	cout << endl;
	idx = 0;
	return 0;
}
