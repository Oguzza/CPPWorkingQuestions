#include "GroupData.h"
#include "DataSpec.h"
#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

	GroupData::GroupData(const DataSpec &d1, const DataSpec &d2, const DataSpec &d3, double x, double y, double z)
	:f1(d1), f2(d2), f3(d3), maxX(x), maxY(y), maxZ(z)
	{
	}
	double GroupData::getMaxX()const{
		return maxX;
	}
	double GroupData::getMaxY()const{
		return maxY;
	}
	double GroupData::getMaxZ()const{
		return maxZ;
	}
	void GroupData::print()const{
		cout<<"maxX = "<<getMaxX()<<endl;
		cout<<"maxY = "<<getMaxY()<<endl;
		cout<<"maxZ = "<<getMaxZ()<<endl;
	}
	void GroupData::calculateMaxFeatures(){
		
		double tempX = max(f1.getFX(),f2.getFX());
		maxX = max(tempX,f3.getFX());
		
		double tempY = max(f1.getFY(),f2.getFY());
		maxY = max(tempY,f3.getFY());
		
		double tempZ = max(f1.getFZ(),f2.getFZ());
		maxZ = max(tempZ,f3.getFZ());
	}
	bool GroupData::compare(const GroupData &g1){
		
		if(this->getMaxX()>g1.getMaxX() && maxY>g1.getMaxY() && maxZ>g1.getMaxZ()){
			return true;
		}else{
			return false;
		}
	}
