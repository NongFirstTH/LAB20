#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
double R,L,U,D;
R = min((R1.x)+R1.w,(R2.x)+R2.w);
L = max(R1.x,R2.x);
U = min(R1.y,R2.y);
D = max((R1.y)-R1.h,(R2.y)-R2.h);
double A = (R-L)*(U-D);
if(A>0){
return A;
}else{
return 0;
}


}