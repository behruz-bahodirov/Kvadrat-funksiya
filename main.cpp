#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a,b,c;
	float x1,x2;
	cout<<"ax2+bx+c=0 da ";
	cout<<"a ning qiymati= ";
	cin>>a;
	cout<<"b ning qiymati= ";
	cin>>b;
	cout<<"c ning qiymati= ";
	cin>>c;
	if(a == 0) {
		cout<<"a ning qiymati nol bolishi mumkin emas";
	}
	else {
		int d;
		d = (b*b) - (4*a*c);
		if(d < 0) {
			cout<<"bunday funksiya mavjud emas";
		}
		else if(d == 0) {
			x1 = -b / (2*a);
			cout<<"x1= "<<x1;
		}
		else {
			x1 = (-b - sqrt(d)) / (2*a);
			x2 = (-b + sqrt(d)) / (2*a);
			cout<<"x1= "<<x1<<" "<<"x2= "<<x2;
		}
	}
}
