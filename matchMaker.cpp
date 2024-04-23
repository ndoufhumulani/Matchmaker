#include <iostream>
#include <string>

using namespace std;

int main(){
	string name;
	int age;
	char gender;
	
	cout<<"enter your name: ";
	cin>> name;
	
	cout<<"enter your age: ";
	cin>> age;
	
	cout<<"enter your gender: ";
	cin>> gender;
	
	if (age >=18){
		cout<< name <<" your elgible to choose a partner"<< endl;
		
		cout<<" Let help you find a partner"<< endl;
		
		cout<<" Do you prefer a prefer a partner who is Tall (Y), Short(O) or same height as you(S)? "<<endl;
		
		char preference;
		cin>> preference;
		
		if(preference == 'Y'){
				cout<< name <<" you prefer someone Shorter than you"<<endl;
			}
			else if(preference == 'O'){
				cout<< name <<" you prefer someone Taller than you"<<endl;
				
			}
			else if(preference == 'S'){
				cout<< name <<" you prefer someone of your same height"<<endl;
			}
				else{
				cout<<"your preference is invalid"<<endl;
			}
		}
	
			
				else{
			cout<< name<< "your still a minor, you can't choose a partner"<< endl;
		}
		
		return 0;
}
