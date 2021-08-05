#include "pch.h"
#include "regist.h"
#include <iostream>
#include <string>
using namespace std;
#ifdef UIAPI
#define UIAPI _declspec(dllexport)
#else 
#define UIAPI _declspec(dllimport)
#endif // UIAPI




extern "C"  UIAPI User* CreatObject();
extern "C"  UIAPI void Regist_API(User*, string username, string password, string Fname, string Lname);
extern "C"  UIAPI bool Let_Username_API(User * ,string Username);
extern "C"  UIAPI bool Let_Password_API(User * ,string Password);