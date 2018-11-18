#include<iostream>




using namespace std;




	//Defining a class rectangle	
	
	class rectangle {

	int length, breadth;
	

	public :

	void values (int, int);

	int area () {return length*breadth;}

	int per () {return 2*(length + breadth);}


	};


	void rectangle :: values (int a, int b) {


	length = a;

	breadth = b;

	}






	int main () {


	int l1, b1, l2, b2;

	cout<<"Enter the length of the first rectangle ";

	cin>>l1;

	cout<<endl;

	cout<<"Enter the breadth of the first rectangle ";

	cin>>b1;

	cout<<endl;

	rectangle r1, r2;

	r1.values (l1, b1);

	cout<<"The area of the first rectangle is "<<r1.area()<<endl;

	cout<<"The perimeter of the first rectangle is "<<r1.per()<<endl;



	cout<<endl<<endl;



	cout<<"Enter the length of the second rectangle ";

	cin>>l2;

	cout<<endl;

	cout<<"Enter the breadth of the second rectangle ";

	cin>>b2;

	cout<<endl;

	

	r2.values (l2, b2);

	cout<<"The area of the second rectangle is "<<r2.area()<<endl;

	cout<<"The perimeter of the second rectangle is "<<r2.per()<<endl;



	cout<<endl;



	if (r1.area() > r2.area()) {

	cout<<"The first rectangle has more area "<<endl;

	}


	else {cout<<"The second rectangle has more area "<<endl;}




	if (r1.per() > r2.per()) {

	cout<<"The first rectangle has a larger perimeter "<<endl;

	}


	else {cout<<"The second rectangle has a larger perimeter "<<endl;}

	
	




	}
	



	

