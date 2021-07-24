//---------------
//-- LOGARITHM --
//--------------
//This program count x basis y

#include <iostream>
#include <cmath>
int main(){
	double x,y,z;
	std::cout<<"please number x basis  y "<<std::endl;
	std::cout<<"x="; std::cin>>x;  // Give basis X
	std::cout<<"y="; std::cin>>y;  // Give Y
	z=round(y); 

	if(x<=0 || y<=1){
		std::cout<<"Your number can be x>0 or y>0 but don't x=1"<<std::endl;
	}else if(x==1){
		std::cout<<"Your number can be x>1 or x<1 but x>0"<<std::endl;
	}else{
        	for(int i=2; i<z;i++){
			y=y/x;
			if(y==x || y<x){
				std::cout<<"log "<<x<<" basis "<<z<<" = "<<i<<std::endl;	
				break;
			}
			else{
				continue;
			}
		}		
	};
        return 0;
};  
