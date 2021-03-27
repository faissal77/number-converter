#include<iostream>
#include<iomanip>
#include<fstream>
#include<math.h>
#include<string>
using namespace std;
void binary()
{
	int Num,i,j;
	int D[100];
	cout<<"enter your decimal number : "<<endl;
	cin>>Num;
	while(1)
	{
	D[j]=Num%2;
	Num=(int)Num/2;
	if (Num==0) break;
	j++;
	}
	for(i=j;i>0;i--) cout<<D[i];
	cout<<endl;
}
void decimal()
{
	int N,i,D,j;
	D=0;
	cout<<"how long is your number ? for exemple (1111) is 4 and (111) is 3 ... : "<<endl;
	cin>>N;
	int B[N];
	cout<<"To enter your number start from left >> to right : " <<endl;
	for(j=N-1;j>=0;j--)
	{
		cout<<"enter your number : "<<endl;
		cin>>B[j];
	}
	for(i=N-1;i>=0;i--)cout<<B[i];
	for(i=N-1;i>=0;i--)
	{
		D=D+B[i]*pow(2,i);
	}
	cout<<"  your number in decimal is "<<D<<endl;
}
main()
{	
	int choice;
	while(1)
	{
		cout<<"convert from decimal to binary press 1 "<<endl<<"convert from binary to decimal press 2 "<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:binary();
        break;
        case 2:decimal();
        break;
        default:continue;
		}
	}
}
