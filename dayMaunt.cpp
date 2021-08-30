//-------------------------------
//----- Program name WEEK -------
//We count week in this program
//We use Sakamoto algorithm
//-------------------------------

#include <iostream>
using namespace std;

int dayOfWeek(int d, int m, int y){ // We this function give day, maunth, year and function give me week 
	// Months Array
  	int t[] = {11,12,1,2,3,4,5,6,7,8,9,10};

  	// Convert months array
  	for (int i = 0; i < 12; i++){
    		int ans = t[i] * 2.6 - 0.2;
    		t[i] = ans % 7;
  	}

  	// Continue Algo
  	if(m<3){
    		y -= 1;
	}

  	int day = (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
  		return day;
}

int main(){
	//  Day, Maunth, Year
	int d,m,y; 
	cout<<"please number "<<endl;
	cout<<"Day=";   cin>>d;
	cout<<"Mount="; cin>>m;
	cout<<"Year=";  cin>>y;
	// variable x = function count
	int x=dayOfWeek(d, m, y); 

	switch(x){
		case 1:
	                cout<<"Monday"<<endl;
                        break;
                case 2:
                        cout<<"Tuesday"<<endl;
                        break;
		case 3:
			cout<<"Wednesday"<<endl;
			break;
		case 4:
			cout<<"Thurstday"<<endl;
			break;
		case 5:
			cout<<"Friday"<<endl;
			break;
		case 6:
			cout<<"Saturday"<<endl;
			break;
		case 7:
			cout<<"sunday"<<endl;
			break;
		default:
			cout<<"This day is not"<<endl;
			break;
};

	return 0;
}
