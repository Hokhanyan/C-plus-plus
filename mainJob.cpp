#include "job.hpp"
int main(){
     	 CV person[4];	
         person[0].name = "Davit";
         person[0].salary = 100000;
         person[0].position = "Programist";
         person[0].experence = 20;
  
         person[1].name = "Ani";
         person[1].salary = 120000;
         person[1].position = "police";
         person[1].experence = 10;
  
         person[2].name = "Anna";
         person[2].salary = 150000;
         person[2].position = "Nurse";
         person[2].experence = 15;
  
         person[3].name = "Hayk";
         person[3].salary = 100000;
         person[3].position = "Programist";
         person[3].experence = 20;
  
         int y, z;
         string x;
	 cout << "Pleace insert "<< endl;
	 cout << "Position = "; cin >> x;
	 cout << "Salary = "; cin >> y;
	 cout << "experence = "; cin >> z;
  
         int counter = 0;
         for(int i=0; i<4; i++){
                 if(person[i].position == x and person[i].salary == y and person[i].experence == z){
			 assert(person[i].salary > 90000);
			 cout << "This person name is " << person[i].name << endl;
                         counter++;
                 }
         }
         if ( counter == 0){
		 cout << "There is no such person" << endl;
  
         }
         return 0;
}
