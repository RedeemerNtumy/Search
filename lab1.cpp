#include <iostream>
using namespace std;
int main(){
	string item;
	int count;
string students[10]={"Ama","Osei","Kofi","Clement","Adusei","Kwabena"};
	for(int i=0;i<6;i++){
		cout<<students[i]<<endl;
	}
	for(int j=6;j<10;j++){
		cout<<"Please the name at index "<<j<<endl;
		cin>>students[j];
	}
	for(int i=0;i<10;i++){
		cout<<students[i]<<endl;
	}
	cout<<"Enter item to be deleted"<<endl;
	cin>>item;
	for(int i=0;i<10;i++){
		if(students[i]==item){
				for(int j=i;j<9;j++){
		students[j]=students[j+1];
	    }
	    count++;
	    break;
			
		}
	}
if(count==0){
	cout<<"Element not found!!!!....";
}
else{
	cout<<"Element deleted successfully...!!"<<endl;
}	
	for(int i=0;i<9;i++){
		cout<<students[i]<<endl;
	}
	//linear search
	cout<<"Enter the number to search "<<endl;
	cin>>item;
	for(int i=0;i<9;i++){
		if(students[i]==item){
			cout<<"Name found at index "<<i<<endl;
		}
		else{
			cout<<"No match!!!! Please try again "<<endl;
		}
		
	}
	
}
