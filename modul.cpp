//-- MODUL --
// This program count number modul
// -------------------------------
#include <iostream>
int main(){
	double n,a;
	std::cout<<"please number= "; std::cin>>n; 
	a=n;
	if(n<0){
		n=n*(-1);
		std::cout<<" Modul "<<a<<" = "<<n<<std::endl;
	}else{
		std::cout<<" Modul "<<n<<" = "<<n<<std::endl;
	};

	return 0;
};
