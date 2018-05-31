#include<iostream>
using namespace std;
class time
{
    int hr, mint;
    public:
    time()
    {
        hr =0;
        mint=0;
    }
    time(int a , int b)
    {
        hr = a;
        mint = b;
    }
    void sum(time , time );
    void display()
    {
        cout<<hr<<"hrs and "<<mint<<"minutes"<<endl;
    }
};
void time :: sum(time t1 , time t2)
{

    hr = t1.hr + t2.hr;
    mint = t1.mint + t2.mint;
    if(mint>60)
    {
        hr += (mint/60);
        mint = (mint)%60;
    }

}
int main()
{
    time t1(2,78);
    time t2(1, 5);
    time t3;
    t3.sum(t1,t2);
    t3.display();
}
