#pragma once
#pragma once

#include<iostream>
#include<string>
#include"DataBase.h"


#pragma comment(lib,"sqlite3.lib")
using namespace std;

#ifdef UIAPI
#define UIAPI __declspec(dllexport)
#else
#define UIAPI  __declspec(dllimport)
#endif // DEBUG

typedef void(*UIBOOK)(std::string name, std::string writer, std::string price, std::string score, std::string genre, std::string book, std::string pathpicture, std::string pathfile);
UIBOOK  uibook;






extern "C" UIAPI DataBase * CreateObject_API();




extern "C" UIAPI void KillObject_API(DataBase * db);


extern "C" UIAPI void ViewBook_API(DataBase * db, UIBOOK a);


extern "C" UIAPI void InsertProduct_API(DataBase * db, int id, wstring name, wstring filename, wstring bookdescription, wstring writer, wstring genre, wstring score, wstring price,wstring pathfilepicture);
extern "C" UIAPI void ReplaceProduct_API(DataBase * db, int id, wstring name, wstring filename, wstring bookdescription, wstring writer, wstring genre, wstring score, wstring price, wstring pathfilepicture);
extern "C" UIAPI void Select_Product_API(DataBase * db, wstring name);

extern "C" UIAPI void GetProductFile(DataBase * db, wstring name, wstring path);

extern "C" UIAPI void GetProductFile2(DataBase * db, wstring name, wstring path);

extern "C" UIAPI int GetProductId(DataBase * db, wstring name);
extern "C" UIAPI bool checknamebook(DataBase * db, wstring name);


extern "C" UIAPI void DeleteProduct(DataBase * db, wstring name);


#pragma region Insertion_server
extern "C" UIAPI bool InsertAdmin_API(DataBase* db, string username, string password,string Email, string path);
extern "C" UIAPI int GetUsernametRowId_API(DataBase* db, wstring username);
extern "C" UIAPI void InsertAdmin_Other_API(DataBase * db,wstring username ,wstring FirstName, wstring LastName, wstring mobilenumber, wstring address, wstring postcodehome);
#pragma endregion
#pragma region Update_Server
extern "C" UIAPI void UpdateServerUsername_API(DataBase* db, string usernamelast, string usernamenew);
extern "C" UIAPI void  UpdateServerPassword_API(DataBase* db, string passwordlast, string passwordnew);
#pragma endregion
#pragma region Server_signup
extern "C" UIAPI bool Signup_Admin_Username_Api(DataBase* db, string username);
extern "C" UIAPI bool Signup_Admin_Password_API(DataBase* db, string password);
extern "C" UIAPI bool Check_Admin_Username_API(DataBase * db, string username, string password);
#pragma endregion
#pragma region Profile_Picture
extern "C" UIAPI void Set_Profile_Picture_API(DataBase* db, wstring path, wstring username);
extern "C" UIAPI void Get_Profile_Picture_API(DataBase* db, wstring username, wstring path);
extern "C" UIAPI void Set_Server_FileNmaeProfilePicture_API(DataBase* db, string username, string filenmaeprofilepicture);
#pragma endregion






//other
extern "C" UIAPI void send_FW(int a,wstring &str);


















