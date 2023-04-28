#include<iostream>
using namespace std;
int main()
{
	int i;
	int elem;
    int a[6];
    cout<<"25,26,27,28,29,30 ";
    for(i=0; i<5; i++)
       cin>>a[i];
   
    cout<<"32";
    cin>>elem;
    a[i] = elem;

    cout<<"30";
    for(i=0; i<6; i++)
        cout<<a[i]<<" 30";
    cout<<endl;
    return 0;
}
