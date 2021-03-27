#include<iostream>
#include<math.h>
using namespace std;
int length_n(int N)
{	
	int L;
	while(N)
	{
		N=N/10;
		L++;
	}
	return L;
}
int power(int x,int n)
{
	int i,p=1;
	for(i=0;i<n;i++)
	{
		p=x*p;
	}
	return p;
}
void analyse(int F,int B[],int N)
{
	int i;
    for(i=0;i<F;i++)
	{
		B[i]=(N/power(10,i))%10;	
	}	
}
void binary()
{
	int Num,i,j;
	int D[100];
	cout<<"Enter your decimal number : "<<endl;
	cin>>Num;
	while(Num)
	{
	D[j]=Num%2;
	Num=(int)Num/2;
	j++;
	}
	cout<<"Your number in binary is : ";
	for(i=j-1;i>0;i--) cout<<D[i];
	cout<<endl;
}
void decimal()
{
	int N,i,D,j,F;
	D=0;
	cout<<"Enter you binary number : "<<endl;
	cin>>N;
	F=length_n(N); 
	int B[F];
	analyse(F,B,N);
	cout<<endl;
	for(i=F-1;i>=0;i--)
	{
		D=D+B[i]*pow(2,i);
	}
	cout<<" Your number in decimal is : "<<D<<endl;
}
main()
{	
	int choice;
	while(1)
	{
		cout<<" #####  press 1  convert decimal ====>>>>> binary     ##### "<<endl<<endl<<" #####  press 2 to convert binary ====>>>>> decimal   ##### "<<endl<<endl<<" #####  press 3 to reset screen                       #####  "<<endl<<endl<<" #####  press 4 to exit                               ##### "<<endl ;
		cin>>choice;
		switch(choice)
		{
		case 1:binary();
        break;
        case 2:decimal();
        break;
        case 3:system("CLS");
        break;
        case 4:goto x;
        default:continue;
		}
	}
	x:;
}
