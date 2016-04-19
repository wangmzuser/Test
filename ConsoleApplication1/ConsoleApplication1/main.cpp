#include "Mydef.h"
#include <iostream>

int main()
{
	BookEntry myMsgBook("wangmz","china-wuhan","","");
	PhoneNumber myPhoneNume("010","15927404595");

	myMsgBook.AddPhoneNumber(myPhoneNume);
	myMsgBook.ShowAll();

	return 0;
}