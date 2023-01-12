#ifndef GROUPDATA_H
#define GROUPDATA_H
#include "DataSpec.h"

class GroupData
{
public:
	GroupData(const DataSpec &d1, const DataSpec &d2, const DataSpec &d3, double x = 0.0, double y = 0.0, double z = 0.0);
	double getMaxX()const;
	double getMaxY()const;	
	double getMaxZ()const;
	void print()const;
	void calculateMaxFeatures();
	bool compare(const GroupData &g1);
private:
	const DataSpec f1, f2, f3;
	double maxX, maxY, maxZ;
};

#endif
