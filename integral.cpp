// ---------------------------------
// --------- INTEGRAL --------------
//
// This program count integral the X
// Count X in the N basis M
// ---------------------------------

#include <iostream>
int main(){
	int n,m,k,x,y,z;
	std::cout<<"please number n basis m"<<std::endl;
	std::cout<<"n="; std::cin>>n;
	std::cout<<"m="; std::cin>>m;
	
	x=m*m/2;
	y=n*n/2;
	z=x-y;
	std::cout<<"integral "<<n<<" basis "<<m<<"= "<<z<<std::endl;
	
	return 0;
};

