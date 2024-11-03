#include <string>;

class Circle
{
public:
	void calcDiameter() const;
	void calcArea() const;
	void calcCircumference() const;
	void setRadius();
	void getRadius() const;
	void setColorOfFill();
	void getColorOfFill() const;
	
private:
	int radius;
		//Store radius of circle
	std::string colorOfFill;
		//store circle's fill color
};