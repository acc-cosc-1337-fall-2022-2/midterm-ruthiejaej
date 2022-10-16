#include "question3.h"

bool test_config()
{
    return true;
}

int find_gcd(int a, int b){
for (int i = b<=a ? b:a ; i > 1; i--) {
    if (a%i==0 && b%i==0) return i;
  }
  return 1;
}