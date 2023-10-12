#include<iostream>
using namespace std;
int main()
{
   // int var = 11;
   // int *ptr = &var;
    //cout<<var<<endl;
   // cout<<*ptr;
   // cout<<&var<<endl;//Address of variable
   // cout<<&ptr<<endl;//address of pointer
   // cout<<ptr<<endl;//value of pointer
    //float vat=12.25;
    //float *pt=&vat;
    //cout<<&pt<<endl;
   // cout<<*pt<<endl;
   /// cout<<pt<<endl;
   // cout<<&vat<<endl;
    //cout<<vat<<endl;
    int arr[9]={10,20,30,40,50,60,70,80,90};
    int *ptr=&arr[0];
   
   for(int i=0;i<9;i++)
    {
        cout<<*ptr<<endl;
        *ptr++;
    }
    cout<<("Enter the number of variable (It shoud be between 0 to 9)");
    int w;
    cin>>w;
    if (w=*ptr)
    {
        cout<<*ptr<<endl;
    }
    else
    {
       cout<<("no return");

    }


}  