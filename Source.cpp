#include <iostream>
using namespace std;
#include "Shapes.h"
void Square::Set_Square(int x_c, int y_c, int len)
{
	Set_X(x_c);
	Set_Y(y_c);
	Set_length(len);
}
Square::Square(int x_c, int y_c, int len)
{
	Set_Square(x_c, y_c, len);
}
 void Square::Set_X(int x_c)
{
	 x = (x_c >= 0) ? x_c : 0;
}
 void Square::Set_Y(int y_c)
 {
	 y = (y_c >= 0) ? y_c : 0;
}
 void Square::Set_length(int len)
 {
	 length = (len >= 0) ? len : 0;
 }
 
 void Square::Print_coordinates()
 {
	 std::cout << " x - " << x << endl << "y - " << y << endl << "length -" << length << endl;
	 
 }
 int Square::Get_X() const
 {
	 return x;
 }
 int Square::Get_y() const
 {
	 return y;
 }
 int Square::Get_length() const
 {
	 return length;
 }
 int Square::Get_Area() const
 {
	 return length* length;
 }
 bool Square::Does_xy_in_area(int x_c,int y_c) const
 {
	 if (x_c < (x + length) && y_c < (y + length))
	 {
		 return 1;
	 }
	 return 0;
 }
 void Square::print_the_square()
 {
	 for (int i = 0; i < y; i++)
	 {
		 if (i < y - length)
		 {
			 cout << endl;
		 }
		 else
		 {
			 
			 
				 for (int j = 0; j < x+length; j++)
				 {
					 if (j < x)
					 {
						 cout << " ";
					 }
					 else {
						 cout << "*";
					 }
				 }
				 cout << endl;
			 
		 }
	 }
 }
int main()
{
	Square square;
	Square square2;
	Square square3;
	int x;
	int y; 
	int len;
	int x1;
	int y1;
	int len1;
	int area;
	int x_c = 100; 
	int y_c = 100;
	bool true_or_fulse;
		cout << " Hello this is  A make a Square Program :" << "insert the  coordinates  " << endl;
		cout << " X ";
		cin >> x;
		cout << endl;
		cout << " y -";
		cin >> y;
		cout << endl;
		cout << " length ";
		cin >> len;
		cout << endl;


			square.Set_Square(x,y,len);
			square.Print_coordinates();
			x1 = square.Get_X();
			y1 = square.Get_y();
			len1 = square.Get_length();
			area = square.Get_Area();
			square.print_the_square();
			true_or_fulse = square.Does_xy_in_area(x_c, y_c);
				cout << endl << " the values are : " << x1 << " : " << y1 << ": " << len1 << endl << "also the area is : "<< area << endl << "also the xy  are in or not " << true_or_fulse << endl;


	  


}

