#pragma once
#include"payment.h"
#include "search.h"
#include"Home.h"
#include"Paymentcount.h"
#include"CompleteInformationUserControl.h"
#include"payment.h"
#include"setting.h"
#include "group.h"
#include"group2.h"
#include"EnterUserControl.h"
#include"EnteranceForm.h"



using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading;
using namespace System::Runtime::InteropServices;
using namespace System::Threading;




[DllImport("SocketDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void sendmessage(std::string message);





[DllImport("SocketDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void send_database();




[DllImport("SocketDLL.dll", CallingConvention = CallingConvention::Cdecl)]
void Start_API();




namespace Client {





	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		//[System::Runtime::InteropServices::DllImport("user32.dll")] ;
	public:
		Thread^ soucket;
		MyForm(void)
		{
			InitializeComponent();
			soucket = gcnew Thread(gcnew ThreadStart(this, &MyForm::soucketstart));
            soucket->Start();
		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaGradient2Panel^ gunaGradient2Panel1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton3;
	private: Guna::UI::WinForms::GunaGradientPanel^ RIGHTBAR;
	private: Guna::UI::WinForms::GunaGradientPanel^ MainPanel;
	private: Guna::UI::WinForms::GunaGradientButton^ HOMEBTN;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox1;
	private: Guna::UI::WinForms::GunaGradientButton^ SEARCHBTN;
	private: Guna::UI::WinForms::GunaGradientButton^ BUYRECIETEBTN;
	private: Guna::UI::WinForms::GunaGradientButton^ SORTBTN;
	private: Guna::UI::WinForms::GunaGradientButton^ SETTINGBTN;
	private: Guna::UI::WinForms::GunaGradientButton^ MinMaxBar;
	private: Guna::UI::WinForms::GunaTransition^ RIGHTBAR_TRANSITION;
	private: System::Windows::Forms::Panel^ panel2;
	private: Guna::UI::WinForms::GunaLabel^ WELCOMLABEL5;
	private: Guna::UI::WinForms::GunaLabel^ WELCOMELABEL4;
	private: Guna::UI::WinForms::GunaLabel^ WELCOMELABEL3;
	private: System::Windows::Forms::Panel^ panel1;
	private: Guna::UI::WinForms::GunaLabel^ WELCOMELABEL1;
	private: System::Windows::Forms::Timer^ Welcometimer;
	private: System::Windows::Forms::Timer^ WELCOMETIMER2;
	private: System::Windows::Forms::Timer^ WELCOMETIMER3;
	private: Guna::UI::WinForms::GunaAdvenceButton^ EnterButton;
	private: Guna::UI::WinForms::GunaButton^ BACKBTN;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::ComponentModel::IContainer^ components;
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
			Guna::UI::Animation::Animation^ animation1 = (gcnew Guna::UI::Animation::Animation());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->gunaGradient2Panel1 = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->BACKBTN = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton3 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton1 = (gcnew Guna::UI::WinForms::GunaButton());
			this->SETTINGBTN = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->MinMaxBar = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->SEARCHBTN = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->SORTBTN = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->BUYRECIETEBTN = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->RIGHTBAR = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->EnterButton = (gcnew Guna::UI::WinForms::GunaAdvenceButton());
			this->gunaCirclePictureBox1 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->HOMEBTN = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->MainPanel = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->WELCOMLABEL5 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->WELCOMELABEL4 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->WELCOMELABEL3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->WELCOMELABEL1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->RIGHTBAR_TRANSITION = (gcnew Guna::UI::WinForms::GunaTransition(this->components));
			this->Welcometimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->WELCOMETIMER2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->WELCOMETIMER3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->gunaGradient2Panel1->SuspendLayout();
			this->RIGHTBAR->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox1))->BeginInit();
			this->MainPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gunaGradient2Panel1
			// 
			this->gunaGradient2Panel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradient2Panel1->Controls->Add(this->BACKBTN);
			this->gunaGradient2Panel1->Controls->Add(this->gunaButton3);
			this->gunaGradient2Panel1->Controls->Add(this->gunaButton1);
			this->RIGHTBAR_TRANSITION->SetDecoration(this->gunaGradient2Panel1, Guna::UI::Animation::DecorationType::None);
			this->gunaGradient2Panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->gunaGradient2Panel1->GradientColor1 = System::Drawing::Color::DarkGray;
			this->gunaGradient2Panel1->GradientColor2 = System::Drawing::Color::White;
			this->gunaGradient2Panel1->Location = System::Drawing::Point(0, 0);
			this->gunaGradient2Panel1->Margin = System::Windows::Forms::Padding(2);
			this->gunaGradient2Panel1->Name = L"gunaGradient2Panel1";
			this->gunaGradient2Panel1->Size = System::Drawing::Size(975, 31);
			this->gunaGradient2Panel1->TabIndex = 0;
			this->gunaGradient2Panel1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::gunaGradient2Panel1_MouseDoubleClick);
			// 
			// BACKBTN
			// 
			this->BACKBTN->Animated = true;
			this->BACKBTN->AnimationHoverSpeed = 0.07F;
			this->BACKBTN->AnimationSpeed = 0.03F;
			this->BACKBTN->BaseColor = System::Drawing::Color::Transparent;
			this->BACKBTN->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->BACKBTN, Guna::UI::Animation::DecorationType::None);
			this->BACKBTN->DialogResult = System::Windows::Forms::DialogResult::None;
			this->BACKBTN->FocusedColor = System::Drawing::Color::Empty;
			this->BACKBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->BACKBTN->ForeColor = System::Drawing::Color::White;
			this->BACKBTN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BACKBTN.Image")));
			this->BACKBTN->ImageSize = System::Drawing::Size(20, 20);
			this->BACKBTN->Location = System::Drawing::Point(2, 2);
			this->BACKBTN->Margin = System::Windows::Forms::Padding(2);
			this->BACKBTN->Name = L"BACKBTN";
			this->BACKBTN->OnHoverBaseColor = System::Drawing::Color::Transparent;
			this->BACKBTN->OnHoverBorderColor = System::Drawing::Color::Black;
			this->BACKBTN->OnHoverForeColor = System::Drawing::Color::White;
			this->BACKBTN->OnHoverImage = nullptr;
			this->BACKBTN->OnPressedColor = System::Drawing::Color::Black;
			this->BACKBTN->Size = System::Drawing::Size(46, 28);
			this->BACKBTN->TabIndex = 11;
			this->BACKBTN->Click += gcnew System::EventHandler(this, &MyForm::BACKBTN_Click);
			// 
			// gunaButton3
			// 
			this->gunaButton3->Animated = true;
			this->gunaButton3->AnimationHoverSpeed = 0.07F;
			this->gunaButton3->AnimationSpeed = 0.03F;
			this->gunaButton3->BaseColor = System::Drawing::Color::Transparent;
			this->gunaButton3->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->gunaButton3, Guna::UI::Animation::DecorationType::None);
			this->gunaButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton3->Dock = System::Windows::Forms::DockStyle::Right;
			this->gunaButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton3->ForeColor = System::Drawing::Color::White;
			this->gunaButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton3.Image")));
			this->gunaButton3->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton3->Location = System::Drawing::Point(895, 0);
			this->gunaButton3->Margin = System::Windows::Forms::Padding(2);
			this->gunaButton3->Name = L"gunaButton3";
			this->gunaButton3->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton3->OnHoverBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->gunaButton3->OnHoverForeColor = System::Drawing::Color::Red;
			this->gunaButton3->OnHoverImage = nullptr;
			this->gunaButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton3->Size = System::Drawing::Size(42, 31);
			this->gunaButton3->TabIndex = 3;
			this->gunaButton3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaButton3->Click += gcnew System::EventHandler(this, &MyForm::gunaButton3_Click);
			// 
			// gunaButton1
			// 
			this->gunaButton1->Animated = true;
			this->gunaButton1->AnimationHoverSpeed = 0.07F;
			this->gunaButton1->AnimationSpeed = 0.03F;
			this->gunaButton1->BaseColor = System::Drawing::Color::Transparent;
			this->gunaButton1->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->gunaButton1, Guna::UI::Animation::DecorationType::None);
			this->gunaButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton1->Dock = System::Windows::Forms::DockStyle::Right;
			this->gunaButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton1->ForeColor = System::Drawing::Color::White;
			this->gunaButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton1.Image")));
			this->gunaButton1->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton1->Location = System::Drawing::Point(937, 0);
			this->gunaButton1->Margin = System::Windows::Forms::Padding(2);
			this->gunaButton1->Name = L"gunaButton1";
			this->gunaButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton1->OnHoverForeColor = System::Drawing::Color::Red;
			this->gunaButton1->OnHoverImage = nullptr;
			this->gunaButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton1->Size = System::Drawing::Size(38, 31);
			this->gunaButton1->TabIndex = 0;
			this->gunaButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaButton1->Click += gcnew System::EventHandler(this, &MyForm::gunaButton1_Click);
			// 
			// SETTINGBTN
			// 
			this->SETTINGBTN->Animated = true;
			this->SETTINGBTN->AnimationHoverSpeed = 0.07F;
			this->SETTINGBTN->AnimationSpeed = 0.03F;
			this->SETTINGBTN->BackColor = System::Drawing::Color::Transparent;
			this->SETTINGBTN->BaseColor1 = System::Drawing::Color::Transparent;
			this->SETTINGBTN->BaseColor2 = System::Drawing::Color::Transparent;
			this->SETTINGBTN->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->SETTINGBTN, Guna::UI::Animation::DecorationType::None);
			this->SETTINGBTN->DialogResult = System::Windows::Forms::DialogResult::None;
			this->SETTINGBTN->FocusedColor = System::Drawing::Color::Empty;
			this->SETTINGBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->SETTINGBTN->ForeColor = System::Drawing::Color::White;
			this->SETTINGBTN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SETTINGBTN.Image")));
			this->SETTINGBTN->ImageAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SETTINGBTN->ImageSize = System::Drawing::Size(20, 20);
			this->SETTINGBTN->Location = System::Drawing::Point(195, 13);
			this->SETTINGBTN->Margin = System::Windows::Forms::Padding(2);
			this->SETTINGBTN->Name = L"SETTINGBTN";
			this->SETTINGBTN->OnHoverBaseColor1 = System::Drawing::Color::Red;
			this->SETTINGBTN->OnHoverBaseColor2 = System::Drawing::Color::Transparent;
			this->SETTINGBTN->OnHoverBorderColor = System::Drawing::Color::Black;
			this->SETTINGBTN->OnHoverForeColor = System::Drawing::Color::White;
			this->SETTINGBTN->OnHoverImage = nullptr;
			this->SETTINGBTN->OnPressedColor = System::Drawing::Color::Black;
			this->SETTINGBTN->Padding = System::Windows::Forms::Padding(0, 32, 0, 32);
			this->SETTINGBTN->Size = System::Drawing::Size(49, 39);
			this->SETTINGBTN->TabIndex = 2;
			this->SETTINGBTN->Click += gcnew System::EventHandler(this, &MyForm::SETTINGBTN_Click);
			// 
			// MinMaxBar
			// 
			this->MinMaxBar->Animated = true;
			this->MinMaxBar->AnimationHoverSpeed = 0.07F;
			this->MinMaxBar->AnimationSpeed = 0.03F;
			this->MinMaxBar->BackColor = System::Drawing::Color::Transparent;
			this->MinMaxBar->BaseColor1 = System::Drawing::Color::Transparent;
			this->MinMaxBar->BaseColor2 = System::Drawing::Color::Transparent;
			this->MinMaxBar->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->MinMaxBar, Guna::UI::Animation::DecorationType::None);
			this->MinMaxBar->DialogResult = System::Windows::Forms::DialogResult::None;
			this->MinMaxBar->FocusedColor = System::Drawing::Color::Empty;
			this->MinMaxBar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->MinMaxBar->ForeColor = System::Drawing::Color::White;
			this->MinMaxBar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MinMaxBar.Image")));
			this->MinMaxBar->ImageAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MinMaxBar->ImageSize = System::Drawing::Size(20, 20);
			this->MinMaxBar->Location = System::Drawing::Point(2, 13);
			this->MinMaxBar->Margin = System::Windows::Forms::Padding(2);
			this->MinMaxBar->Name = L"MinMaxBar";
			this->MinMaxBar->OnHoverBaseColor1 = System::Drawing::Color::Red;
			this->MinMaxBar->OnHoverBaseColor2 = System::Drawing::Color::Transparent;
			this->MinMaxBar->OnHoverBorderColor = System::Drawing::Color::Black;
			this->MinMaxBar->OnHoverForeColor = System::Drawing::Color::White;
			this->MinMaxBar->OnHoverImage = nullptr;
			this->MinMaxBar->OnPressedColor = System::Drawing::Color::Black;
			this->MinMaxBar->Padding = System::Windows::Forms::Padding(0, 32, 0, 32);
			this->MinMaxBar->Size = System::Drawing::Size(49, 39);
			this->MinMaxBar->TabIndex = 1;
			this->MinMaxBar->Click += gcnew System::EventHandler(this, &MyForm::gunaGradientButton5_Click);
			// 
			// SEARCHBTN
			// 
			this->SEARCHBTN->Animated = true;
			this->SEARCHBTN->AnimationHoverSpeed = 0.07F;
			this->SEARCHBTN->AnimationSpeed = 0.03F;
			this->SEARCHBTN->BackColor = System::Drawing::Color::Transparent;
			this->SEARCHBTN->BaseColor1 = System::Drawing::Color::DarkGoldenrod;
			this->SEARCHBTN->BaseColor2 = System::Drawing::Color::Transparent;
			this->SEARCHBTN->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->SEARCHBTN, Guna::UI::Animation::DecorationType::None);
			this->SEARCHBTN->DialogResult = System::Windows::Forms::DialogResult::None;
			this->SEARCHBTN->FocusedColor = System::Drawing::Color::Empty;
			this->SEARCHBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->SEARCHBTN->ForeColor = System::Drawing::Color::Black;
			this->SEARCHBTN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SEARCHBTN.Image")));
			this->SEARCHBTN->ImageSize = System::Drawing::Size(20, 20);
			this->SEARCHBTN->Location = System::Drawing::Point(37, 485);
			this->SEARCHBTN->Margin = System::Windows::Forms::Padding(2);
			this->SEARCHBTN->Name = L"SEARCHBTN";
			this->SEARCHBTN->OnHoverBaseColor1 = System::Drawing::Color::Transparent;
			this->SEARCHBTN->OnHoverBaseColor2 = System::Drawing::Color::Yellow;
			this->SEARCHBTN->OnHoverBorderColor = System::Drawing::Color::Black;
			this->SEARCHBTN->OnHoverForeColor = System::Drawing::Color::White;
			this->SEARCHBTN->OnHoverImage = nullptr;
			this->SEARCHBTN->OnPressedColor = System::Drawing::Color::Black;
			this->SEARCHBTN->Padding = System::Windows::Forms::Padding(0, 32, 0, 32);
			this->SEARCHBTN->Size = System::Drawing::Size(170, 56);
			this->SEARCHBTN->TabIndex = 9;
			this->SEARCHBTN->Text = L"جست و جو";
			this->SEARCHBTN->Click += gcnew System::EventHandler(this, &MyForm::SEARCHBTN_Click);
			// 
			// SORTBTN
			// 
			this->SORTBTN->Animated = true;
			this->SORTBTN->AnimationHoverSpeed = 0.07F;
			this->SORTBTN->AnimationSpeed = 0.03F;
			this->SORTBTN->BackColor = System::Drawing::Color::Transparent;
			this->SORTBTN->BaseColor1 = System::Drawing::Color::DarkGoldenrod;
			this->SORTBTN->BaseColor2 = System::Drawing::Color::Transparent;
			this->SORTBTN->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->SORTBTN, Guna::UI::Animation::DecorationType::None);
			this->SORTBTN->DialogResult = System::Windows::Forms::DialogResult::None;
			this->SORTBTN->FocusedColor = System::Drawing::Color::Empty;
			this->SORTBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->SORTBTN->ForeColor = System::Drawing::Color::Black;
			this->SORTBTN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SORTBTN.Image")));
			this->SORTBTN->ImageSize = System::Drawing::Size(20, 20);
			this->SORTBTN->Location = System::Drawing::Point(37, 334);
			this->SORTBTN->Margin = System::Windows::Forms::Padding(2);
			this->SORTBTN->Name = L"SORTBTN";
			this->SORTBTN->OnHoverBaseColor1 = System::Drawing::Color::Transparent;
			this->SORTBTN->OnHoverBaseColor2 = System::Drawing::Color::Yellow;
			this->SORTBTN->OnHoverBorderColor = System::Drawing::Color::Black;
			this->SORTBTN->OnHoverForeColor = System::Drawing::Color::White;
			this->SORTBTN->OnHoverImage = nullptr;
			this->SORTBTN->OnPressedColor = System::Drawing::Color::Black;
			this->SORTBTN->Padding = System::Windows::Forms::Padding(0, 32, 0, 32);
			this->SORTBTN->Size = System::Drawing::Size(170, 56);
			this->SORTBTN->TabIndex = 7;
			this->SORTBTN->Text = L"دسته بندی ها";
			// 
			// BUYRECIETEBTN
			// 
			this->BUYRECIETEBTN->Animated = true;
			this->BUYRECIETEBTN->AnimationHoverSpeed = 0.07F;
			this->BUYRECIETEBTN->AnimationSpeed = 0.03F;
			this->BUYRECIETEBTN->BackColor = System::Drawing::Color::Transparent;
			this->BUYRECIETEBTN->BaseColor1 = System::Drawing::Color::DarkGoldenrod;
			this->BUYRECIETEBTN->BaseColor2 = System::Drawing::Color::Transparent;
			this->BUYRECIETEBTN->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->BUYRECIETEBTN, Guna::UI::Animation::DecorationType::None);
			this->BUYRECIETEBTN->DialogResult = System::Windows::Forms::DialogResult::None;
			this->BUYRECIETEBTN->FocusedColor = System::Drawing::Color::Empty;
			this->BUYRECIETEBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->BUYRECIETEBTN->ForeColor = System::Drawing::Color::Black;
			this->BUYRECIETEBTN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BUYRECIETEBTN.Image")));
			this->BUYRECIETEBTN->ImageSize = System::Drawing::Size(20, 20);
			this->BUYRECIETEBTN->Location = System::Drawing::Point(37, 408);
			this->BUYRECIETEBTN->Margin = System::Windows::Forms::Padding(2);
			this->BUYRECIETEBTN->Name = L"BUYRECIETEBTN";
			this->BUYRECIETEBTN->OnHoverBaseColor1 = System::Drawing::Color::Transparent;
			this->BUYRECIETEBTN->OnHoverBaseColor2 = System::Drawing::Color::Yellow;
			this->BUYRECIETEBTN->OnHoverBorderColor = System::Drawing::Color::Black;
			this->BUYRECIETEBTN->OnHoverForeColor = System::Drawing::Color::White;
			this->BUYRECIETEBTN->OnHoverImage = nullptr;
			this->BUYRECIETEBTN->OnPressedColor = System::Drawing::Color::Black;
			this->BUYRECIETEBTN->Padding = System::Windows::Forms::Padding(0, 32, 0, 32);
			this->BUYRECIETEBTN->Size = System::Drawing::Size(170, 56);
			this->BUYRECIETEBTN->TabIndex = 8;
			this->BUYRECIETEBTN->Text = L"سبد خرید";
			this->BUYRECIETEBTN->Click += gcnew System::EventHandler(this, &MyForm::BUYRECIETEBTN_Click);
			// 
			// RIGHTBAR
			// 
			this->RIGHTBAR->BackColor = System::Drawing::Color::SteelBlue;
			this->RIGHTBAR->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RIGHTBAR.BackgroundImage")));
			this->RIGHTBAR->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RIGHTBAR->Controls->Add(this->button2);
			this->RIGHTBAR->Controls->Add(this->button1);
			this->RIGHTBAR->Controls->Add(this->EnterButton);
			this->RIGHTBAR->Controls->Add(this->SETTINGBTN);
			this->RIGHTBAR->Controls->Add(this->MinMaxBar);
			this->RIGHTBAR->Controls->Add(this->gunaCirclePictureBox1);
			this->RIGHTBAR->Controls->Add(this->HOMEBTN);
			this->RIGHTBAR->Controls->Add(this->SEARCHBTN);
			this->RIGHTBAR->Controls->Add(this->SORTBTN);
			this->RIGHTBAR->Controls->Add(this->BUYRECIETEBTN);
			this->RIGHTBAR_TRANSITION->SetDecoration(this->RIGHTBAR, Guna::UI::Animation::DecorationType::None);
			this->RIGHTBAR->Dock = System::Windows::Forms::DockStyle::Right;
			this->RIGHTBAR->GradientColor1 = System::Drawing::Color::SteelBlue;
			this->RIGHTBAR->GradientColor2 = System::Drawing::Color::SteelBlue;
			this->RIGHTBAR->GradientColor3 = System::Drawing::Color::SteelBlue;
			this->RIGHTBAR->GradientColor4 = System::Drawing::Color::SteelBlue;
			this->RIGHTBAR->Location = System::Drawing::Point(729, 31);
			this->RIGHTBAR->Margin = System::Windows::Forms::Padding(2);
			this->RIGHTBAR->Name = L"RIGHTBAR";
			this->RIGHTBAR->Quality = 100;
			this->RIGHTBAR->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RIGHTBAR->Size = System::Drawing::Size(246, 667);
			this->RIGHTBAR->TabIndex = 1;
			this->RIGHTBAR->Text = L"gunaGradientPanel1";
			// 
			// button2
			// 
			this->RIGHTBAR_TRANSITION->SetDecoration(this->button2, Guna::UI::Animation::DecorationType::None);
			this->button2->Location = System::Drawing::Point(208, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(36, 26);
			this->button2->TabIndex = 12;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->RIGHTBAR_TRANSITION->SetDecoration(this->button1, Guna::UI::Animation::DecorationType::None);
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(207, 57);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(36, 32);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// EnterButton
			// 
			this->EnterButton->Animated = true;
			this->EnterButton->AnimationHoverSpeed = 0.07F;
			this->EnterButton->AnimationSpeed = 0.03F;
			this->EnterButton->BackColor = System::Drawing::Color::Transparent;
			this->EnterButton->BaseColor = System::Drawing::Color::Transparent;
			this->EnterButton->BorderColor = System::Drawing::Color::White;
			this->EnterButton->CheckedBaseColor = System::Drawing::Color::Gray;
			this->EnterButton->CheckedBorderColor = System::Drawing::Color::Black;
			this->EnterButton->CheckedForeColor = System::Drawing::Color::White;
			this->EnterButton->CheckedImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EnterButton.CheckedImage")));
			this->EnterButton->CheckedLineColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->EnterButton, Guna::UI::Animation::DecorationType::None);
			this->EnterButton->DialogResult = System::Windows::Forms::DialogResult::None;
			this->EnterButton->FocusedColor = System::Drawing::Color::Empty;
			this->EnterButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->EnterButton->ForeColor = System::Drawing::Color::Transparent;
			this->EnterButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EnterButton.Image")));
			this->EnterButton->ImageSize = System::Drawing::Size(20, 20);
			this->EnterButton->LineColor = System::Drawing::Color::White;
			this->EnterButton->Location = System::Drawing::Point(50, 13);
			this->EnterButton->Margin = System::Windows::Forms::Padding(2);
			this->EnterButton->Name = L"EnterButton";
			this->EnterButton->OnHoverBaseColor = System::Drawing::Color::Transparent;
			this->EnterButton->OnHoverBorderColor = System::Drawing::Color::Black;
			this->EnterButton->OnHoverForeColor = System::Drawing::Color::White;
			this->EnterButton->OnHoverImage = nullptr;
			this->EnterButton->OnHoverLineColor = System::Drawing::Color::White;
			this->EnterButton->OnPressedColor = System::Drawing::Color::Black;
			this->EnterButton->Radius = 50;
			this->EnterButton->Size = System::Drawing::Size(135, 34);
			this->EnterButton->TabIndex = 10;
			this->EnterButton->Text = L"ورود به حساب کاربری";
			this->EnterButton->Click += gcnew System::EventHandler(this, &MyForm::EnterButton_Click);
			// 
			// gunaCirclePictureBox1
			// 
			this->gunaCirclePictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->gunaCirclePictureBox1->BaseColor = System::Drawing::Color::White;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->gunaCirclePictureBox1, Guna::UI::Animation::DecorationType::None);
			this->gunaCirclePictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox1.Image")));
			this->gunaCirclePictureBox1->Location = System::Drawing::Point(50, 57);
			this->gunaCirclePictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->gunaCirclePictureBox1->Name = L"gunaCirclePictureBox1";
			this->gunaCirclePictureBox1->Size = System::Drawing::Size(145, 157);
			this->gunaCirclePictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox1->TabIndex = 0;
			this->gunaCirclePictureBox1->TabStop = false;
			this->gunaCirclePictureBox1->UseTransfarantBackground = false;
			// 
			// HOMEBTN
			// 
			this->HOMEBTN->Animated = true;
			this->HOMEBTN->AnimationHoverSpeed = 0.07F;
			this->HOMEBTN->AnimationSpeed = 0.03F;
			this->HOMEBTN->BackColor = System::Drawing::Color::Transparent;
			this->HOMEBTN->BaseColor1 = System::Drawing::Color::DarkGoldenrod;
			this->HOMEBTN->BaseColor2 = System::Drawing::Color::Transparent;
			this->HOMEBTN->BorderColor = System::Drawing::Color::Black;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->HOMEBTN, Guna::UI::Animation::DecorationType::None);
			this->HOMEBTN->DialogResult = System::Windows::Forms::DialogResult::None;
			this->HOMEBTN->FocusedColor = System::Drawing::Color::Empty;
			this->HOMEBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->HOMEBTN->ForeColor = System::Drawing::Color::Black;
			this->HOMEBTN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HOMEBTN.Image")));
			this->HOMEBTN->ImageSize = System::Drawing::Size(20, 20);
			this->HOMEBTN->Location = System::Drawing::Point(37, 254);
			this->HOMEBTN->Margin = System::Windows::Forms::Padding(2);
			this->HOMEBTN->Name = L"HOMEBTN";
			this->HOMEBTN->OnHoverBaseColor1 = System::Drawing::Color::Transparent;
			this->HOMEBTN->OnHoverBaseColor2 = System::Drawing::Color::DarkGoldenrod;
			this->HOMEBTN->OnHoverBorderColor = System::Drawing::Color::Black;
			this->HOMEBTN->OnHoverForeColor = System::Drawing::Color::White;
			this->HOMEBTN->OnHoverImage = nullptr;
			this->HOMEBTN->OnPressedColor = System::Drawing::Color::Black;
			this->HOMEBTN->Padding = System::Windows::Forms::Padding(0, 32, 0, 32);
			this->HOMEBTN->Size = System::Drawing::Size(170, 56);
			this->HOMEBTN->TabIndex = 0;
			this->HOMEBTN->Text = L"خانه";
			this->HOMEBTN->Click += gcnew System::EventHandler(this, &MyForm::HOMEBTN_Click);
			// 
			// MainPanel
			// 
			this->MainPanel->BackColor = System::Drawing::SystemColors::Control;
			this->MainPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MainPanel.BackgroundImage")));
			this->MainPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->MainPanel->Controls->Add(this->textBox1);
			this->MainPanel->Controls->Add(this->panel2);
			this->MainPanel->Controls->Add(this->panel1);
			this->RIGHTBAR_TRANSITION->SetDecoration(this->MainPanel, Guna::UI::Animation::DecorationType::None);
			this->MainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainPanel->GradientColor1 = System::Drawing::Color::Orange;
			this->MainPanel->GradientColor2 = System::Drawing::Color::LightCyan;
			this->MainPanel->GradientColor3 = System::Drawing::Color::LightCyan;
			this->MainPanel->GradientColor4 = System::Drawing::Color::Orange;
			this->MainPanel->Location = System::Drawing::Point(0, 31);
			this->MainPanel->Margin = System::Windows::Forms::Padding(2);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(729, 667);
			this->MainPanel->TabIndex = 0;
			this->MainPanel->Text = L"gunaGradientPanel2";
			this->MainPanel->ControlAdded += gcnew System::Windows::Forms::ControlEventHandler(this, &MyForm::MainPanel_ControlAdded);
			// 
			// textBox1
			// 
			this->RIGHTBAR_TRANSITION->SetDecoration(this->textBox1, Guna::UI::Animation::DecorationType::None);
			this->textBox1->Location = System::Drawing::Point(12, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(321, 20);
			this->textBox1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->WELCOMLABEL5);
			this->panel2->Controls->Add(this->WELCOMELABEL4);
			this->panel2->Controls->Add(this->WELCOMELABEL3);
			this->RIGHTBAR_TRANSITION->SetDecoration(this->panel2, Guna::UI::Animation::DecorationType::None);
			this->panel2->Location = System::Drawing::Point(68, 334);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(669, 173);
			this->panel2->TabIndex = 1;
			this->panel2->Visible = false;
			// 
			// WELCOMLABEL5
			// 
			this->WELCOMLABEL5->AutoSize = true;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->WELCOMLABEL5, Guna::UI::Animation::DecorationType::None);
			this->WELCOMLABEL5->Font = (gcnew System::Drawing::Font(L"B Koodak", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->WELCOMLABEL5->ForeColor = System::Drawing::Color::Blue;
			this->WELCOMLABEL5->Location = System::Drawing::Point(42, 107);
			this->WELCOMLABEL5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->WELCOMLABEL5->Name = L"WELCOMLABEL5";
			this->WELCOMLABEL5->Size = System::Drawing::Size(206, 55);
			this->WELCOMLABEL5->TabIndex = 3;
			this->WELCOMLABEL5->Text = L"محمدحسن براتی";
			// 
			// WELCOMELABEL4
			// 
			this->WELCOMELABEL4->AutoSize = true;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->WELCOMELABEL4, Guna::UI::Animation::DecorationType::None);
			this->WELCOMELABEL4->Font = (gcnew System::Drawing::Font(L"B Koodak", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->WELCOMELABEL4->ForeColor = System::Drawing::Color::Red;
			this->WELCOMELABEL4->Location = System::Drawing::Point(286, 63);
			this->WELCOMELABEL4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->WELCOMELABEL4->Name = L"WELCOMELABEL4";
			this->WELCOMELABEL4->Size = System::Drawing::Size(163, 55);
			this->WELCOMELABEL4->TabIndex = 2;
			this->WELCOMELABEL4->Text = L"علی بابارهایی";
			// 
			// WELCOMELABEL3
			// 
			this->WELCOMELABEL3->AutoSize = true;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->WELCOMELABEL3, Guna::UI::Animation::DecorationType::None);
			this->WELCOMELABEL3->Font = (gcnew System::Drawing::Font(L"B Koodak", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->WELCOMELABEL3->ForeColor = System::Drawing::Color::Blue;
			this->WELCOMELABEL3->Location = System::Drawing::Point(467, 7);
			this->WELCOMELABEL3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->WELCOMELABEL3->Name = L"WELCOMELABEL3";
			this->WELCOMELABEL3->Size = System::Drawing::Size(213, 55);
			this->WELCOMELABEL3->TabIndex = 1;
			this->WELCOMELABEL3->Text = L"امیرحسین مهربان";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->WELCOMELABEL1);
			this->RIGHTBAR_TRANSITION->SetDecoration(this->panel1, Guna::UI::Animation::DecorationType::None);
			this->panel1->Location = System::Drawing::Point(266, 116);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(306, 81);
			this->panel1->TabIndex = 0;
			// 
			// WELCOMELABEL1
			// 
			this->WELCOMELABEL1->AutoSize = true;
			this->RIGHTBAR_TRANSITION->SetDecoration(this->WELCOMELABEL1, Guna::UI::Animation::DecorationType::None);
			this->WELCOMELABEL1->Font = (gcnew System::Drawing::Font(L"B Arabic Style", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->WELCOMELABEL1->Location = System::Drawing::Point(87, 18);
			this->WELCOMELABEL1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->WELCOMELABEL1->Name = L"WELCOMELABEL1";
			this->WELCOMELABEL1->Size = System::Drawing::Size(141, 62);
			this->WELCOMELABEL1->TabIndex = 0;
			this->WELCOMELABEL1->Text = L"به نام خدا";
			this->WELCOMELABEL1->Visible = false;
			// 
			// RIGHTBAR_TRANSITION
			// 
			this->RIGHTBAR_TRANSITION->AnimationType = Guna::UI::Animation::AnimationType::Scale;
			this->RIGHTBAR_TRANSITION->Cursor = nullptr;
			animation1->AnimateOnlyDifferences = true;
			animation1->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.BlindCoeff")));
			animation1->LeafCoeff = 0;
			animation1->MaxTime = 1;
			animation1->MinTime = 0;
			animation1->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicCoeff")));
			animation1->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicShift")));
			animation1->MosaicSize = 0;
			animation1->Padding = System::Windows::Forms::Padding(0);
			animation1->RotateCoeff = 0;
			animation1->RotateLimit = 0;
			animation1->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.ScaleCoeff")));
			animation1->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.SlideCoeff")));
			animation1->TimeCoeff = 0;
			animation1->TransparencyCoeff = 0;
			this->RIGHTBAR_TRANSITION->DefaultAnimation = animation1;
			// 
			// Welcometimer
			// 
			this->Welcometimer->Enabled = true;
			this->Welcometimer->Interval = 500;
			this->Welcometimer->Tick += gcnew System::EventHandler(this, &MyForm::Welcometimer_Tick);
			// 
			// WELCOMETIMER2
			// 
			this->WELCOMETIMER2->Interval = 500;
			this->WELCOMETIMER2->Tick += gcnew System::EventHandler(this, &MyForm::WELCOMETIMER2_Tick);
			// 
			// WELCOMETIMER3
			// 
			this->WELCOMETIMER3->Tick += gcnew System::EventHandler(this, &MyForm::WELCOMETIMER3_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(975, 698);
			this->Controls->Add(this->MainPanel);
			this->Controls->Add(this->RIGHTBAR);
			this->Controls->Add(this->gunaGradient2Panel1);
			this->RIGHTBAR_TRANSITION->SetDecoration(this, Guna::UI::Animation::DecorationType::None);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->gunaGradient2Panel1->ResumeLayout(false);
			this->RIGHTBAR->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox1))->EndInit();
			this->MainPanel->ResumeLayout(false);
			this->MainPanel->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		Thread^ EnterThread;
		void open()
		{
			Application::Run(gcnew EnteranceForm());
		}
		Home^ home = gcnew Home();
		setting^ Setting = gcnew setting();
		Paymentcount^ buy = gcnew Paymentcount();
		payment^ Paymentcontrol = gcnew payment();
		search^ Search = gcnew search();
		group^ Group = gcnew group();
		group2^ Group2 = gcnew group2();
		EnterUserControl^ Enterusercontrol = gcnew EnterUserControl();
	private: System::Void gunaButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   //checking if the form is maximized or not
		   bool Is_Maximized = false;
	private: System::Void gunaButton3_Click(System::Object^ sender, System::EventArgs^ e)
	{

		//adding funtionality to button
		if (Is_Maximized == false)
		{
			this->WindowState = FormWindowState::Maximized;
			MainPanel->Size = this->Size;
			Is_Maximized = true;

			
		}
		else if (Is_Maximized == true)
		{
			//this->Height = 1360;
			//this->Width = 768;
			this->WindowState = FormWindowState::Normal;
			MainPanel->Size = this->Size;
			Is_Maximized = false;
		}

	}

		   /*
		   * this is just a Help for the deloper to use the bar
		   */

		   //checking if the right panel is open or closed
		   bool IS_BAR_OPEN = true;
	private: System::Void gunaGradientButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		//DO aCTION WITH THE PANEL IF IT IS OPEN
		
		if (IS_BAR_OPEN == true)
		{
			
			
			//Ask this  transition Please
			
			RIGHTBAR->Width = 50;

			//home button

			HOMEBTN->Text = "";
			HOMEBTN->Size = System::Drawing::Size(50, 50);
			//I havre to finf the center *********************************************
			HOMEBTN->Location = System::Drawing::Point(MinMaxBar->Height-40, (RIGHTBAR->Top+250));
			
			//sort button

			SORTBTN->Width = 50;
			SORTBTN->Height = 50;
			SORTBTN->Text = "";
			SORTBTN->Location = System::Drawing::Point(MinMaxBar->Height - 40, (RIGHTBAR->Top + 300));

			//buy button
			BUYRECIETEBTN->Text = "";
			BUYRECIETEBTN->Width = 65;
			BUYRECIETEBTN->Height = 50;
			BUYRECIETEBTN->Location = System::Drawing::Point(MinMaxBar->Height - 40, (RIGHTBAR->Top + 350));

			//search button

			SEARCHBTN->Text = "";
			SEARCHBTN->Width = 65;
			SEARCHBTN->Height = 50;
			SEARCHBTN->Location = System::Drawing::Point(MinMaxBar->Height - 40, (RIGHTBAR->Top + 400));



			IS_BAR_OPEN = false;
		}

		//returning the left bar to its previous mode
		else if (IS_BAR_OPEN == false)
		{
			
			RIGHTBAR->Width = 250;
			
			//HOMEBTN

			HOMEBTN->Text = " خانه";
			HOMEBTN->Width = 226;
			HOMEBTN->Height = 50;

			SORTBTN->Text = L"دسته بندی";
			SORTBTN->Width = 226;
			SORTBTN->Height = 50;
			//BUYBTN
			BUYRECIETEBTN->Text = L" سبد خرید";
			BUYRECIETEBTN->Width = 226;
			BUYRECIETEBTN->Height = 50;
			//SEARCGBTN
			SEARCHBTN->Text = L"جست و جو";
			SEARCHBTN->Width = 226;
			SEARCHBTN->Height = 50;
			IS_BAR_OPEN = true;
		}
	}
		   
	private: System::Void SETTING_Click(System::Object^ sender, System::EventArgs^ e) {
		MainPanel->Controls->Clear();
		MainPanel->Controls->Add(Setting);
		
	}
		   bool YEK_BAR_ZADI_IN_LANATIRO;
	private: System::Void HOMEBTN_Click(System::Object^ sender, System::EventArgs^ e) {
		
			MainPanel->Controls->Clear();
			MainPanel->Controls->Add(home);
			home->Enabled =true;
			home->Dock = System::Windows::Forms::DockStyle::Fill;
			
			
		
	}
private: System::Void BUYRECIETEBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MainPanel->Controls->Clear();
	MainPanel->Controls->Add(buy);
	if (Is_Maximized == true)
	{
		if (IS_BAR_OPEN == true)
		{
			buy->Dock = System::Windows::Forms::DockStyle::Fill;
		}
		else if (IS_BAR_OPEN==false)
		{
			buy->Dock = System::Windows::Forms::DockStyle::Fill;
		}
	}
	else if (Is_Maximized == false)
	{
		if (IS_BAR_OPEN==true)
		{
			buy->Dock = System::Windows::Forms::DockStyle::Fill;
		}
		else if (IS_BAR_OPEN==false)
		{
			buy->Dock = System::Windows::Forms::DockStyle::Fill;
		}
	}
	
}
private: System::Void gunaGradient2Panel1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (Is_Maximized == false)
	{
		this->WindowState = FormWindowState::Maximized;
		MainPanel->Size = this->Size;
		Is_Maximized = true;
	}
	else if (Is_Maximized == true)
	{
		//this->Height = 1360;
		//this->Width = 768;
		this->WindowState = FormWindowState::Normal;
		MainPanel->Size = this->Size;
		Is_Maximized = false;
		
	}
}

private: System::Void SEARCHBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	MainPanel->Controls->Clear();
	MainPanel->Controls->Add(Search);
	Search->Dock = System::Windows::Forms::DockStyle::Fill;
	
}
private: System::Void SETTINGBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MainPanel->Controls->Clear();
	MainPanel->Controls->Add(Setting);
	Setting->Dock = System::Windows::Forms::DockStyle::Fill;
	MainPanel->Refresh();

}
private: System::Void Welcometimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	WELCOMELABEL1->Show();
	WELCOMETIMER2->Start();
}
private: System::Void WELCOMETIMER2_Tick(System::Object^ sender, System::EventArgs^ e) {
	WELCOMETIMER2->Stop();
	panel2->Show();
	WELCOMELABEL3->Show();
	WELCOMLABEL5->Show();
	WELCOMETIMER3->Start();
}
private: System::Void WELCOMETIMER3_Tick(System::Object^ sender, System::EventArgs^ e) {
	WELCOMETIMER3->Stop();
	WELCOMELABEL4->Show();
}

	private: void soucketstart()
	{
		Start_API();

	}//this part is being used for connecting the payment to the mainpanel
private: System::Void MainPanel_ControlAdded(System::Object^ sender, System::Windows::Forms::ControlEventArgs^ e) {
	/*if (home->OPEN_FIRST_DIALOG() == true)
	{
		MainPanel->Controls->Clear();
		MainPanel->Controls->Add(Group2);
		MainPanel->Refresh();
	}
	else if(home->OPEN_SECOND_DIALOG()==true)
	{
		MainPanel->Controls->Clear();
		MainPanel->Controls->Add(Group);
		MainPanel->Refresh();
	}*/
}
private: System::Void BACKBTN_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void EnterButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	EnterThread = gcnew Thread(gcnew ThreadStart(this, &MyForm::open));
	EnterThread->Start();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	string h;
	MarshalString(textBox1->Text, h);
	if(textBox1->Text!="")
	sendmessage(h);
	MainPanel->Controls->Clear();
	MainPanel->Controls->Add(home);
	home->Enabled = true;
	home->Dock = System::Windows::Forms::DockStyle::Fill;



}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	send_database();
}
		private:
			void MarshalString(String^ s, string& os)
			{
				using namespace Runtime::InteropServices;
				const char* chars =
					(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
				os = chars;
				Marshal::FreeHGlobal(IntPtr((void*)chars));
			}


};

}
