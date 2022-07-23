#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int check_number(){
	string str;
	again:
	getline(cin, str);
	for(int i = 0; i < str.length(); ++i){
		if(isdigit(str[i]) == false){
			cout<<"Invalid Input...try again!";
			goto again;
		}
		return stoi(str);
	}
}
int main(){
	int h,m,s,a,err;
	err=a=0;
	while(err==0){
		cout<<"Enter hour: "<<endl;
		h = check_number();
		cout<<"Enter minute: "<<endl;
		m = check_number();
		cout<<"Enter second: "<<endl;
		s = check_number();
		
		if(h<24 && m<60 && s<60)
			err++;
		else
			system("cls");
	}
	while(a==0){
		system("cls");
		cout<<"TIME: "<<h<<":"<<m<<":"<<s<<endl;
		Sleep(1000);
		s++;
		if(s > 59){
			s = 0;
			m += 1;
		}
		if(m > 59){
			m = 0;
			h += 1;
		}
		if(h > 24){
			h = 0;
		}
	}
	return 0;
}
