	#pragma once
#include"CompleteInformationUserControl.h"
#include"payment.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for Paymentcount
	/// </summary>
	public ref class Paymentcount : public System::Windows::Forms::UserControl
	{
	public:
		payment^ form1;
		Paymentcount(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			form1 = gcnew payment();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Paymentcount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaGradient2Panel^ TOTALPRICEPANEL;
	protected:

	protected:
	private: Guna::UI::WinForms::GunaGradient2Panel^ gunaGradient2Panel2;
	private: System::Windows::Forms::Button^ PAYANDDOWNLOADBUTTON;
	private: System::Windows::Forms::Label^ TOTALPRICE;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ NUMBEROFSEELECTEDBOOK;
	private: Guna::UI::WinForms::GunaGradient2Panel^ BOOKSPANEL;
	private: Guna::UI::WinForms::GunaGradientPanel^ BOOK1;



	private: Guna::UI::WinForms::GunaLabel^ gunaLabel5;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel4;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Guna::UI::WinForms::GunaGradientPanel^ BOOK3;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel7;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel8;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox2;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel9;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: Guna::UI::WinForms::GunaGradientPanel^ BOOK2;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel6;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ QUANTITYLABEL;
	private: System::Windows::Forms::PictureBox^ REMOVEBUTTON;
	private: System::Windows::Forms::PictureBox^ ADDBUTTON;
	private: Guna::UI::WinForms::GunaPictureBox^ DELETEICON1;






	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Paymentcount::typeid));
			this->TOTALPRICEPANEL = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaGradient2Panel2 = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->PAYANDDOWNLOADBUTTON = (gcnew System::Windows::Forms::Button());
			this->TOTALPRICE = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NUMBEROFSEELECTEDBOOK = (gcnew System::Windows::Forms::Label());
			this->BOOKSPANEL = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->BOOK3 = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->gunaLabel7 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel8 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaPictureBox2 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaLabel9 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->BOOK2 = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaLabel6 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->BOOK1 = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->QUANTITYLABEL = (gcnew System::Windows::Forms::Label());
			this->REMOVEBUTTON = (gcnew System::Windows::Forms::PictureBox());
			this->ADDBUTTON = (gcnew System::Windows::Forms::PictureBox());
			this->gunaLabel5 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel4 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->DELETEICON1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaLabel3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TOTALPRICEPANEL->SuspendLayout();
			this->gunaGradient2Panel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->BOOKSPANEL->SuspendLayout();
			this->BOOK3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->BOOK2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->BOOK1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->REMOVEBUTTON))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ADDBUTTON))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DELETEICON1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TOTALPRICEPANEL
			// 
			this->TOTALPRICEPANEL->BackColor = System::Drawing::Color::Transparent;
			this->TOTALPRICEPANEL->Controls->Add(this->gunaGradient2Panel2);
			this->TOTALPRICEPANEL->Dock = System::Windows::Forms::DockStyle::Left;
			this->TOTALPRICEPANEL->GradientColor1 = System::Drawing::Color::White;
			this->TOTALPRICEPANEL->GradientColor2 = System::Drawing::Color::White;
			this->TOTALPRICEPANEL->Location = System::Drawing::Point(0, 0);
			this->TOTALPRICEPANEL->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TOTALPRICEPANEL->Name = L"TOTALPRICEPANEL";
			this->TOTALPRICEPANEL->Size = System::Drawing::Size(364, 617);
			this->TOTALPRICEPANEL->TabIndex = 0;
			// 
			// gunaGradient2Panel2
			// 
			this->gunaGradient2Panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->gunaGradient2Panel2->AutoScroll = true;
			this->gunaGradient2Panel2->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradient2Panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->gunaGradient2Panel2->Controls->Add(this->PAYANDDOWNLOADBUTTON);
			this->gunaGradient2Panel2->Controls->Add(this->TOTALPRICE);
			this->gunaGradient2Panel2->Controls->Add(this->tableLayoutPanel1);
			this->gunaGradient2Panel2->GradientColor1 = System::Drawing::Color::White;
			this->gunaGradient2Panel2->GradientColor2 = System::Drawing::Color::White;
			this->gunaGradient2Panel2->Location = System::Drawing::Point(10, 85);
			this->gunaGradient2Panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaGradient2Panel2->Name = L"gunaGradient2Panel2";
			this->gunaGradient2Panel2->Radius = 10;
			this->gunaGradient2Panel2->Size = System::Drawing::Size(342, 284);
			this->gunaGradient2Panel2->TabIndex = 0;
			// 
			// PAYANDDOWNLOADBUTTON
			// 
			this->PAYANDDOWNLOADBUTTON->BackColor = System::Drawing::Color::SpringGreen;
			this->PAYANDDOWNLOADBUTTON->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PAYANDDOWNLOADBUTTON->Font = (gcnew System::Drawing::Font(L"B Homa", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->PAYANDDOWNLOADBUTTON->Location = System::Drawing::Point(25, 174);
			this->PAYANDDOWNLOADBUTTON->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->PAYANDDOWNLOADBUTTON->Name = L"PAYANDDOWNLOADBUTTON";
			this->PAYANDDOWNLOADBUTTON->Size = System::Drawing::Size(290, 52);
			this->PAYANDDOWNLOADBUTTON->TabIndex = 2;
			this->PAYANDDOWNLOADBUTTON->Text = L"پرداخت و مشاهده کتاب";
			this->PAYANDDOWNLOADBUTTON->UseVisualStyleBackColor = false;
			this->PAYANDDOWNLOADBUTTON->Click += gcnew System::EventHandler(this, &Paymentcount::PAYANDDOWNLOADBUTTON_Click);
			// 
			// TOTALPRICE
			// 
			this->TOTALPRICE->AutoSize = true;
			this->TOTALPRICE->Font = (gcnew System::Drawing::Font(L"B Homa", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->TOTALPRICE->Location = System::Drawing::Point(31, 14);
			this->TOTALPRICE->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TOTALPRICE->Name = L"TOTALPRICE";
			this->TOTALPRICE->Size = System::Drawing::Size(59, 28);
			this->TOTALPRICE->TabIndex = 1;
			this->TOTALPRICE->Text = L"label2";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Outset;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				40)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				60)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->NUMBEROFSEELECTEDBOOK, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(179, 14);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(160, 24);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Homa", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(67, 2);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label1->Size = System::Drawing::Size(61, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"قیمیت کالاها";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// NUMBEROFSEELECTEDBOOK
			// 
			this->NUMBEROFSEELECTEDBOOK->AutoSize = true;
			this->NUMBEROFSEELECTEDBOOK->Location = System::Drawing::Point(4, 2);
			this->NUMBEROFSEELECTEDBOOK->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NUMBEROFSEELECTEDBOOK->Name = L"NUMBEROFSEELECTEDBOOK";
			this->NUMBEROFSEELECTEDBOOK->Padding = System::Windows::Forms::Padding(40, 6, 0, 0);
			this->NUMBEROFSEELECTEDBOOK->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->NUMBEROFSEELECTEDBOOK->Size = System::Drawing::Size(53, 19);
			this->NUMBEROFSEELECTEDBOOK->TabIndex = 1;
			this->NUMBEROFSEELECTEDBOOK->Text = L"0";
			this->NUMBEROFSEELECTEDBOOK->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// BOOKSPANEL
			// 
			this->BOOKSPANEL->AutoScroll = true;
			this->BOOKSPANEL->AutoSize = true;
			this->BOOKSPANEL->BackColor = System::Drawing::Color::DimGray;
			this->BOOKSPANEL->Controls->Add(this->BOOK3);
			this->BOOKSPANEL->Controls->Add(this->BOOK2);
			this->BOOKSPANEL->Controls->Add(this->BOOK1);
			this->BOOKSPANEL->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BOOKSPANEL->GradientColor1 = System::Drawing::Color::Gray;
			this->BOOKSPANEL->GradientColor2 = System::Drawing::Color::White;
			this->BOOKSPANEL->Location = System::Drawing::Point(364, 0);
			this->BOOKSPANEL->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BOOKSPANEL->Name = L"BOOKSPANEL";
			this->BOOKSPANEL->Size = System::Drawing::Size(519, 617);
			this->BOOKSPANEL->TabIndex = 1;
			// 
			// BOOK3
			// 
			this->BOOK3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BOOK3.BackgroundImage")));
			this->BOOK3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BOOK3->Controls->Add(this->tableLayoutPanel4);
			this->BOOK3->Controls->Add(this->gunaLabel7);
			this->BOOK3->Controls->Add(this->gunaLabel8);
			this->BOOK3->Controls->Add(this->gunaPictureBox2);
			this->BOOK3->Controls->Add(this->gunaLabel9);
			this->BOOK3->Controls->Add(this->pictureBox7);
			this->BOOK3->GradientColor1 = System::Drawing::Color::White;
			this->BOOK3->GradientColor2 = System::Drawing::Color::White;
			this->BOOK3->GradientColor3 = System::Drawing::Color::White;
			this->BOOK3->GradientColor4 = System::Drawing::Color::White;
			this->BOOK3->Location = System::Drawing::Point(40, 414);
			this->BOOK3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BOOK3->Name = L"BOOK3";
			this->BOOK3->Size = System::Drawing::Size(433, 143);
			this->BOOK3->TabIndex = 6;
			this->BOOK3->Text = L"gunaGradientPanel2";
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->BackColor = System::Drawing::Color::White;
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				32)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				61)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				42)));
			this->tableLayoutPanel4->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->pictureBox5, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->pictureBox6, 2, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(87, 50);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(134, 31);
			this->tableLayoutPanel4->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Homa", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->Location = System::Drawing::Point(34, 0);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 31);
			this->label3->TabIndex = 10;
			this->label3->Text = L"1";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(2, 2);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(27, 26);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(95, 2);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(37, 26);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 8;
			this->pictureBox6->TabStop = false;
			// 
			// gunaLabel7
			// 
			this->gunaLabel7->AutoSize = true;
			this->gunaLabel7->BackColor = System::Drawing::Color::Transparent;
			this->gunaLabel7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel7->Location = System::Drawing::Point(246, 109);
			this->gunaLabel7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel7->Name = L"gunaLabel7";
			this->gunaLabel7->Size = System::Drawing::Size(68, 15);
			this->gunaLabel7->TabIndex = 5;
			this->gunaLabel7->Text = L"gunaLabel7";
			// 
			// gunaLabel8
			// 
			this->gunaLabel8->AutoSize = true;
			this->gunaLabel8->BackColor = System::Drawing::Color::Transparent;
			this->gunaLabel8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel8->Location = System::Drawing::Point(246, 65);
			this->gunaLabel8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel8->Name = L"gunaLabel8";
			this->gunaLabel8->Size = System::Drawing::Size(68, 15);
			this->gunaLabel8->TabIndex = 4;
			this->gunaLabel8->Text = L"gunaLabel8";
			// 
			// gunaPictureBox2
			// 
			this->gunaPictureBox2->BackColor = System::Drawing::Color::White;
			this->gunaPictureBox2->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox2.Image")));
			this->gunaPictureBox2->Location = System::Drawing::Point(5, 30);
			this->gunaPictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaPictureBox2->Name = L"gunaPictureBox2";
			this->gunaPictureBox2->Size = System::Drawing::Size(78, 79);
			this->gunaPictureBox2->TabIndex = 11;
			this->gunaPictureBox2->TabStop = false;
			// 
			// gunaLabel9
			// 
			this->gunaLabel9->AutoSize = true;
			this->gunaLabel9->BackColor = System::Drawing::Color::Transparent;
			this->gunaLabel9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel9->Location = System::Drawing::Point(246, 22);
			this->gunaLabel9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel9->Name = L"gunaLabel9";
			this->gunaLabel9->Size = System::Drawing::Size(68, 15);
			this->gunaLabel9->TabIndex = 3;
			this->gunaLabel9->Text = L"gunaLabel9";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(335, 22);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(80, 102);
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// BOOK2
			// 
			this->BOOK2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BOOK2.BackgroundImage")));
			this->BOOK2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BOOK2->Controls->Add(this->tableLayoutPanel3);
			this->BOOK2->Controls->Add(this->gunaLabel1);
			this->BOOK2->Controls->Add(this->gunaLabel2);
			this->BOOK2->Controls->Add(this->gunaPictureBox1);
			this->BOOK2->Controls->Add(this->gunaLabel6);
			this->BOOK2->Controls->Add(this->pictureBox4);
			this->BOOK2->GradientColor1 = System::Drawing::Color::White;
			this->BOOK2->GradientColor2 = System::Drawing::Color::White;
			this->BOOK2->GradientColor3 = System::Drawing::Color::White;
			this->BOOK2->GradientColor4 = System::Drawing::Color::White;
			this->BOOK2->Location = System::Drawing::Point(40, 239);
			this->BOOK2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BOOK2->Name = L"BOOK2";
			this->BOOK2->Size = System::Drawing::Size(433, 143);
			this->BOOK2->TabIndex = 5;
			this->BOOK2->Text = L"gunaGradientPanel1";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->BackColor = System::Drawing::Color::White;
			this->tableLayoutPanel3->ColumnCount = 3;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				32)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				61)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				42)));
			this->tableLayoutPanel3->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->pictureBox2, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->pictureBox3, 2, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(87, 50);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(134, 31);
			this->tableLayoutPanel3->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Homa", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(34, 0);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 31);
			this->label2->TabIndex = 10;
			this->label2->Text = L"1";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(2, 2);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(27, 26);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(95, 2);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(37, 26);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel1->Location = System::Drawing::Point(246, 109);
			this->gunaLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(68, 15);
			this->gunaLabel1->TabIndex = 5;
			this->gunaLabel1->Text = L"gunaLabel1";
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->BackColor = System::Drawing::Color::Transparent;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel2->Location = System::Drawing::Point(246, 65);
			this->gunaLabel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(68, 15);
			this->gunaLabel2->TabIndex = 4;
			this->gunaLabel2->Text = L"gunaLabel2";
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BackColor = System::Drawing::Color::White;
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox1.Image")));
			this->gunaPictureBox1->Location = System::Drawing::Point(5, 30);
			this->gunaPictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(78, 79);
			this->gunaPictureBox1->TabIndex = 11;
			this->gunaPictureBox1->TabStop = false;
			// 
			// gunaLabel6
			// 
			this->gunaLabel6->AutoSize = true;
			this->gunaLabel6->BackColor = System::Drawing::Color::Transparent;
			this->gunaLabel6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel6->Location = System::Drawing::Point(246, 22);
			this->gunaLabel6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel6->Name = L"gunaLabel6";
			this->gunaLabel6->Size = System::Drawing::Size(68, 15);
			this->gunaLabel6->TabIndex = 3;
			this->gunaLabel6->Text = L"gunaLabel6";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(335, 22);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(80, 102);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// BOOK1
			// 
			this->BOOK1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BOOK1.BackgroundImage")));
			this->BOOK1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BOOK1->Controls->Add(this->tableLayoutPanel2);
			this->BOOK1->Controls->Add(this->gunaLabel5);
			this->BOOK1->Controls->Add(this->gunaLabel4);
			this->BOOK1->Controls->Add(this->DELETEICON1);
			this->BOOK1->Controls->Add(this->gunaLabel3);
			this->BOOK1->Controls->Add(this->pictureBox1);
			this->BOOK1->GradientColor1 = System::Drawing::Color::White;
			this->BOOK1->GradientColor2 = System::Drawing::Color::White;
			this->BOOK1->GradientColor3 = System::Drawing::Color::White;
			this->BOOK1->GradientColor4 = System::Drawing::Color::White;
			this->BOOK1->Location = System::Drawing::Point(40, 65);
			this->BOOK1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BOOK1->Name = L"BOOK1";
			this->BOOK1->Size = System::Drawing::Size(433, 143);
			this->BOOK1->TabIndex = 4;
			this->BOOK1->Text = L"gunaGradientPanel3";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->BackColor = System::Drawing::Color::White;
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				32)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				61)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				42)));
			this->tableLayoutPanel2->Controls->Add(this->QUANTITYLABEL, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->REMOVEBUTTON, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->ADDBUTTON, 2, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(87, 50);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(134, 31);
			this->tableLayoutPanel2->TabIndex = 8;
			// 
			// QUANTITYLABEL
			// 
			this->QUANTITYLABEL->AutoSize = true;
			this->QUANTITYLABEL->BackColor = System::Drawing::Color::White;
			this->QUANTITYLABEL->Dock = System::Windows::Forms::DockStyle::Fill;
			this->QUANTITYLABEL->Font = (gcnew System::Drawing::Font(L"B Homa", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->QUANTITYLABEL->Location = System::Drawing::Point(34, 0);
			this->QUANTITYLABEL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->QUANTITYLABEL->Name = L"QUANTITYLABEL";
			this->QUANTITYLABEL->Size = System::Drawing::Size(57, 31);
			this->QUANTITYLABEL->TabIndex = 10;
			this->QUANTITYLABEL->Text = L"1";
			this->QUANTITYLABEL->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// REMOVEBUTTON
			// 
			this->REMOVEBUTTON->BackColor = System::Drawing::Color::White;
			this->REMOVEBUTTON->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"REMOVEBUTTON.Image")));
			this->REMOVEBUTTON->Location = System::Drawing::Point(2, 2);
			this->REMOVEBUTTON->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->REMOVEBUTTON->Name = L"REMOVEBUTTON";
			this->REMOVEBUTTON->Size = System::Drawing::Size(27, 26);
			this->REMOVEBUTTON->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->REMOVEBUTTON->TabIndex = 9;
			this->REMOVEBUTTON->TabStop = false;
			// 
			// ADDBUTTON
			// 
			this->ADDBUTTON->BackColor = System::Drawing::Color::White;
			this->ADDBUTTON->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ADDBUTTON.Image")));
			this->ADDBUTTON->Location = System::Drawing::Point(95, 2);
			this->ADDBUTTON->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ADDBUTTON->Name = L"ADDBUTTON";
			this->ADDBUTTON->Size = System::Drawing::Size(37, 26);
			this->ADDBUTTON->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ADDBUTTON->TabIndex = 8;
			this->ADDBUTTON->TabStop = false;
			// 
			// gunaLabel5
			// 
			this->gunaLabel5->AutoSize = true;
			this->gunaLabel5->BackColor = System::Drawing::Color::Transparent;
			this->gunaLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel5->Location = System::Drawing::Point(246, 109);
			this->gunaLabel5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel5->Name = L"gunaLabel5";
			this->gunaLabel5->Size = System::Drawing::Size(68, 15);
			this->gunaLabel5->TabIndex = 5;
			this->gunaLabel5->Text = L"gunaLabel5";
			// 
			// gunaLabel4
			// 
			this->gunaLabel4->AutoSize = true;
			this->gunaLabel4->BackColor = System::Drawing::Color::Transparent;
			this->gunaLabel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel4->Location = System::Drawing::Point(246, 65);
			this->gunaLabel4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel4->Name = L"gunaLabel4";
			this->gunaLabel4->Size = System::Drawing::Size(68, 15);
			this->gunaLabel4->TabIndex = 4;
			this->gunaLabel4->Text = L"gunaLabel4";
			// 
			// DELETEICON1
			// 
			this->DELETEICON1->BackColor = System::Drawing::Color::White;
			this->DELETEICON1->BaseColor = System::Drawing::Color::White;
			this->DELETEICON1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DELETEICON1.Image")));
			this->DELETEICON1->Location = System::Drawing::Point(5, 30);
			this->DELETEICON1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->DELETEICON1->Name = L"DELETEICON1";
			this->DELETEICON1->Size = System::Drawing::Size(78, 79);
			this->DELETEICON1->TabIndex = 11;
			this->DELETEICON1->TabStop = false;
			// 
			// gunaLabel3
			// 
			this->gunaLabel3->AutoSize = true;
			this->gunaLabel3->BackColor = System::Drawing::Color::Transparent;
			this->gunaLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel3->Location = System::Drawing::Point(246, 22);
			this->gunaLabel3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel3->Name = L"gunaLabel3";
			this->gunaLabel3->Size = System::Drawing::Size(68, 15);
			this->gunaLabel3->TabIndex = 3;
			this->gunaLabel3->Text = L"gunaLabel3";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(335, 22);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 102);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Paymentcount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->Controls->Add(this->BOOKSPANEL);
			this->Controls->Add(this->TOTALPRICEPANEL);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Paymentcount";
			this->Size = System::Drawing::Size(883, 617);
			this->TOTALPRICEPANEL->ResumeLayout(false);
			this->gunaGradient2Panel2->ResumeLayout(false);
			this->gunaGradient2Panel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->BOOKSPANEL->ResumeLayout(false);
			this->BOOK3->ResumeLayout(false);
			this->BOOK3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->BOOK2->ResumeLayout(false);
			this->BOOK2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->BOOK1->ResumeLayout(false);
			this->BOOK1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->REMOVEBUTTON))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ADDBUTTON))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DELETEICON1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//get size of the current useer control
	private: int GET_PAYMENT_HEIGHT()
	{
		return this->Height;
	}
	private:int GET_PAUMENT_WIDTH()
	{
		return this->Width;
	}
	private:void SET_PAYMENT_HEIGHT(int Height)
	{
		this->Height = Height;
	}
	private: void SET_PAYMENT_WIDTH(int Width)
	{
		this->Width = Width;
	}
		//creatin panel size
		bool Is_Emtpy = false;
		int FromToptoBottom = this->Top;

		//an instance for getting information of the the book registered
		CompleteInformationUserControl^ book = gcnew CompleteInformationUserControl();

	private:
		String^ Id = book->GetId();
		String^ Price = book->GetPrice();
		String^ Quantity = book->GetQuantity();

		//
		//A boolean to check if is there any book available or not
		//
		//
		bool IS_ANY_BOOK_AVAILABLE;
	private: void Add_Another_book(String ^Id, String^ Price,String^ Quantity)
	{
		Id = this->Id;
		Price = this->Price;
		Quantity = this->Quantity;
		bool man = false;
		//if (/*book->Get_IS_PAY_EMPTY() == true*/ man==true )
		//{
		//	
		//	/*FromToptoBottom += 50;
		//	Panel^ bookpanel = gcnew Panel();
		//	bookpanel->Location = System::Drawing::Point((this->Left + this->Right)/2  ,FromToptoBottom);
		//	bookpanel->Size = System::Drawing::Size(200,100);
		//	bookpanel->BackColor = System::Drawing::Color::CadetBlue;
		//	Controls->Add(bookpanel);*/
		//	

		//}
		//else if (/*book->Get_IS_PAY_EMPTY() == false */man==false )
		//{

			Panel^ ErrorPAnel = gcnew Panel();
			ErrorPAnel->Location = System::Drawing::Point(300,500);
			ErrorPAnel->Size = System::Drawing::Size(400, 300);
			ErrorPAnel->BackColor = System::Drawing::Color::OrangeRed;
			ErrorPAnel->Controls->Add(ErrorPAnel);

		//}

	}
	
	
	
		   //this functions leads us to Artificial payment
	private: System::Void PAYANDDOWNLOADBUTTON_Click(System::Object^ sender, System::EventArgs^ e) {




		
		this->Controls->Clear();


		this->Controls->Add(form1);






		if (IS_ANY_BOOK_AVAILABLE == true)
		{
			PAYANDDOWNLOADBUTTON->Enabled = true;

		}
		else
		{
			PAYANDDOWNLOADBUTTON->Enabled = false;
		}

	}
	//A function to return the an element to open the payment in the mainpanel in mainformpanel
	public:	   bool CAN_I_OPEN_PAYMENT()
		   {
			   if (PAYANDDOWNLOADBUTTON->Enabled == true)
			   {
				   return true;
			   }
			   else
			   {
				   return false;
			   }
			   return false;
		   }
};
}
