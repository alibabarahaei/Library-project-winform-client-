
#include "pch.h"
#include <iostream>
#include <string>



using namespace std;
#ifdef UIAPI
#define UIAPI _declspec(dllexport)
#else 
#define UIAPI _declspec(dllimport)
#endif // UIAPI


extern "C" UIAPI void Start_API();

extern "C" UIAPI void sendmessage(string message);

extern "C" UIAPI void send_database();
