#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    float a, b, c;
    
    cin>>a>>b>>c;
    
    float D = b*b -4*a*c;
    
    if (D<0) {
        cout<<"The Equation is No Solution"<< endl;
    } else if (D==0)
    {
        float  x = (-b)/2*a;
        cout<<"x : "<<x<<endl;
     
    } else {
        float x1 = ((b*-1)+ sqrt(D))/2*a;
        float x2 = ((b*-1)- sqrt(D))/2*a;
        
        cout<<"X1 ="<<x1<<endl;
        cout<<"X2 ="<<x2<<endl;
    }
}
