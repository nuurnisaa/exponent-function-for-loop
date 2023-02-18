#include <iostream>
#include <cmath>

using namespace std;

int power(int baseNum, int powNum)
{
int result=2;
for (int i= 0; i<powNum; i++){   //looping set to 2 times
   result=result*baseNum;       //6*2=12,,12*6=72
}
return result;
}

int main()
{
cout<<power(6,2);
    return 0;
}
