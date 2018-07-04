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
typedef student elemtype;

typedef struct
{
    elemtype elem[100];
    int last;
}actornumber;

struct jury {
    char nane;
    char sex;
    int age;
};
typedef jury jurys;

typedef struct
{
    jurys jur[10];
    int counter;
    int lasttwo;
}jurenumber;

void grademark(actornumber* l jurenumber* k)
{
    int x ,sum;
    double y,z;
    int mymax=0, mymin=10;
    cout<<"  输入评委数(3--10)"<<endl;
    cin>>k->counter;
    
        for(x=1,sum=0;x<=k->counter;x++){
            cout<<"第"<<x<<"位评委打分"<<endl;
            cin>>y;
            sum=sum+y;
            if(y>mymax)
                mymax=y;
            if(y<mymin)
                mymin=y;
            sum=sum-mymax-mymin;
        }
    　l->elem.score=sum;
｝
    

    
    
    
    
int main(){
    actornumber* l;
    jurenumber* k;
}
