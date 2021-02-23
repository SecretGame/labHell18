#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double x2,y2,a2,b2;
	double Overlape;
	double sumh,sumw;
	x2 = R1.x + R1.w;
	y2 = R1.y - R1.h;
	a2 = R2.x + R2.w;
	b2 = R2.y - R2.h;
	sumh = min(x2,a2) - max(R1.x,R2.x);
	sumw = min(R1.y,R2.y) - max(y2,b2);
	Overlape = sumh*sumw;
    if(Overlape > 0)
		return Overlape;
	else return 0;
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
cout << overlap(R1,R2);	
}
