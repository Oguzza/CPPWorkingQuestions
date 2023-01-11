#ifndef BOX_H
#define BOX_H

class Box
{
	friend void printVolume(const Box &b);
	
public:
	Box(double l= 2.0, double b = 2.0, double h = 2.0);
	void calculateVolume(void);
	bool compare(const Box &b1);
	static int getCount();
	~Box();
private:
	double lenght,breadth,height,volume;
	static int count;
	
};

#endif
