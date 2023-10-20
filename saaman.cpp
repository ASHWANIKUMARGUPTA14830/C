#include<iostream>
using namespace std;
class student{
//	char name[10];
string name;
	int roll;
	public:
		void getdata(){
			cout<<"enter name";
		//	cin.get(name,10);
		cin>>name;
			cout<<"enter roll no";
			cin>>roll;
		}
		void display(){
			cout<<"Your name is: "<<name<<endl;
			cout<<"Your roll no is: "<<roll<<endl;
		}
	
};
int  main(){
	int n;
	cout<<"how many record do you want to enter"<<endl;
	cin>>n;
	student obj[n];
	for(int i=0;i<n;i++){
		cout<<"Enter record no "<<i+1<<endl;
		obj[i].getdata();
	}
	for(int i=0;i<n;i++){
		cout<<"record: "<<i+1<<endl;
		obj[i].display();
	}
	return 0;
}