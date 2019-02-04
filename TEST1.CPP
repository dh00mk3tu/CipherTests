//Made By dh00mk3tu | Anirudh Rath

#include<iostream.h>
#include<conio.h>
//scope resolution test

//CLASS
class swap {
    public:
	int a,b;

	void get_swap(int x, int y){
		int temp;
		cout<<"\n\tBEFORE SWAPING: x= "<<x<<" y= "<<y;
		temp=x;
		x=y;
		y=temp;
		cout<<"\n\tAFTER SWAPING:x= "<<x<<" y= "<<y;
	}
};

int main() {
	//object
	swap num;
	cout<<"\n\tEnter the number 1: ";
	cin>>num.a;
	cout<<"\n\tEnter the number 2: ";
	cin>>num.b;
	//swap
	num.get_swap(num.a,num.b);
	return 0;
}
