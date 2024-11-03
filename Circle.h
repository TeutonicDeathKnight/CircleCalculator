class Circle
{
public:
	double calcDiameter() const;
	double calcArea() const;
	double calcCircumference() const;
	void setRadius(int input);
	int getRadius() const;
	void setColorOfFill(std::string input);
	std::string getColorOfFill() const;
	
private:
	int radius;
		//Store radius of circle
	std::string colorOfFill;
	//store circle's fill color
};