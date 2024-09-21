#include <iostream>
using namespace std;

using ll = long long; 

int main() {
    
    string name;
    ll Grosssalary, Instalment, Insurance;
    
    cout <<" Enter Your Name: ";
    cin>> name;
    
    cout <<" The Grosssalary: ";
    cin>> Grosssalary; 
    
    cout <<" The Instalment: ";
    cin>> Instalment;
    
    cout <<" The Insurance: ";
    cin>> Insurance;
    
    ll Tax_Amount = 0.2*Grosssalary;
    ll Net_Salary = Grosssalary - Tax_Amount  - Instalment - Insurance;
    
    cout<< "Payslip for Employee"<<endl;
    cout<< "--------------------"<<endl;
    cout<< "Name: ";
    cout<<name<<endl;
    cout<<"Tax (20%): ";
    cout<<Tax_Amount<<endl;
    cout<<"Instalment: ";
    cout<<Instalment<<endl;
    cout<<"Insurance: ";
    cout<<Insurance<<endl;
    cout<<"Net Salary: ";
    cout<<Net_Salary<<endl;
    
}
