#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, rate, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int a=1;
	double b=loan, e=pay ;
	double c, d, f;
	do {
    c = b * (rate / 100);
    d = b + c;
  
    if (e > d) {e = d;   f = 0;} 
    else f = d - e; 

    cout << fixed << setprecision(2);
    cout << setw(13) << left << a;
    cout << setw(13) << left << b;
    cout << setw(13) << left << c;
    cout << setw(13) << left << d;
    cout << setw(13) << left << e;
    cout << setw(13) << left << f;
    cout << "\n";
    b = f;
    a++;

} while (f > 0);
	return 0;
}
