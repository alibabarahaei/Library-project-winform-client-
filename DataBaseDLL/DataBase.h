#ifndef DATABASE_H
#define DATABASE_H
#include <string>
#include "sqlite3.h"
#include <fstream>
//#include"DataBaseDllSource.h"
#pragma comment(lib,"sqlite3.lib")
#define ThrowError(db) throw exception(sqlite3_errmsg(db));
using namespace std;



typedef void(*UIBOOK)(std::string name, std::string writer, std::string price, std::string score, std::string genre, std::string book, std::string pathpicture, std::string pathfile);







struct Book
{
	int BookId;
	string BookName;
	string filename;
};
class DataBase
{
private:
	sqlite3* db;
public:
	DataBase();
public:
	friend int callback(void* NotUsed, int argc, char** argv, char** azColName);
	 UIBOOK UIBOOK1;
	~DataBase();
	bool Open(string db, bool ThrowExc = true);
	void gf(std::string name, std::string writer, std::string price, std::string score, std::string genre, std::string book, std::string pathpicture, std::string pathfile);
	void Close(bool ThrowExc = true);
#pragma region Insertion-client
	void InsertCustomer(int username, int listid, bool ThrowExc = true);
	void InsertList(int productid, int listid, bool ThrowExc = true);
	void InsertProduct(int id, wstring name, wstring filename, wstring bookdescription, wstring writer, wstring genre, wstring score, wstring price,wstring pathfilpicture, bool ThrowExc);
	void ReplaceProduct(int id, wstring name, wstring filename, wstring bookdescription, wstring writer, wstring genre, wstring score, wstring price, wstring pathfilpicture, bool ThrowExc);
	int GetProductRowId(int id, bool ThrowExc = true);
	int GetProductId(wstring name , bool ThrowExc = true);
	sqlite3_blob* OpenProductFile(int rowid, bool readonly, bool ThrowExc = true);
	sqlite3_blob* OpenProductFile2(int rowid, bool readonly, bool ThrowExc = true);
	void WriteProductFile(sqlite3_blob* file, char* Buffer, long long Size, long long index, bool ThrowExc = true);
	void GetProductFile(wstring name, wstring path);
	void GetProductFile2(wstring name, wstring path);
	void CloseProductFile(sqlite3_blob* file, bool ThrowExc = true);
	string GetProductFileName(int id, bool ThrowExc = true);
	int GetUsernameProductRowId(string name, bool ThrowExc);
	bool checknamebook(wstring name );
	string convert_string_to_wstring(wstring a);
	wstring convert_wstring_to_string(string a);
#pragma endregion
#pragma region Select-client
	void Select_Product(wstring name);
	void ViewBook(UIBOOK a);
#pragma endregion
	//#pragma region Delete
	//	void DeleteCustomer(int username , int listid , bool ThrowExc );
	//	void DeleteCustomer(int product = 0, int listid , bool ThrowExc );
		void DeleteProduct(wstring name);
	//#pragma endregion
	#pragma region Update_Client
	void UpdateCustomerUsername(int usernamelast, int usernameNew, bool ThrowExc = true);
	void UpdateCustomerListId(int listidlast, int listidnew, bool ThrowExc);
	#pragma endregion
#pragma region Insertion_server
	bool InsertAdmin(string username, string password,string Email,string path, bool ThrowExc);
	void InsertAdmin_Other(wstring username ,wstring FirstName, wstring LastName,wstring mobilenumber,wstring address,wstring postcodehome,bool ThrowExc);
	int GetUsernametRowId(wstring username, bool ThrowExc);
	int GetUsernametRowId_string(string username, bool ThrowExc);
	sqlite3_blob* OpenProductFileforserver(int rowid, bool readonly, bool ThrowExc );
#pragma endregion
#pragma region Update_Server
	void  UpdateServerUsername(string usernamelast, string usernamenew, bool ThrowExc);
	void  UpdateServerPassword(string passwordlast, string passwordnew, bool ThrowExc);
#pragma endregion
#pragma region Server_signup
	bool Signup_Admin_Username(string username, bool ThrowExc);
	bool Signup_Admin_Password(string password, bool ThrowExc);
#pragma endregion
#pragma region Server_Change
	bool Change_Admin_Username(string usernamelast, string usernamenew, bool ThrowExc);
	bool Change_Admin_Password(wstring passwordlast, wstring passwordnew, bool ThrowExc);
#pragma endregion
#pragma region Server_Check
	bool Check_Admin_Username(string username, string password , bool ThrowExc);
#pragma endregion
#pragma region Profile_Picture
	void Set_Profile_Picture(wstring path, wstring username, bool ThrowExc);
	void Get_Profile_Picture(wstring username, wstring path, bool ThrowExc);
	void Set_Server_FileNmaeProfilePicture(string username, string filenmaeprofilepicture, bool ThrowExc);
#pragma endregion
#ifndef Other
	int GetCount(string tablename);
	Book* SearchBook(string bookname, int& BookCount, bool ThrowExc = true);
	void Lock();
	void UnLock();

#endif // !Other


};
#endif // !DATABASE_H
