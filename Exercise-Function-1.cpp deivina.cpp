#include <iostream>
using namespace std;

int main()
{

}

void masuk_tak()
{
	char ans;
	char c;
	
	cout<<endl<<"Dia shoot masuk tak? {answer y-yes atau n-tidak}"<<endl;
	

	ans='y';
	while((c!='Y')&&(c!='y'))
    {
		cin>>ans;
		if(c!='n' and c!='n')
		cout<<endl<<"cakap lah bebetul, try again: "<<endl;
		}

	if(c=='n')
	{
		cout<<endl<<"the fudge?!";
		masuk_tak();
	}
	cout<<endl<<"chantek!"<<endl;
}


