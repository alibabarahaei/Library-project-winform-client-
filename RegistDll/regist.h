#pragma once
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
typedef void(*Result)(std::string res);
struct User
{
public:
	string Username;
	string Password;
	string Fname;
	string Lname;
	string Email;
	bool Let(string name);
	bool Let_Username(string Username);
	bool Let_Password(string Password);
public:
	void Set_Username(string username);
	void Set_Fname(string name);
	void Set_Lname(string name);
	void Set_Password(string password);
	string Get_password();
	string Get_username();
	string Get_Fname();
	string Get_Lname();
	User();
	void Regist(string username, string password, string Fname, string Lname);
};