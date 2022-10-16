#include <iostream>
using namespace std;
int find_gcd(int a, int b);

int main()
{
 int a, b;

  cout << "Enter two integers: ";
  cin >> a >> b;
  if (a || b > 200) {
    return 0;
  } 
  int gcd = find_gcd(a, b);
  cout << "GCD: " << gcd << "\n";
  cout << "Would you like to quit:";
  if ("y" || "yes") {
    return 0;
    } 
 return 0;
}
