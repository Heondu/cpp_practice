#ifndef __POINT__TEMPLATE_H__
#define __POINT__TEMPLATE_H__

template <typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0);
	void ShowPosition() const;
};
#endif