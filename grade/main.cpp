#include"iostream"
using namespace std;
struct student {
    char name;
    char sex;
    char mate;
    char projectname;
    char projectkind;
    int num;
    int score;
};

int grademark(student one)
{
    int x ,sum，jury;
    double y,z;
    int mymax=0, mymin=10;
    cout<<"  输入评委数(3--10)"<<endl;
    cin>>jury;
    
        for(x=1,sum=0;x<=jury;x++){
            cout<<"第"x"位评委打分"<<endl;
            cin>>y;
            sum=sum+y;
            if(y>mymax)
                mymax=y;
            if(y<mymin)
                mymin=y;
            sum=sum-mymax-mymin;
            one.score=sum/8.0;
        }
｝
