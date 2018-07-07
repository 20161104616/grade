#include<iostream>
#include <malloc.h>
#include <fstream>
#include<sstream>

#include <string>
#include <vector>
using namespace std;
struct student {
	string name;
	string sex;
	string classnum;
	string projectname;
	string projectkind;
	string num;
	string score;
};
typedef student elemtype;

typedef struct
{
	elemtype elem[100];
	int last = 0;
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


void Playerinformation(actornumber* l)
{
	int i, j;
	cout << "决定选手数量" << endl;
	cin >> j;

	for (i = 0; i<j; i++)
	{
		cout << "第" << i + 1 << "位" << endl;
		cout << "姓名" << endl;
		cin >> l->elem[i].name;
		cout << "性别" << endl;
		cin >> l->elem[i].sex;
		cout << "班级" << endl;
		cin >> l->elem[i].classnum;
		cout << "项目名称" << endl;
		cin >> l->elem[i].projectname;
		cout << "项目类型" << endl;
		cin >> l->elem[i].projectkind;
		cout << "电话号码" << endl;
		cin >> l->elem[i].num;
		l->last++;
	}
}


void grademark(jurenumber* k)
{

	cout << "输入评委数量（3--10)" << endl;
	cin >> k->counter;
}

void scoremark(actornumber* l, jurenumber* k)//´ò·Ö 
{
	int x, sum;
	double y, z;
	int mymax = 0, mymin = 10;
	for (int i = 1; i <= l->last; i++)
	{
		for (x = 1, sum = 0; x <= k->counter; x++) {
			cout << "第"<< x << "位评委打分：" << endl;
			cin >> y;
			sum = sum + y;
			if (y>mymax)
				mymax = y;
			if (y<mymin)
				mymin = y;
		}
		sum = (sum - mymax - mymin) / (k->counter - 2);
		l->elem[i - 1].score = sum;
	}
}

void sort(actornumber *l)
{
	cout << l->elem[0].score;
	int i, j;
	elemtype chan;
	for (i = 0; i <= l->last; i++)
	{
		for (j = 0; j<l->last - i - 1; j++)
		{
			if (l->elem[j].score>l->elem[j + 1].score)
			{
				chan = l->elem[j];
				l->elem[j] = l->elem[j + 1];
				l->elem[j + 1] = chan;
			}
		}

	}
	for (i = 0; i <= l->last; i++)
		cout << "第" << i + 1 << "位，" << "姓名" << l->elem[i].name << ",性别" << l->elem[i].sex
		<< ",项目名称" << l->elem[i].projectname << ",项目种类" << l->elem[i].projectkind
		<< ",号码" << l->elem[i].num << ",班级" << l->elem[i].classnum << ",成绩" << l->elem[i].score << endl;
	cout << "已排序" << endl;
}




/*void fileread(actornumber* l)
{

FILE*fp;
int line = 0;
int c,i;

fp = fopen("C:\\Users\\asus\\Desktop\\student.csv", "r"); // ÒÔÎÄ±¾·½Ê½´ò¿ª¡£
if(fp == NULL) return -1; // ´ò¿ªÎÄ¼þÊ§°Ü¡£
while(1)
{
fscanf(fp, "%s", &l->elem[line].name);//´ÓÎÄ¼þÖÐ¶ÁÈ¡µÚÒ»¸öÔªËØ¡£
c = getchar();//¶ÁÈ¡·Ö¸ô·û¡£
//½ÓÏÂÀ´Òª¶ÁÈ¡×Ö·û´®£¬ÐèÒªÖð¸ö×Ö·û¶ÁÈë£¬Ö±µ½³öÏÖ·Ö¸ô·ûÎªÖ¹¡£
i = 0;
while(1)
{
l->elem[line].sex = getchar();//¶ÁÈëÒ»¸ö×Ö·û¡£
if(l->elem[line].sex == ',')//·¢ÏÖ·Ö¸ô·û
{1
l->elem[line].sex='\0'; //¸³Öµ×Ö·û´®½áÊø·û¡£
break;//ÍË³ö¶ÁÈ¡×Ö·û´®¡£
}
i++;
}
//ÓÉÓÚÔÚ¶Á×Ö·û´®µÄÊ±ºò·Ö¸ô·ûÒÑ¾­±»¶ÁÈ¡£¬ÕâÀï²»ÐèÒª¶Á·Ö¸ô·û£¬¶øÊÇÖ±½Ó¶ÁÏÂÒ»¸öÔªËØ¡£
fscanf(fp, "%s", &l->elem[line].projectname);//´ÓÎÄ¼þÖÐ¶ÁÈ¡×îºóÒ»¸öÔªËØ¡£
c = getchar();//¶ÁÈ¡ÏÂÒ»¸ö×Ö·û£¬¿ÉÄÜÊÇ»»ÐÐ·û»òÎÄ¼þ½áÎ²¡£
line ++;
if(c == EOF) break;//µ½ÎÄ¼þ½áÎ²£¬ÍË³ö¶ÁÈ¡¡£
}

fclose(fp); //¹Ø±ÕÎÄ¼þ¡£

}
*/
/*void fileread(actornumber* l){
FILE*fp;
fp = fopen("C:\\Users\\asus\\Desktop\\student.csv", "r");
char a[10];
if (fp == NULL){
cout<<"Eorr."<<endl;
}
for (int i =0;i<10;i++){
fscanf(fp,"%d",&a[i]);
}

}*/
/*
void fileread(actornumber* l)
{
int i=0,j=0;
int number=0;
double b;
string a[10][6];
string line,form,s;
if(infile.fail()){
cout<<"cannot open file"<<endl;
return;
}
for (i=0;i<2;i++)
{
for(j=0;j<6;j++)
{
getline(infile,line,',');
a[i][j] =line;
}
number++;
}
cout<<a[1][0]<<endl;
}*/



/*void  fileread(actornumber* l)
{
int x[100][6];
int j,i,n=0;
FILE *fp;
fp=fopen("C:\\Users\\asus\\Desktop\\student.csv","r");
while(1){
fscanf(fp,"%s,%s,%s,%s,%s,%s,",&x[n][0],&x[n][1],&x[n][2],&x[n][3],&x[n][4],&x[n][5]);
if (feof(fp))break;
n++;
}
fclose(fp);
printf("n=%d\n",n);
for (j=0;j<n;j++){
for (i=0;i<6;i++) printf("%s ",x[j][i]);
printf("\n");

}
l->elem[j].name[10]=x[0][0];
cout<<l->elem[j].name<<endl;
}*/
/*
void fileread(actornumber* l)
{

	int i = 0;
	int j = 0;
	double b;
	int num = 0;//¼ÇÂ¼±íÖÐÓÐ¼¸ÐÐÊý¾Ý
	string a[100][6];
	string line, form, s;
	ifstream Tinfile("C:\\Users\\asus\\Desktop\\student.csv", ios::in);
	if (Tinfile.fail()) {
		cout << "Cannot open file." << endl;
		return;
	}

	while (getline(Tinfile, form)) {
		num++;
	}
	//cout << "csvÖÐÓÐ" << num - 1 << "ÐÐÊý¾Ý" << endl;
	Tinfile.close();

	ifstream infile("C:\\Users\\asus\\Desktop\\student.csv", ios::in);

	for (i = 0; i < num; i++) {
		for (j = 0; j < 6; j++) {
			getline(infile, line, ',');
			a[i][j] = line;
		}
	}
	//	for (i = 0; i < num; i++) {
	//		for (j = 0; j < 6; j++) {
	//			cout<<a[i][j]<<"("<<i<<","<<j<<") ";
	//		}
	//	}
	for (i = 0; i < num - 1; i++) {
		for (j = 0; j < 6; j++) {
			l->elem[i].name = a[i][j];
			j++;
			l->elem[i].sex = a[i][j];
			j++;
			l->elem[i].projectname = a[i][j];
			j++;
			l->elem[i].projectkind = a[i][j];
			j++;
			l->elem[i].num = a[i][j];
			j++;
			l->elem[i].classnum = a[i][j];
		}
	}
	//	cout<<"1"<<endl;
	//	cout<<l->elem[0].name<<cout<<l->elem[0].sex<<endl;
	for (i = 0; i < num - 1; i++) {
		for (j = 0; j < 6; j++) {
			cout << l->elem[i].name << " ";
			j++;
			cout << l->elem[i].sex << " ";
			j++;
			cout << l->elem[i].projectname << " ";
			j++;
			cout << l->elem[i].projectkind << " ";
			j++;
			cout << l->elem[i].num << " ";
			j++;
			cout << l->elem[i].classnum << " ";
		}
		cout << "\n";
	}
}
*/






int main() {
	actornumber* l;
	jurenumber* k;

	l = (actornumber *)malloc(sizeof(actornumber));
//	fileread(l);
	    k=(jurenumber *)malloc(sizeof(jurenumber));
	  	 Playerinformation(l);
		 grademark(k);
	  	 scoremark(l,k);
	   sort(l);
	// fileread();
}