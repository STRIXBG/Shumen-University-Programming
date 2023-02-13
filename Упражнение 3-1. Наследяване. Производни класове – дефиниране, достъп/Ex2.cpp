/*
Задача 2. Да се дефинира клас “Точка в равнината”. Като се използва
този клас, да се определи клас “Точка в тримерното пространство”. И най-
накрая да се определи класът “Точка в тримерното пространство с цвят”,
наследник на клас “Точка в тримерното пространство”. Цвят се задава чрез
цяло число.
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class PointPlane
{
	private:
		int x;
		int y;
		
	public:
		void ReadPointPlane(int absc = 0, int ord = 0)
		{
			this->x = absc;
			this->y = ord;
		}
		
		void PrintPointPlane()
		{
			cout << x << " " << y;
		}
};

class Point3D : public PointPlane
{
	private:
		int z;
	
	public:
		void ReadPoint3D(int a, int o, int b)
		{
			ReadPointPlane(a, o);
			this->z = b;
		}
		
		void PrintPoint3D()
		{
			PrintPointPlane();
			cout << ", " << this->z << endl;
		}
};

class Point3DColor : public Point3D
{
	private:
		int col;
		
	public:
		void ReadPoint3DColor(int a, int o, int b, int c)
		{
			ReadPoint3D(a, o, b);
			this->col = c;
		}
		
		void PrintPoint3DColor()
		{
			PrintPoint3D();
			cout << "color: " << this->col << endl;
		}
};

int main()
{
	//Point Plane
	PointPlane ptPlane;
	ptPlane.ReadPointPlane(5, 10);
	ptPlane.PrintPointPlane();
	cout << endl;
	
	//Point 3D
	Point3D pt3D;
	pt3D.ReadPoint3D(2, 4, 6);
	pt3D.PrintPoint3D();
	
	//Point 3D Color
	Point3DColor pt3DColor;
	pt3DColor.ReadPoint3DColor(2,4,6,111);
	pt3DColor.PrintPoint3DColor();
	return 0;
}
