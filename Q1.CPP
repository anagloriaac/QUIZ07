#include <iostream>
using namespace std;

long fibonacci (long n){
    long a;
    if (n<=1){
    a=n;
    return a;
}
    else {if(n>1){
        int b=0,c=1;
        for(int i=1;i<n;i++){
    a=b+c;
    b=c;
    c=a;
  }
  return c;
}
}
}
int main () {
  long y;

cout << "Please enter a number: ";
cin >> y;
cout << "The fibonacci is: " << fibonacci (y);

return 0;

}
