#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	long double loan,rate,mon,cur_ba,cur_int,total;
	cout<<"Enter initial loan: ";
	cin>>loan;
	cout<<"Enter interest rate per year (%): ";
	cin>>rate;
	cout<<"Enter iamount you can pay per year: ";
	cin>>mon;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	long long i=1;
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	do{
	cur_int=loan*rate/100.0;
	total=loan+cur_int;
	cur_ba=total-mon;
	
	if(total<mon){
		mon=total;
		cur_ba=0;
	}
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << cur_int;
	cout << setw(13) << left << total;
	cout << setw(13) << left << mon;
	cout << setw(13) << left << cur_ba;
	cout << "\n";	
	loan=cur_ba;
	i++;
	}while(loan!=0);
	return 0;
}
