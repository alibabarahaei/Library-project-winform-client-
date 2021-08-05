#include "pch.h"
#include "regist.h"
#include <iostream>
#include <string>
#include "Source.h"
using namespace std;
User* CreatObject()
{
	User* cal = new User();
	return cal;
}
void Regist_API(User* cal, string username, string password, string Fname, string Lname)
{
	cal->Set_Username(username);
	cal->Set_Password(password);
	cal->Set_Fname(Fname);
	cal->Set_Lname(Lname);
}
bool Let_Username_API(User* cal,string Username)
{
	return cal->Let_Username(Username);
}
bool Let_Password_API(User* cal,string Password)
{
	return cal->Let_Password(Password);
}
