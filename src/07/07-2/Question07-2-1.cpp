#include <iostream>
using namespace std;

class Rectangle
{
private:
	int width;
	int height;
public:
	Rectangle(int w, int h) : width(w), height(h) {};
	int GetArea() const
	{
		return width * height;
	}
	void ShowAreaInfo() const
	{
		cout<<"면적: "<<GetArea()<<endl;
	}
};

class Square : public Rectangle
{
private:
	int length;
public:
	Square(int l) : Rectangle(l, l) {}
};

int main(void)
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();
	
	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}