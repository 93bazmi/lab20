#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A,Rect B){
	double x,y ;
	x = min((A.x+A.w),(B.x+B.w)) - max(A.x,B.x) ;
	y = min(A.y,B.y) - max((A.y-A.h),(B.y-B.h)) ;
	if(x>0 && y>0) return x*y ;
	else return 0 ;
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(R1,R2);	
}
