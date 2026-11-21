#include<iostream>
using namespace std;
int main(){
    int n,digits;
    unsigned int sum=0;
    int reverse =0;
    cout<<"Enter your number : ";
    cin>>n;
    cout<<"Enter digits in given number: ";
    cin>>digits;
    while (digits>=1)
    {
        int digit = n % 10;
        sum += digit;
        reverse = reverse * 10 + digit; 
        n = n/10;
        digits--;
        
     
    }
    cout <<"Digits Sum of Given number is : "<<sum<<endl;
      cout << "Reverse Number: " << reverse;
}



