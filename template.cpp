/* A feature used to create generic functions and classes that is, functions and classes having general data types..
#include<iostream>
using namespace std;

template<typename T1, typename T2>
T1 add(T1 a, T2 b)  // template function
{
    return a+b;
}
int main()
{
    cout<<"Sum is: "<<add<float,int>(3.3,5.6);
    return 0;
}
/*

#include<iostream>
using namespace std;
template<typename T1, typename T2, typename T3>

void show(T1 a, T2 b)
{
    T3 c[10];
    cin>>c;
    cout<<a<<b<<c;
}

int main()
{
    show<int,float,char>(1,3.5);
    return 0;
}
*/

