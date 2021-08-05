#pragma once
//#include "MyForm.h"
#include"group.h"
#include"group2.h"
#include<string>




















using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace System::Runtime::InteropServices;






[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
IntPtr CreateObject_API();




delegate void send_book_dg(String^, String^, String^, String^, String^, String^, String^, String^);



[UnmanagedFunctionPointerAttribute(CallingConvention::Cdecl)]
delegate void UIMessag(std::string name, std::string writer, std::string price, std::string score, std::string genre, std::string book, std::string pathpicture, std::string pathfile);






[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void ViewBook_API(IntPtr db, UIMessag^ a);











namespace Client {
	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::UserControl
	{
		
		
		send_book_dg^ Event_book;
		UIMessag^ Event_message;
	private: Guna::UI::WinForms::GunaPictureBox^ HomePicBox3;
	private: Guna::UI::WinForms::GunaPictureBox^ HomePicBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;

		
		IntPtr db;
		
		
	public:
		Home(void)
		{
			InitializeComponent();
	Event_book += gcnew send_book_dg(this, &Home::a);
			Event_message += gcnew UIMessag(this, &Home::b);
			db= CreateObject_API();
				
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::GroupBox^ TOPPANEL;

	private: Guna::UI::WinForms::GunaPictureBox^ HomePicBox1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: Guna::UI::WinForms::GunaGroupBox^ Genre_GB;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton3;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: Guna::UI::WinForms::GunaGroupBox^ gunaGroupBox3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: Guna::UI::WinForms::GunaGroupBox^ gunaGroupBox4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;


	private: Guna::UI::WinForms::GunaGroupBox^ gunaGroupBox5;
private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton4;
private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton1;
private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->TOPPANEL = (gcnew System::Windows::Forms::GroupBox());
			this->HomePicBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->Genre_GB = (gcnew Guna::UI::WinForms::GunaGroupBox());
			this->gunaGradientButton3 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->gunaGroupBox3 = (gcnew Guna::UI::WinForms::GunaGroupBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->gunaGroupBox4 = (gcnew Guna::UI::WinForms::GunaGroupBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->gunaGroupBox5 = (gcnew Guna::UI::WinForms::GunaGroupBox());
			this->gunaGradientButton4 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton1 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->HomePicBox2 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->HomePicBox3 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->Genre_GB->SuspendLayout();
			this->panel2->SuspendLayout();
			this->gunaGroupBox3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->gunaGroupBox4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->gunaGroupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox3))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Home::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 3040;
			this->timer2->Tick += gcnew System::EventHandler(this, &Home::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 3100;
			this->timer3->Tick += gcnew System::EventHandler(this, &Home::timer3_Tick);
			// 
			// TOPPANEL
			// 
			this->TOPPANEL->AutoSize = true;
			this->TOPPANEL->Dock = System::Windows::Forms::DockStyle::Top;
			this->TOPPANEL->Location = System::Drawing::Point(0, 0);
			this->TOPPANEL->Margin = System::Windows::Forms::Padding(2);
			this->TOPPANEL->Name = L"TOPPANEL";
			this->TOPPANEL->Padding = System::Windows::Forms::Padding(2);
			this->TOPPANEL->Size = System::Drawing::Size(772, 3);
			this->TOPPANEL->TabIndex = 2;
			this->TOPPANEL->TabStop = false;
			this->TOPPANEL->Enter += gcnew System::EventHandler(this, &Home::TOPPANEL_Enter);
			// 
			// HomePicBox1
			// 
			this->HomePicBox1->BaseColor = System::Drawing::Color::White;
			this->HomePicBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->HomePicBox1->Location = System::Drawing::Point(0, 0);
			this->HomePicBox1->Margin = System::Windows::Forms::Padding(2);
			this->HomePicBox1->Name = L"HomePicBox1";
			this->HomePicBox1->Size = System::Drawing::Size(772, 143);
			this->HomePicBox1->TabIndex = 4;
			this->HomePicBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->AutoScroll = true;
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button10);
			this->panel3->Controls->Add(this->button12);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->button15);
			this->panel3->Controls->Add(this->button16);
			this->panel3->Controls->Add(this->button18);
			this->panel3->Controls->Add(this->button17);
			this->panel3->Controls->Add(this->button19);
			this->panel3->Controls->Add(this->button20);
			this->panel3->Location = System::Drawing::Point(22, -8);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(698, 135);
			this->panel3->TabIndex = 9;
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(244, 0);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 113);
			this->button9->TabIndex = 15;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(752, 0);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 113);
			this->button10->TabIndex = 14;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(667, 0);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 113);
			this->button12->TabIndex = 12;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(582, 0);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 113);
			this->button14->TabIndex = 9;
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(-11, 0);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 113);
			this->button15->TabIndex = 8;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Home::button15_Click);
			// 
			// button16
			// 
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(497, 0);
			this->button16->Margin = System::Windows::Forms::Padding(2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 113);
			this->button16->TabIndex = 7;
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(328, 2);
			this->button18->Margin = System::Windows::Forms::Padding(2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 113);
			this->button18->TabIndex = 5;
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(413, 3);
			this->button17->Margin = System::Windows::Forms::Padding(2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 113);
			this->button17->TabIndex = 6;
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(159, 0);
			this->button19->Margin = System::Windows::Forms::Padding(2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 113);
			this->button19->TabIndex = 4;
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
			this->button20->Location = System::Drawing::Point(75, 8);
			this->button20->Margin = System::Windows::Forms::Padding(2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(80, 113);
			this->button20->TabIndex = 2;
			this->button20->UseVisualStyleBackColor = true;
			// 
			// Genre_GB
			// 
			this->Genre_GB->AutoScroll = true;
			this->Genre_GB->BackColor = System::Drawing::Color::Transparent;
			this->Genre_GB->BaseColor = System::Drawing::Color::White;
			this->Genre_GB->BorderColor = System::Drawing::Color::DarkGray;
			this->Genre_GB->Controls->Add(this->panel3);
			this->Genre_GB->Dock = System::Windows::Forms::DockStyle::Right;
			this->Genre_GB->LineColor = System::Drawing::Color::Transparent;
			this->Genre_GB->Location = System::Drawing::Point(102, 0);
			this->Genre_GB->Margin = System::Windows::Forms::Padding(2);
			this->Genre_GB->Name = L"Genre_GB";
			this->Genre_GB->Size = System::Drawing::Size(670, 158);
			this->Genre_GB->TabIndex = 1;
			this->Genre_GB->Text = L" بر اساس ژانر";
			this->Genre_GB->TextLocation = System::Drawing::Point(830, 8);
			// 
			// gunaGradientButton3
			// 
			this->gunaGradientButton3->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton3->AnimationSpeed = 0.03F;
			this->gunaGradientButton3->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton3->BaseColor2 = System::Drawing::Color::Fuchsia;
			this->gunaGradientButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton3->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton3.Image")));
			this->gunaGradientButton3->ImageSize = System::Drawing::Size(0, 0);
			this->gunaGradientButton3->Location = System::Drawing::Point(25, 57);
			this->gunaGradientButton3->Margin = System::Windows::Forms::Padding(2);
			this->gunaGradientButton3->Name = L"gunaGradientButton3";
			this->gunaGradientButton3->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton3->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->OnHoverImage = nullptr;
			this->gunaGradientButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->Size = System::Drawing::Size(98, 34);
			this->gunaGradientButton3->TabIndex = 5;
			this->gunaGradientButton3->Text = L"بیشتر";
			this->gunaGradientButton3->Click += gcnew System::EventHandler(this, &Home::gunaGradientButton3_Click);
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Location = System::Drawing::Point(29, -11);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(698, 119);
			this->panel2->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(244, 0);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 113);
			this->button1->TabIndex = 15;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(752, 0);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 113);
			this->button13->TabIndex = 14;
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(667, 0);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 113);
			this->button11->TabIndex = 12;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(582, 0);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 113);
			this->button8->TabIndex = 9;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(-11, 0);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 113);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Home::button7_Click);
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(497, 0);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 113);
			this->button6->TabIndex = 7;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(413, 0);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 113);
			this->button5->TabIndex = 6;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(328, 0);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 113);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(159, 0);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 113);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(80, 0);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 113);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// gunaGroupBox3
			// 
			this->gunaGroupBox3->BackColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox3->BaseColor = System::Drawing::Color::White;
			this->gunaGroupBox3->BorderColor = System::Drawing::Color::Gainsboro;
			this->gunaGroupBox3->Controls->Add(this->panel2);
			this->gunaGroupBox3->Dock = System::Windows::Forms::DockStyle::Right;
			this->gunaGroupBox3->LineColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox3->Location = System::Drawing::Point(124, 0);
			this->gunaGroupBox3->Margin = System::Windows::Forms::Padding(2);
			this->gunaGroupBox3->Name = L"gunaGroupBox3";
			this->gunaGroupBox3->Size = System::Drawing::Size(648, 170);
			this->gunaGroupBox3->TabIndex = 2;
			this->gunaGroupBox3->Text = L"جدیدترین";
			this->gunaGroupBox3->TextLocation = System::Drawing::Point(850, 8);
			// 
			// panel4
			// 
			this->panel4->AutoScroll = true;
			this->panel4->Controls->Add(this->button21);
			this->panel4->Controls->Add(this->button22);
			this->panel4->Controls->Add(this->button23);
			this->panel4->Controls->Add(this->button24);
			this->panel4->Controls->Add(this->button25);
			this->panel4->Controls->Add(this->button26);
			this->panel4->Controls->Add(this->button27);
			this->panel4->Controls->Add(this->button28);
			this->panel4->Controls->Add(this->button29);
			this->panel4->Controls->Add(this->button30);
			this->panel4->Location = System::Drawing::Point(29, -12);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(698, 119);
			this->panel4->TabIndex = 9;
			// 
			// button21
			// 
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->Location = System::Drawing::Point(244, 0);
			this->button21->Margin = System::Windows::Forms::Padding(2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(80, 113);
			this->button21->TabIndex = 15;
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.Image")));
			this->button22->Location = System::Drawing::Point(752, 0);
			this->button22->Margin = System::Windows::Forms::Padding(2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(80, 113);
			this->button22->TabIndex = 14;
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.Image")));
			this->button23->Location = System::Drawing::Point(667, 0);
			this->button23->Margin = System::Windows::Forms::Padding(2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(80, 113);
			this->button23->TabIndex = 12;
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.Image")));
			this->button24->Location = System::Drawing::Point(582, 0);
			this->button24->Margin = System::Windows::Forms::Padding(2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(80, 113);
			this->button24->TabIndex = 9;
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.Image")));
			this->button25->Location = System::Drawing::Point(-11, 0);
			this->button25->Margin = System::Windows::Forms::Padding(2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(80, 113);
			this->button25->TabIndex = 8;
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.Image")));
			this->button26->Location = System::Drawing::Point(497, 0);
			this->button26->Margin = System::Windows::Forms::Padding(2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(80, 113);
			this->button26->TabIndex = 7;
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.Image")));
			this->button27->Location = System::Drawing::Point(413, 0);
			this->button27->Margin = System::Windows::Forms::Padding(2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(80, 113);
			this->button27->TabIndex = 6;
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.Image")));
			this->button28->Location = System::Drawing::Point(328, 0);
			this->button28->Margin = System::Windows::Forms::Padding(2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(80, 113);
			this->button28->TabIndex = 5;
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.Image")));
			this->button29->Location = System::Drawing::Point(159, 0);
			this->button29->Margin = System::Windows::Forms::Padding(2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(80, 113);
			this->button29->TabIndex = 4;
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.Image")));
			this->button30->Location = System::Drawing::Point(80, 0);
			this->button30->Margin = System::Windows::Forms::Padding(2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(80, 113);
			this->button30->TabIndex = 2;
			this->button30->UseVisualStyleBackColor = true;
			// 
			// gunaGroupBox4
			// 
			this->gunaGroupBox4->BackColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox4->BaseColor = System::Drawing::Color::White;
			this->gunaGroupBox4->BorderColor = System::Drawing::Color::Gainsboro;
			this->gunaGroupBox4->Controls->Add(this->panel4);
			this->gunaGroupBox4->Dock = System::Windows::Forms::DockStyle::Right;
			this->gunaGroupBox4->LineColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox4->Location = System::Drawing::Point(124, 0);
			this->gunaGroupBox4->Margin = System::Windows::Forms::Padding(2);
			this->gunaGroupBox4->Name = L"gunaGroupBox4";
			this->gunaGroupBox4->Size = System::Drawing::Size(648, 150);
			this->gunaGroupBox4->TabIndex = 3;
			this->gunaGroupBox4->Text = L"نشر روز";
			this->gunaGroupBox4->TextLocation = System::Drawing::Point(850, 8);
			// 
			// panel5
			// 
			this->panel5->AutoScroll = true;
			this->panel5->Controls->Add(this->button31);
			this->panel5->Controls->Add(this->button32);
			this->panel5->Controls->Add(this->button33);
			this->panel5->Controls->Add(this->button34);
			this->panel5->Controls->Add(this->button35);
			this->panel5->Controls->Add(this->button36);
			this->panel5->Controls->Add(this->button37);
			this->panel5->Controls->Add(this->button38);
			this->panel5->Controls->Add(this->button39);
			this->panel5->Controls->Add(this->button40);
			this->panel5->Location = System::Drawing::Point(32, 11);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(698, 119);
			this->panel5->TabIndex = 9;
			// 
			// button31
			// 
			this->button31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.Image")));
			this->button31->Location = System::Drawing::Point(244, 0);
			this->button31->Margin = System::Windows::Forms::Padding(2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(80, 113);
			this->button31->TabIndex = 15;
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.Image")));
			this->button32->Location = System::Drawing::Point(752, 0);
			this->button32->Margin = System::Windows::Forms::Padding(2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(80, 113);
			this->button32->TabIndex = 14;
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.Image")));
			this->button33->Location = System::Drawing::Point(667, 0);
			this->button33->Margin = System::Windows::Forms::Padding(2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(80, 113);
			this->button33->TabIndex = 12;
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.Image")));
			this->button34->Location = System::Drawing::Point(582, 0);
			this->button34->Margin = System::Windows::Forms::Padding(2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(80, 113);
			this->button34->TabIndex = 9;
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.Image")));
			this->button35->Location = System::Drawing::Point(-11, 0);
			this->button35->Margin = System::Windows::Forms::Padding(2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(80, 113);
			this->button35->TabIndex = 8;
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button36.Image")));
			this->button36->Location = System::Drawing::Point(497, 0);
			this->button36->Margin = System::Windows::Forms::Padding(2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(80, 113);
			this->button36->TabIndex = 7;
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button37.Image")));
			this->button37->Location = System::Drawing::Point(413, 0);
			this->button37->Margin = System::Windows::Forms::Padding(2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(80, 113);
			this->button37->TabIndex = 6;
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button38.Image")));
			this->button38->Location = System::Drawing::Point(328, 0);
			this->button38->Margin = System::Windows::Forms::Padding(2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(80, 113);
			this->button38->TabIndex = 5;
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button39.Image")));
			this->button39->Location = System::Drawing::Point(159, 0);
			this->button39->Margin = System::Windows::Forms::Padding(2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(80, 113);
			this->button39->TabIndex = 4;
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button40.Image")));
			this->button40->Location = System::Drawing::Point(80, 0);
			this->button40->Margin = System::Windows::Forms::Padding(2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(80, 113);
			this->button40->TabIndex = 2;
			this->button40->UseVisualStyleBackColor = true;
			// 
			// gunaGroupBox5
			// 
			this->gunaGroupBox5->BackColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox5->BaseColor = System::Drawing::Color::White;
			this->gunaGroupBox5->BorderColor = System::Drawing::Color::Gainsboro;
			this->gunaGroupBox5->Controls->Add(this->panel5);
			this->gunaGroupBox5->Dock = System::Windows::Forms::DockStyle::Right;
			this->gunaGroupBox5->LineColor = System::Drawing::Color::Transparent;
			this->gunaGroupBox5->Location = System::Drawing::Point(124, 0);
			this->gunaGroupBox5->Margin = System::Windows::Forms::Padding(2);
			this->gunaGroupBox5->Name = L"gunaGroupBox5";
			this->gunaGroupBox5->Size = System::Drawing::Size(648, 100);
			this->gunaGroupBox5->TabIndex = 4;
			this->gunaGroupBox5->Text = L"بیوگرافی";
			this->gunaGroupBox5->TextLocation = System::Drawing::Point(850, 8);
			// 
			// gunaGradientButton4
			// 
			this->gunaGradientButton4->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton4->AnimationSpeed = 0.03F;
			this->gunaGradientButton4->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton4->BaseColor2 = System::Drawing::Color::Fuchsia;
			this->gunaGradientButton4->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton4->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton4->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton4.Image")));
			this->gunaGradientButton4->ImageSize = System::Drawing::Size(0, 0);
			this->gunaGradientButton4->Location = System::Drawing::Point(25, 34);
			this->gunaGradientButton4->Margin = System::Windows::Forms::Padding(2);
			this->gunaGradientButton4->Name = L"gunaGradientButton4";
			this->gunaGradientButton4->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton4->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->OnHoverImage = nullptr;
			this->gunaGradientButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->Size = System::Drawing::Size(98, 34);
			this->gunaGradientButton4->TabIndex = 12;
			this->gunaGradientButton4->Text = L"بیشتر";
			this->gunaGradientButton4->Click += gcnew System::EventHandler(this, &Home::gunaGradientButton4_Click);
			// 
			// gunaGradientButton1
			// 
			this->gunaGradientButton1->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton1->AnimationSpeed = 0.03F;
			this->gunaGradientButton1->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton1->BaseColor2 = System::Drawing::Color::Fuchsia;
			this->gunaGradientButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton1->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton1.Image")));
			this->gunaGradientButton1->ImageSize = System::Drawing::Size(0, 0);
			this->gunaGradientButton1->Location = System::Drawing::Point(25, 56);
			this->gunaGradientButton1->Margin = System::Windows::Forms::Padding(2);
			this->gunaGradientButton1->Name = L"gunaGradientButton1";
			this->gunaGradientButton1->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton1->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton1->OnHoverImage = nullptr;
			this->gunaGradientButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->Size = System::Drawing::Size(98, 34);
			this->gunaGradientButton1->TabIndex = 13;
			this->gunaGradientButton1->Text = L"بیشتر";
			this->gunaGradientButton1->Click += gcnew System::EventHandler(this, &Home::gunaGradientButton1_Click);
			// 
			// gunaGradientButton2
			// 
			this->gunaGradientButton2->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton2->AnimationSpeed = 0.03F;
			this->gunaGradientButton2->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton2->BaseColor2 = System::Drawing::Color::Fuchsia;
			this->gunaGradientButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton2->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton2.Image")));
			this->gunaGradientButton2->ImageSize = System::Drawing::Size(0, 0);
			this->gunaGradientButton2->Location = System::Drawing::Point(25, 31);
			this->gunaGradientButton2->Margin = System::Windows::Forms::Padding(2);
			this->gunaGradientButton2->Name = L"gunaGradientButton2";
			this->gunaGradientButton2->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton2->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->OnHoverImage = nullptr;
			this->gunaGradientButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->Size = System::Drawing::Size(98, 34);
			this->gunaGradientButton2->TabIndex = 14;
			this->gunaGradientButton2->Text = L"بیشتر";
			this->gunaGradientButton2->Click += gcnew System::EventHandler(this, &Home::gunaGradientButton2_Click);
			// 
			// HomePicBox2
			// 
			this->HomePicBox2->BaseColor = System::Drawing::Color::White;
			this->HomePicBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomePicBox2.Image")));
			this->HomePicBox2->Location = System::Drawing::Point(7, 0);
			this->HomePicBox2->Margin = System::Windows::Forms::Padding(2);
			this->HomePicBox2->Name = L"HomePicBox2";
			this->HomePicBox2->Size = System::Drawing::Size(767, 138);
			this->HomePicBox2->TabIndex = 5;
			this->HomePicBox2->TabStop = false;
			// 
			// HomePicBox3
			// 
			this->HomePicBox3->BaseColor = System::Drawing::Color::White;
			this->HomePicBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->HomePicBox3->Location = System::Drawing::Point(0, 0);
			this->HomePicBox3->Margin = System::Windows::Forms::Padding(2);
			this->HomePicBox3->Name = L"HomePicBox3";
			this->HomePicBox3->Size = System::Drawing::Size(772, 100);
			this->HomePicBox3->TabIndex = 6;
			this->HomePicBox3->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Genre_GB);
			this->panel1->Controls->Add(this->gunaGradientButton3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 146);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(772, 158);
			this->panel1->TabIndex = 10;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->HomePicBox1);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(772, 143);
			this->panel6->TabIndex = 0;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->HomePicBox2);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(0, 304);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(772, 147);
			this->panel8->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->gunaGroupBox3);
			this->panel7->Controls->Add(this->gunaGradientButton4);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(0, 451);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(772, 170);
			this->panel7->TabIndex = 15;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->gunaGroupBox4);
			this->panel9->Controls->Add(this->gunaGradientButton1);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(0, 621);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(772, 150);
			this->panel9->TabIndex = 13;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->HomePicBox3);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel10->Location = System::Drawing::Point(0, 771);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(772, 100);
			this->panel10->TabIndex = 16;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->gunaGroupBox5);
			this->panel11->Controls->Add(this->gunaGradientButton2);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel11->Location = System::Drawing::Point(0, 871);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(772, 100);
			this->panel11->TabIndex = 7;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->TOPPANEL);
			this->Enabled = false;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Home";
			this->Size = System::Drawing::Size(772, 543);
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::Home_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->Genre_GB->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->gunaGroupBox3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->gunaGroupBox4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->gunaGroupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomePicBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private:
	group^ Group = gcnew group();
	group^ Group2 = gcnew group();
private: System::Void maskedTextBox2_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}

		   //
		   //BE CAREFUL :
		   // 		 TRYING TO CHANGE THE FORMAT OF PICTURE BOX'S MUST FOLLOW TGIS RULE FOR NAMING
		   // 		 OTHERWISE IT CAUSE PROBLEMS
		   // 		 =>HomePicBox1 ... HomePicBox2 etc .
		   // 		 Follow it to prevent facing Errors
		   //

		   bool IS_PB1_ENABLED = true;
		   bool IS_PB2_ENABLED;
		   bool IS_PB3_ENABLED;
   void a(String^ name, String^ writer, String^ price, String^ score, String^ genre, String^ book, String^ pathpicture, String^ pathfile)
		   {

	   if (this->InvokeRequired)
	   {
		   this->Invoke(Event_book, name, writer, price, score, genre, book, pathpicture, pathfile);
		  


	   }






	   MessageBox::Show("\nname : "+name+"\nwriter : " + writer + "\nprice : "+price+"\nscore : "+score+"\ngenre : "+"\nbook description : "+book  );
		   }
		   void b(std::string name, std::string writer, std::string price, std::string score, std::string genre, std::string book, std::string pathpicture, std::string pathfile)
		   {




			   a(gcnew String(name.c_str()), gcnew String(writer.c_str()), gcnew String(price.c_str()), gcnew String(score.c_str()), gcnew String(genre.c_str()), gcnew String(book.c_str()), gcnew String(pathpicture.c_str()), gcnew String(pathfile.c_str()));



		   }
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		timer1->Stop();

		if (IS_PB1_ENABLED == true)
		{
			HomePicBox1->Show();
			HomePicBox2->Hide();
			HomePicBox3->Hide();
			TOPPANEL->Refresh();
		}

		IS_PB1_ENABLED = false;
		IS_PB2_ENABLED = true;
		IS_PB3_ENABLED = false;

		timer2->Start();
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {

		timer2->Stop();
		if (IS_PB2_ENABLED == true)
		{
			HomePicBox1->Hide();
			HomePicBox2->Show();
			HomePicBox3->Hide();
			TOPPANEL->Refresh();
		}

		IS_PB1_ENABLED = false;
		IS_PB2_ENABLED = false;
		IS_PB3_ENABLED = true;

		timer3->Start();
	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {

		timer3->Stop();
		if (IS_PB3_ENABLED == true)
		{

			HomePicBox1->Hide();
			HomePicBox2->Hide();
			HomePicBox3->Show();
			TOPPANEL->Refresh();

		}

		IS_PB1_ENABLED = true;
		IS_PB3_ENABLED = false;
		IS_PB2_ENABLED = false;
		timer1->Start();


	}
		   bool First_move = false;
	private: System::Void Home_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		First_move = true;
		if (First_move == true) {
			timer1->Start();
			First_move = false;
		}
		else {

			return;
		}
	}

	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void TOPPANEL_Enter(System::Object^ sender, System::EventArgs^ e) {
}
	   //bolean for all of the buttons if they are clicked
	   bool IS_1_CLICKED;
	   bool IS_2_CLICKED;
	   bool IS_3_CLICKED;
	   bool IS_4_CLICKED;
public: bool OPEN_FIRST_DIALOG()
	{
	//button 3 & 4
	if (IS_3_CLICKED || IS_4_CLICKED)
		return true;
	  return false;
	 }
 public:bool OPEN_SECOND_DIALOG()
	 //button 2 & 1
	{
	 if (IS_2_CLICKED || IS_1_CLICKED)
		 return true;
	 return false;
 
	}

private: System::Void gunaGradientButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(Group2);
}
private: System::Void gunaGradientButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Controls->Clear();
	this->Controls->Add(Group);
}
private: System::Void gunaGradientButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(Group);
}

private: System::Void gunaGradientButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(Group2);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e)
{
	ViewBook_API(db, Event_message);
}
};
}
