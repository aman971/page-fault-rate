#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    double P,MOD;
    int EAT,MAT,PFST,PFST_MOD,PFST_MAT;
	cout<<"demand page memory";
	cout<<"to calculate page fault rate";
	cout<<"enter PFST=NON MODIFIED PAGE FAULT SERVICE TIME";
	cin>>PFST;
	cout<<"enter PFST_MOD=MODIFIED PAGE FAULT SERVICE TIME";
	cin>>PFST_MOD;
	cout<<"enter MAT=MEMORY ACCESS TIME";
	cin>>MAT;
	cout<<"enter EAT=EFFECTIVE ACCESS TIME";
	cin>>EAT;
	
	P=(EAT-MAT)/((MOD*PFST_MOD)+PFST-(MOD-PFST_MAT));
    cout<<"the value of page fault rate time is"<<P;
}
