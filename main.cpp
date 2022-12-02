#include <iostream>
using namespace std;

int main(){
  int n = 0, num = 2;
  bool c = true;
cin >> n;
  c = primo (n, num);
if (c){
cout << "numero primo" << endl;
} else {
cout << "numero non primo" << endl;
}
  return 0;
}
