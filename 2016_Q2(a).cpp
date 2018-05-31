#include<iostream>
using namespace std;
int main()
{
    int *ptr = new int[6];
    cout<<"Enter the number"<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>*(ptr+i);
    }
     for(int i=0;i<6;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    delete []ptr;
    return 0;
}
