#include "iostream"
#include "windows.h"
#include <string>
#include "fstream"
#include "sstream"
using namespace std;


void bin(int n, ofstream& f)
{
	char a[8]={'0','0','0','0','0','0','0','0'};
	int i=7;
	while(n!=0)
	{
		if(n%2==0)
			a[i]='0';
		else
			a[i]='1';
		n/=2;
		i--;
	}
	for(i=0;i<8;i++)
		f<<a[i];
	//cout<<i;
}
 
 
void gotoxy(int x, int y) { 
    COORD coord;

    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}



main(){
	int counter=0;
	while(counter!=12)
	{
		#ifdef _WIN32 
			system("cls");
		#elif __APPLE__ || __MACH__ || __linux__
			system("clear");
		#endif
		gotoxy(counter+1,counter+1);
		std::cout<<"Program to convert ip to 4 bytes";
		counter++;
	}
	while(counter!=0)
	{
		#ifdef _WIN32 
			system("cls");
		#elif __APPLE__ || __MACH__ || __linux__
			system("clear");
		#endif
		gotoxy(counter-1,counter-1);
		std::cout<<"Program to convert ip to 4 bytes";
		counter--;
	}
	ofstream file("ip.txt");
	string s;
	cout<<endl<<"Enter ur ip : ";
	cin>>s;
	s=s+".";
	string tmp="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='.')
		{
			stringstream ss;
			ss<<tmp;
			int x;
			ss>>x;
			bin(x,file);
			tmp="";
		}
		else{
		
		tmp+=s[i];}
	}
	file.close();
	
	system("java Integration_With_CPP ip.txt");
}



