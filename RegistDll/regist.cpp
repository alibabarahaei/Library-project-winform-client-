#include "pch.h"
#include "regist.h"
#include <iostream>
#include <string>
using namespace std;
bool User::Let(string name)
{
	for (auto achar : name)
	{
		if (!((achar >= 'A' && achar <= 'Z') || (achar >= 'a' && achar <= 'z')))
		{
			return false;
		}
	}
	return true;
}
bool User::Let_Username(string Username)
{
	if (Username.length() < 6)
	{
		return false;
	}
	for (auto achar : Username)//for(int i=0;i<username.lengh;i++)
	{
		if (!((achar >= 'A' && achar <= 'Z') || (achar >= 'a' && achar <= 'z')||(achar >= '0' && achar <= '9')|| achar==33|| achar==40|| achar==41|| achar==46|| achar==64))
		{
			return false;
		}
	}
	return true;
}
bool User::Let_Password(string Password)
{
	if (Password.length() < 8)
	{
		return false;
	}
	for (auto achar : Password)
	{
		if (!((achar >= 'A' && achar <= 'Z') || (achar >= 'a' && achar <= 'z') || (achar >= '0' && achar <= '9') || achar == 33 || achar == 40 || achar == 41 || achar == 46 || achar == 64))
		{
			return false;
		}
	}
	return true;
}
void User::Set_Username(string username)
{
	if (!Let_Username(username))
	{
		throw("The User Name must be larger than 4 characters and contain letters");
	}
	else
	{
		this->Username = username;
	}
}
void User::Set_Fname(string name)
{
	if (!Let(name))
	{
		throw("First name must be contain letters");
	}
	else
	{
		Fname = name;
	}
}
void User::Set_Lname(string name)
{
	if (!Let(name))
	{
		throw("Last Name must be contain letters");
	}
	else
	{
		Lname = name;
	}
}
void  User::Set_Password(string password)
{
	if (!Let_Password(password))
	{
		throw("The Pass Word must be larger than 8 characters and contain letters or number");
	}
	else
	{
		this->Password = password;
	}
}
string  User::Get_password()
{
	return this->Password;
}
string  User::Get_username()
{
	return this->Username;
}
string  User::Get_Fname()
{
	return this->Fname;
}
string  User::Get_Lname()
{
	return this->Lname;
}
User::User()
{
}
void User::Regist(string username, string password, string Fname, string Lname)
{
	Set_Username(username);
	Set_Password(password);
	Set_Fname(Fname);
	Set_Lname(Lname);
}