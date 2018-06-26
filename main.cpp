#include"iostream"
using namespace std;
struct student {
    char name;
    char sex;
    char mate;
    char projectname;
    char projectkind;
    int num;
};

int grademark(struct student)
{
    int x ,sum;
    double y,z;
    int mymax=0, mymin=10;
    
    
        for(x=1,sum=0;x<=10;x++){
            cin>>y;
            sum=sum+y;
            if(y>mymax)
                mymax=y;
            if(y<mymin)
                mymin=y;
            sum=sum-mymax-mymin;
            z=sum/8.0;
}
    ｝
