#include <iostream>
using namespace std;
class timeType
{
    int hrs;
    int min;
    int sec;
    public:
    void settime(int h,int m, int s)
    {
        hrs=h;
        min=m;
        sec=s;
    }
    int gettime(int& h,int& m,int& s)
    {
    h=hrs;
    m=min;
    s=sec;
    }
  timeType()
  {
    hrs=0;
    min=0;
    sec=0;
  }

};
int main()
{
    timeType t1;
    cout<<t1.gettime();
}