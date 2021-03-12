#ifndef Square_H
#define Square_H
#include <iostream>
using namespace std;
class Square {
	public:
		Square(int = 0, int = 0, int = 0);
		void Set_Square(int, int, int);
		void Set_X(int);
		void Set_Y(int);
		void Set_length(int);
		void Print_coordinates();
		int Get_X() const;
		int Get_y() const;
		int Get_length() const;
		int Get_Area()const;
		bool Does_xy_in_area(int,int)const;
		void print_the_square();
	private:
		
		int x;
		int y;
		int length;

};
	
		
#endif