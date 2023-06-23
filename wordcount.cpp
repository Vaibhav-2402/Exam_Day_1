#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int wdcount=1;
    int lcount=0;
    char ch;
    while((ch=getche())!='\r')
    {
        if(ch==' ')
        wdcount++;
        else
        lcount++;
    }
        cout<<"Number of words="<<wdcount<<endl;
        cout<<"Number of letters="<<lcount<<endl;
        return 0;
}
