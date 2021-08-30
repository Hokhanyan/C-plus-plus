#include <iostream>
using namespace std;

class Car {
  	public:
    		void CarStyle() {
			cout << "---------------------------"<<endl;
    			cout << "High level cars company"<<endl;
			cout << "Made in Germay by Armenian"<<endl;
  		}
		int year=2020;
};

class BMW : public Car {
	private:
		int salary;
  	public:	
    		void CarStyle() {
    			cout << "B M W"<<endl;
		};

		int speed;
		string color;
		string js;
		string model;
		
		BMW(int x, string y, string z, string f);
		
    		// Setter
    		void setSalary(int s) {
      			salary = s;
    		}
    		// Getter
    		int getSalary() {
      			return salary;
    		}
};
BMW::BMW(int x, string y, string z, string f ){
	speed = x;
	color = y;
	js = z;
	model = f;
};

class Mersedes : public Car {
	private:
		int salary;
  	public:
		string Model;
		string Tesak;
		int Door;
    		void CarStyle() {
    			cout << "MERSEDES-BENZ "<<endl;
  		}
    		// Setter
    		void setSalary(int s) {
      			salary = s;
    		}
    		// Getter
    		int getSalary() {
      			return salary;
    		}
};

int main() {

	int x;
	cout<<"-------------------------"<<endl;
	cout<<"Please chuse"<<endl;
	cout<<"All Car info writen 1 "<<endl;
	cout<<"BMW info write 2 "<<endl;
	cout<<"Mersedes info write 3 "<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Write="; cin>>x;
	cout<<endl;
	cout<<"-------------------------"<<endl;

	//Car
	Car myCar;
	
	//Mersedes
	Mersedes myBanz;
	myBanz.Model="SLS";
	myBanz.Tesak="Elegante";
	myBanz.year=2020;
	myBanz.setSalary(150000);
	myBanz.Door=4;
	
	//BMW
	BMW myBmw(320, "black", "Sedan", "x6");
	myBmw.setSalary(210000);


	try{		
		if(x==1){
			myCar.CarStyle();
			cout<<"Mersedes and BMW "<<endl;
			cout<<"Year="<<myCar.year<<endl;
		}
		else if(x==2){
			myBmw.CarStyle();
			cout<<"Speed/ "<<myBmw.speed<<"\nColor/ "<<myBmw.color<<"\nJS/ "<<myBmw.js<<"\nModel/ "<<myBmw.model<<endl;
			cout<<"SALARY="<<myBmw.getSalary()<<endl;
		}
		else if(x==3){
			myBanz.CarStyle();
			cout<<"MODEL="<<myBanz.Model<<endl;
			cout<<"STYLE="<<myBanz.Tesak<<endl;
			cout<<"SALARY="<<myBanz.getSalary()<<"$"<<endl;
			cout<<"DOOR="<<myBanz.Door<<endl;
		}else{
	 		throw 505;
    		}
	}
  	catch (int error) {
    		cout << "Error number: " << error;  
  	}
	
	return 0;
}

