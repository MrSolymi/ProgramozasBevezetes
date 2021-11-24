#include "std_lib_facilities.h"
#include "my.h"

int foo;
int main(){
	foo=7;
	print_foo();
	print(99);
	
	
	//Integers:
	int x = 7;
	int y = 9;
	swap_v(x,y);		//lefut, de nem cseréli meg őket
	cout << x << " " << y << endl;
	swap_r(x,y); 		//lefut, megcseréli őket
	cout << x << " " << y << endl;
	
	//Constants:
	const int cx = 7;
	const int cy = 9;
	swap_v(cx,cy);		//lefut, de nem cseréli meg őket
	cout << cx << " " << cy << endl;
	/* swap_r(cx,cy);	//nem fut le, nem lehet konstansokat megcserélni
	cout << cx << " " << cy << endl;*/
	
	
	//Doubles
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx,dy);		//lefut, de nem cseréli meg őket
	cout << dx << " " << dy << endl;
	/*swap_r(dx,dy);	//nem fut le, double értékre nem lehet int-tel hivatkozni
	cout << dx << " " << dy << endl;*/
	
	swap_v(7.7,9);  	//lefut, de a double értékekből int értékek lesznek
}