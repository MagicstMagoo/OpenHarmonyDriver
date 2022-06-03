#​pragma​ once

class Shape {
public:
	Shape(int x, int y);
	~Shape();
	Move(int16_t dx, int16_t dy);
	int getX();
	int getY();

private:
	int x_;
	int y_;
};