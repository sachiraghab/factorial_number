// To find factorial of given number
#include<iostream>
using namespace std;
int main(){
    int factorial=1,n;
    int i=1;
    cout<<"Enter number"<<endl;
    cin>>n;
    while(i<=n){
        factorial= factorial*i;
        i++;
    }
    cout<<"factorial of "<<n<<" is "<<factorial;
    return 0;
}
