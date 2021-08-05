#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for search
	/// </summary>
	public ref class search : public System::Windows::Forms::UserControl
	{
	public:
		search(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel1;
	protected:
	private: Guna::UI::WinForms::GunaImageButton^ gunaImageButton1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton2;
	private: System::Windows::Forms::Panel^ panel1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel2;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox20;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox3;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox2;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel3;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox16;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox15;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox5;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox4;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox14;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox13;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox12;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox11;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox10;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox6;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox7;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox8;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox9;
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel4;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox19;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox18;
	private: Guna::UI::WinForms::GunaCheckBox^ gunaCheckBox17;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel3;
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel5;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox5;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox4;
	private: Guna::UI::WinForms::GunaTrackBar^ gunaTrackBar2;
	private: Guna::UI::WinForms::GunaTrackBar^ gunaTrackBar1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel4;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel5;
	private: Guna::UI::WinForms::GunaGradientPanel^ SEARCHPANEL;

	private: Guna::UI::WinForms::GunaGradientPanel^ gunaGradientPanel2;
	private: System::Windows::Forms::Label^ advancedsearchlabel;





































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(search::typeid));
			this->gunaPanel1 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaImageButton1 = (gcnew Guna::UI::WinForms::GunaImageButton());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaButton1 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton2 = (gcnew Guna::UI::WinForms::GunaButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaPanel2 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaCheckBox20 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox3 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox2 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox1 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaPanel3 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaCheckBox16 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox15 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox5 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox4 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox14 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox13 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox12 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox11 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox10 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox6 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaCheckBox7 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox8 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox9 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaPanel4 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaCheckBox19 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox18 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaCheckBox17 = (gcnew Guna::UI::WinForms::GunaCheckBox());
			this->gunaLabel3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaPanel5 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaTextBox5 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTrackBar2 = (gcnew Guna::UI::WinForms::GunaTrackBar());
			this->gunaTrackBar1 = (gcnew Guna::UI::WinForms::GunaTrackBar());
			this->gunaLabel4 = (gcnew Guna::UI::WinForms::GunaLabel());
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
			this->gunaLabel5 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->SEARCHPANEL = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->gunaGradientPanel2 = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->advancedsearchlabel = (gcnew System::Windows::Forms::Label());
			this->gunaPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->gunaPanel2->SuspendLayout();
			this->gunaPanel3->SuspendLayout();
			this->gunaPanel4->SuspendLayout();
			this->gunaPanel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SEARCHPANEL->SuspendLayout();
			this->gunaGradientPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// gunaPanel1
			// 
			this->gunaPanel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->gunaPanel1->Controls->Add(this->gunaImageButton1);
			this->gunaPanel1->Controls->Add(this->gunaTextBox1);
			this->gunaPanel1->Location = System::Drawing::Point(62, 13);
			this->gunaPanel1->Name = L"gunaPanel1";
			this->gunaPanel1->Size = System::Drawing::Size(941, 88);
			this->gunaPanel1->TabIndex = 0;
			// 
			// gunaImageButton1
			// 
			this->gunaImageButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaImageButton1.Image")));
			this->gunaImageButton1->ImageSize = System::Drawing::Size(58, 56);
			this->gunaImageButton1->Location = System::Drawing::Point(155, 25);
			this->gunaImageButton1->Name = L"gunaImageButton1";
			this->gunaImageButton1->OnHoverImage = nullptr;
			this->gunaImageButton1->OnHoverImageOffset = System::Drawing::Point(0, 0);
			this->gunaImageButton1->Size = System::Drawing::Size(58, 56);
			this->gunaImageButton1->TabIndex = 1;
			// 
			// gunaTextBox1
			// 
			this->gunaTextBox1->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox1->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox1->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox1->Location = System::Drawing::Point(209, 25);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(584, 56);
			this->gunaTextBox1->TabIndex = 0;
			this->gunaTextBox1->Text = L"...جستجو کتاب";
			this->gunaTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// gunaButton1
			// 
			this->gunaButton1->AnimationHoverSpeed = 0.07F;
			this->gunaButton1->AnimationSpeed = 0.03F;
			this->gunaButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaButton1->ForeColor = System::Drawing::Color::White;
			this->gunaButton1->Image = nullptr;
			this->gunaButton1->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton1->Location = System::Drawing::Point(869, 187);
			this->gunaButton1->Name = L"gunaButton1";
			this->gunaButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton1->OnHoverImage = nullptr;
			this->gunaButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton1->Size = System::Drawing::Size(136, 45);
			this->gunaButton1->TabIndex = 1;
			this->gunaButton1->Text = L"نویسنده";
			this->gunaButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaButton2
			// 
			this->gunaButton2->AnimationHoverSpeed = 0.07F;
			this->gunaButton2->AnimationSpeed = 0.03F;
			this->gunaButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaButton2->ForeColor = System::Drawing::Color::White;
			this->gunaButton2->Image = nullptr;
			this->gunaButton2->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton2->Location = System::Drawing::Point(869, 238);
			this->gunaButton2->Name = L"gunaButton2";
			this->gunaButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton2->OnHoverImage = nullptr;
			this->gunaButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton2->Size = System::Drawing::Size(134, 49);
			this->gunaButton2->TabIndex = 2;
			this->gunaButton2->Text = L"کتاب";
			this->gunaButton2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->gunaTextBox3);
			this->panel1->Controls->Add(this->gunaTextBox2);
			this->panel1->Location = System::Drawing::Point(60, 187);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(793, 100);
			this->panel1->TabIndex = 3;
			// 
			// gunaTextBox3
			// 
			this->gunaTextBox3->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox3->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox3->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox3->Location = System::Drawing::Point(0, 51);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(790, 49);
			this->gunaTextBox3->TabIndex = 4;
			this->gunaTextBox3->Text = L"...جستجو";
			this->gunaTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// gunaTextBox2
			// 
			this->gunaTextBox2->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox2->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox2->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox2->Location = System::Drawing::Point(0, 0);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(790, 45);
			this->gunaTextBox2->TabIndex = 3;
			this->gunaTextBox2->Text = L"...جستجو";
			this->gunaTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// gunaPanel2
			// 
			this->gunaPanel2->Controls->Add(this->gunaCheckBox20);
			this->gunaPanel2->Controls->Add(this->gunaCheckBox3);
			this->gunaPanel2->Controls->Add(this->gunaCheckBox2);
			this->gunaPanel2->Controls->Add(this->gunaCheckBox1);
			this->gunaPanel2->Controls->Add(this->gunaLabel1);
			this->gunaPanel2->Location = System::Drawing::Point(60, 293);
			this->gunaPanel2->Name = L"gunaPanel2";
			this->gunaPanel2->Size = System::Drawing::Size(943, 45);
			this->gunaPanel2->TabIndex = 4;
			// 
			// gunaCheckBox20
			// 
			this->gunaCheckBox20->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox20->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox20->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox20->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox20->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox20->Location = System::Drawing::Point(155, 13);
			this->gunaCheckBox20->Name = L"gunaCheckBox20";
			this->gunaCheckBox20->Size = System::Drawing::Size(58, 29);
			this->gunaCheckBox20->TabIndex = 4;
			this->gunaCheckBox20->Text = L"عربی";
			this->gunaCheckBox20->Click += gcnew System::EventHandler(this, &search::gunaCheckBox20_Click);
			// 
			// gunaCheckBox3
			// 
			this->gunaCheckBox3->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox3->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox3->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox3->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox3->Location = System::Drawing::Point(344, 13);
			this->gunaCheckBox3->Name = L"gunaCheckBox3";
			this->gunaCheckBox3->Size = System::Drawing::Size(75, 29);
			this->gunaCheckBox3->TabIndex = 3;
			this->gunaCheckBox3->Text = L"انگلیسی";
			this->gunaCheckBox3->Click += gcnew System::EventHandler(this, &search::gunaCheckBox3_Click);
			// 
			// gunaCheckBox2
			// 
			this->gunaCheckBox2->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox2->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox2->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox2->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox2->Location = System::Drawing::Point(495, 13);
			this->gunaCheckBox2->Name = L"gunaCheckBox2";
			this->gunaCheckBox2->Size = System::Drawing::Size(66, 29);
			this->gunaCheckBox2->TabIndex = 2;
			this->gunaCheckBox2->Text = L"فارسی";
			this->gunaCheckBox2->CheckedChanged += gcnew System::EventHandler(this, &search::gunaCheckBox2_CheckedChanged);
			this->gunaCheckBox2->Click += gcnew System::EventHandler(this, &search::gunaCheckBox2_Click);
			// 
			// gunaCheckBox1
			// 
			this->gunaCheckBox1->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox1->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox1->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox1->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox1->Location = System::Drawing::Point(664, 13);
			this->gunaCheckBox1->Name = L"gunaCheckBox1";
			this->gunaCheckBox1->Size = System::Drawing::Size(54, 29);
			this->gunaCheckBox1->TabIndex = 1;
			this->gunaCheckBox1->Text = L"همه";
			this->gunaCheckBox1->CheckedChanged += gcnew System::EventHandler(this, &search::gunaCheckBox1_CheckedChanged);
			this->gunaCheckBox1->Click += gcnew System::EventHandler(this, &search::gunaCheckBox1_Click);
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel1->Location = System::Drawing::Point(883, 10);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(45, 32);
			this->gunaLabel1->TabIndex = 0;
			this->gunaLabel1->Text = L"زبان";
			// 
			// gunaPanel3
			// 
			this->gunaPanel3->Controls->Add(this->gunaCheckBox16);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox15);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox5);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox4);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox14);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox13);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox12);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox11);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox10);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox6);
			this->gunaPanel3->Controls->Add(this->gunaLabel2);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox7);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox8);
			this->gunaPanel3->Controls->Add(this->gunaCheckBox9);
			this->gunaPanel3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaPanel3->Location = System::Drawing::Point(60, 358);
			this->gunaPanel3->Name = L"gunaPanel3";
			this->gunaPanel3->Size = System::Drawing::Size(943, 147);
			this->gunaPanel3->TabIndex = 5;
			// 
			// gunaCheckBox16
			// 
			this->gunaCheckBox16->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox16->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox16->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox16->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox16->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox16->Location = System::Drawing::Point(49, 100);
			this->gunaCheckBox16->Name = L"gunaCheckBox16";
			this->gunaCheckBox16->Size = System::Drawing::Size(55, 29);
			this->gunaCheckBox16->TabIndex = 17;
			this->gunaCheckBox16->Text = L"سایر";
			this->gunaCheckBox16->CheckedChanged += gcnew System::EventHandler(this, &search::gunaCheckBox16_CheckedChanged);
			this->gunaCheckBox16->Click += gcnew System::EventHandler(this, &search::gunaCheckBox16_Click);
			// 
			// gunaCheckBox15
			// 
			this->gunaCheckBox15->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox15->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox15->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox15->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox15->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox15->Location = System::Drawing::Point(235, 100);
			this->gunaCheckBox15->Name = L"gunaCheckBox15";
			this->gunaCheckBox15->Size = System::Drawing::Size(74, 29);
			this->gunaCheckBox15->TabIndex = 16;
			this->gunaCheckBox15->Text = L"ترسناک";
			this->gunaCheckBox15->Click += gcnew System::EventHandler(this, &search::gunaCheckBox15_Click);
			// 
			// gunaCheckBox5
			// 
			this->gunaCheckBox5->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox5->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox5->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox5->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox5->Location = System::Drawing::Point(642, 30);
			this->gunaCheckBox5->Name = L"gunaCheckBox5";
			this->gunaCheckBox5->Size = System::Drawing::Size(66, 29);
			this->gunaCheckBox5->TabIndex = 6;
			this->gunaCheckBox5->Text = L"کمدی";
			this->gunaCheckBox5->CheckedChanged += gcnew System::EventHandler(this, &search::gunaCheckBox5_CheckedChanged);
			this->gunaCheckBox5->Click += gcnew System::EventHandler(this, &search::gunaCheckBox5_Click);
			// 
			// gunaCheckBox4
			// 
			this->gunaCheckBox4->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox4->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox4->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox4->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox4->Location = System::Drawing::Point(845, 65);
			this->gunaCheckBox4->Name = L"gunaCheckBox4";
			this->gunaCheckBox4->Size = System::Drawing::Size(54, 29);
			this->gunaCheckBox4->TabIndex = 5;
			this->gunaCheckBox4->Text = L"همه";
			this->gunaCheckBox4->CheckedChanged += gcnew System::EventHandler(this, &search::gunaCheckBox4_CheckedChanged);
			this->gunaCheckBox4->Click += gcnew System::EventHandler(this, &search::gunaCheckBox4_Click);
			// 
			// gunaCheckBox14
			// 
			this->gunaCheckBox14->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox14->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox14->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox14->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox14->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox14->Location = System::Drawing::Point(420, 98);
			this->gunaCheckBox14->Name = L"gunaCheckBox14";
			this->gunaCheckBox14->Size = System::Drawing::Size(90, 29);
			this->gunaCheckBox14->TabIndex = 15;
			this->gunaCheckBox14->Text = L"زندگی نامه";
			this->gunaCheckBox14->Click += gcnew System::EventHandler(this, &search::gunaCheckBox14_Click);
			// 
			// gunaCheckBox13
			// 
			this->gunaCheckBox13->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox13->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox13->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox13->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox13->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox13->Location = System::Drawing::Point(642, 100);
			this->gunaCheckBox13->Name = L"gunaCheckBox13";
			this->gunaCheckBox13->Size = System::Drawing::Size(57, 29);
			this->gunaCheckBox13->TabIndex = 14;
			this->gunaCheckBox13->Text = L"مقاله";
			this->gunaCheckBox13->Click += gcnew System::EventHandler(this, &search::gunaCheckBox13_Click);
			// 
			// gunaCheckBox12
			// 
			this->gunaCheckBox12->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox12->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox12->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox12->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox12->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox12->Location = System::Drawing::Point(49, 65);
			this->gunaCheckBox12->Name = L"gunaCheckBox12";
			this->gunaCheckBox12->Size = System::Drawing::Size(66, 29);
			this->gunaCheckBox12->TabIndex = 13;
			this->gunaCheckBox12->Text = L"فانتزی";
			this->gunaCheckBox12->Click += gcnew System::EventHandler(this, &search::gunaCheckBox12_Click);
			// 
			// gunaCheckBox11
			// 
			this->gunaCheckBox11->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox11->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox11->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox11->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox11->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox11->Location = System::Drawing::Point(235, 65);
			this->gunaCheckBox11->Name = L"gunaCheckBox11";
			this->gunaCheckBox11->Size = System::Drawing::Size(71, 29);
			this->gunaCheckBox11->TabIndex = 12;
			this->gunaCheckBox11->Text = L"عاشقانه";
			this->gunaCheckBox11->Click += gcnew System::EventHandler(this, &search::gunaCheckBox11_Click);
			// 
			// gunaCheckBox10
			// 
			this->gunaCheckBox10->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox10->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox10->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox10->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox10->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox10->Location = System::Drawing::Point(420, 63);
			this->gunaCheckBox10->Name = L"gunaCheckBox10";
			this->gunaCheckBox10->Size = System::Drawing::Size(66, 29);
			this->gunaCheckBox10->TabIndex = 11;
			this->gunaCheckBox10->Text = L"کمیک";
			this->gunaCheckBox10->Click += gcnew System::EventHandler(this, &search::gunaCheckBox10_Click);
			// 
			// gunaCheckBox6
			// 
			this->gunaCheckBox6->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox6->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox6->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox6->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox6->Location = System::Drawing::Point(420, 30);
			this->gunaCheckBox6->Name = L"gunaCheckBox6";
			this->gunaCheckBox6->Size = System::Drawing::Size(98, 29);
			this->gunaCheckBox6->TabIndex = 7;
			this->gunaCheckBox6->Text = L"علمی تخیلی";
			this->gunaCheckBox6->Click += gcnew System::EventHandler(this, &search::gunaCheckBox6_Click);
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel2->Location = System::Drawing::Point(802, 16);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(128, 29);
			this->gunaLabel2->TabIndex = 4;
			this->gunaLabel2->Text = L"دسته بندی موضوع";
			// 
			// gunaCheckBox7
			// 
			this->gunaCheckBox7->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox7->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox7->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox7->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox7->Location = System::Drawing::Point(235, 30);
			this->gunaCheckBox7->Name = L"gunaCheckBox7";
			this->gunaCheckBox7->Size = System::Drawing::Size(69, 29);
			this->gunaCheckBox7->TabIndex = 8;
			this->gunaCheckBox7->Text = L"مذهبی";
			this->gunaCheckBox7->Click += gcnew System::EventHandler(this, &search::gunaCheckBox7_Click);
			// 
			// gunaCheckBox8
			// 
			this->gunaCheckBox8->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox8->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox8->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox8->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox8->Location = System::Drawing::Point(51, 30);
			this->gunaCheckBox8->Name = L"gunaCheckBox8";
			this->gunaCheckBox8->Size = System::Drawing::Size(64, 29);
			this->gunaCheckBox8->TabIndex = 9;
			this->gunaCheckBox8->Text = L"درسی";
			this->gunaCheckBox8->Click += gcnew System::EventHandler(this, &search::gunaCheckBox8_Click);
			// 
			// gunaCheckBox9
			// 
			this->gunaCheckBox9->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox9->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox9->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox9->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox9->Location = System::Drawing::Point(642, 65);
			this->gunaCheckBox9->Name = L"gunaCheckBox9";
			this->gunaCheckBox9->Size = System::Drawing::Size(69, 29);
			this->gunaCheckBox9->TabIndex = 10;
			this->gunaCheckBox9->Text = L"تاریخی";
			this->gunaCheckBox9->Click += gcnew System::EventHandler(this, &search::gunaCheckBox9_Click);
			// 
			// gunaPanel4
			// 
			this->gunaPanel4->Controls->Add(this->gunaCheckBox19);
			this->gunaPanel4->Controls->Add(this->gunaCheckBox18);
			this->gunaPanel4->Controls->Add(this->gunaCheckBox17);
			this->gunaPanel4->Controls->Add(this->gunaLabel3);
			this->gunaPanel4->Location = System::Drawing::Point(60, 511);
			this->gunaPanel4->Name = L"gunaPanel4";
			this->gunaPanel4->Size = System::Drawing::Size(943, 49);
			this->gunaPanel4->TabIndex = 6;
			// 
			// gunaCheckBox19
			// 
			this->gunaCheckBox19->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox19->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox19->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox19->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox19->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox19->Location = System::Drawing::Point(80, 10);
			this->gunaCheckBox19->Name = L"gunaCheckBox19";
			this->gunaCheckBox19->Size = System::Drawing::Size(59, 29);
			this->gunaCheckBox19->TabIndex = 8;
			this->gunaCheckBox19->Text = L"چاپی";
			this->gunaCheckBox19->Click += gcnew System::EventHandler(this, &search::gunaCheckBox19_Click);
			// 
			// gunaCheckBox18
			// 
			this->gunaCheckBox18->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox18->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox18->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox18->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox18->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox18->Location = System::Drawing::Point(344, 9);
			this->gunaCheckBox18->Name = L"gunaCheckBox18";
			this->gunaCheckBox18->Size = System::Drawing::Size(80, 29);
			this->gunaCheckBox18->TabIndex = 7;
			this->gunaCheckBox18->Text = L"دیجیتالی";
			this->gunaCheckBox18->Click += gcnew System::EventHandler(this, &search::gunaCheckBox18_Click);
			// 
			// gunaCheckBox17
			// 
			this->gunaCheckBox17->BaseColor = System::Drawing::Color::White;
			this->gunaCheckBox17->CheckedOffColor = System::Drawing::Color::Gray;
			this->gunaCheckBox17->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCheckBox17->FillColor = System::Drawing::Color::White;
			this->gunaCheckBox17->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaCheckBox17->Location = System::Drawing::Point(586, 9);
			this->gunaCheckBox17->Name = L"gunaCheckBox17";
			this->gunaCheckBox17->Size = System::Drawing::Size(54, 29);
			this->gunaCheckBox17->TabIndex = 6;
			this->gunaCheckBox17->Text = L"همه";
			this->gunaCheckBox17->Click += gcnew System::EventHandler(this, &search::gunaCheckBox17_Click);
			// 
			// gunaLabel3
			// 
			this->gunaLabel3->AutoSize = true;
			this->gunaLabel3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel3->Location = System::Drawing::Point(850, 6);
			this->gunaLabel3->Name = L"gunaLabel3";
			this->gunaLabel3->Size = System::Drawing::Size(80, 32);
			this->gunaLabel3->TabIndex = 5;
			this->gunaLabel3->Text = L"نوع کتاب";
			// 
			// gunaPanel5
			// 
			this->gunaPanel5->Controls->Add(this->gunaTextBox5);
			this->gunaPanel5->Controls->Add(this->gunaTextBox4);
			this->gunaPanel5->Controls->Add(this->gunaTrackBar2);
			this->gunaPanel5->Controls->Add(this->gunaTrackBar1);
			this->gunaPanel5->Controls->Add(this->gunaLabel4);
			this->gunaPanel5->Location = System::Drawing::Point(59, 566);
			this->gunaPanel5->Name = L"gunaPanel5";
			this->gunaPanel5->Size = System::Drawing::Size(944, 173);
			this->gunaPanel5->TabIndex = 7;
			// 
			// gunaTextBox5
			// 
			this->gunaTextBox5->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox5->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox5->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox5->Location = System::Drawing::Point(38, 90);
			this->gunaTextBox5->Name = L"gunaTextBox5";
			this->gunaTextBox5->PasswordChar = '\0';
			this->gunaTextBox5->SelectedText = L"";
			this->gunaTextBox5->Size = System::Drawing::Size(687, 33);
			this->gunaTextBox5->TabIndex = 10;
			this->gunaTextBox5->Text = L"999";
			this->gunaTextBox5->TextChanged += gcnew System::EventHandler(this, &search::gunaTextBox5_TextChanged);
			// 
			// gunaTextBox4
			// 
			this->gunaTextBox4->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox4->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox4->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox4->Location = System::Drawing::Point(38, 23);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(687, 33);
			this->gunaTextBox4->TabIndex = 9;
			this->gunaTextBox4->Text = L"0";
			this->gunaTextBox4->TextChanged += gcnew System::EventHandler(this, &search::gunaTextBox4_TextChanged);
			// 
			// gunaTrackBar2
			// 
			this->gunaTrackBar2->Location = System::Drawing::Point(38, 128);
			this->gunaTrackBar2->Maximum = 100000;
			this->gunaTrackBar2->Name = L"gunaTrackBar2";
			this->gunaTrackBar2->Size = System::Drawing::Size(685, 23);
			this->gunaTrackBar2->TabIndex = 8;
			this->gunaTrackBar2->TrackColor = System::Drawing::Color::DimGray;
			this->gunaTrackBar2->TrackHoverColor = System::Drawing::Color::Gray;
			this->gunaTrackBar2->TrackIdleColor = System::Drawing::Color::Silver;
			this->gunaTrackBar2->TrackPressedColor = System::Drawing::Color::Black;
			this->gunaTrackBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &search::gunaTrackBar2_Scroll);
			// 
			// gunaTrackBar1
			// 
			this->gunaTrackBar1->Location = System::Drawing::Point(38, 61);
			this->gunaTrackBar1->Maximum = 100000;
			this->gunaTrackBar1->Name = L"gunaTrackBar1";
			this->gunaTrackBar1->Size = System::Drawing::Size(685, 23);
			this->gunaTrackBar1->TabIndex = 7;
			this->gunaTrackBar1->TrackColor = System::Drawing::Color::DimGray;
			this->gunaTrackBar1->TrackHoverColor = System::Drawing::Color::Gray;
			this->gunaTrackBar1->TrackIdleColor = System::Drawing::Color::Silver;
			this->gunaTrackBar1->TrackPressedColor = System::Drawing::Color::Black;
			this->gunaTrackBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &search::gunaTrackBar1_Scroll);
			// 
			// gunaLabel4
			// 
			this->gunaLabel4->AutoSize = true;
			this->gunaLabel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel4->Location = System::Drawing::Point(872, 23);
			this->gunaLabel4->Name = L"gunaLabel4";
			this->gunaLabel4->Size = System::Drawing::Size(45, 20);
			this->gunaLabel4->TabIndex = 6;
			this->gunaLabel4->Text = L"قیمت";
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
			this->panel2->Location = System::Drawing::Point(60, 804);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(930, 146);
			this->panel2->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(325, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 139);
			this->button1->TabIndex = 15;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(1002, 0);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(107, 139);
			this->button13->TabIndex = 14;
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(889, 0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(107, 139);
			this->button11->TabIndex = 12;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(776, 0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(107, 139);
			this->button8->TabIndex = 9;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(-15, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(107, 139);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(663, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 139);
			this->button6->TabIndex = 7;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(551, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 139);
			this->button5->TabIndex = 6;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(438, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 139);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(212, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 139);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(106, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 139);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// gunaLabel5
			// 
			this->gunaLabel5->AutoSize = true;
			this->gunaLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel5->Location = System::Drawing::Point(884, 763);
			this->gunaLabel5->Name = L"gunaLabel5";
			this->gunaLabel5->Size = System::Drawing::Size(135, 20);
			this->gunaLabel5->TabIndex = 9;
			this->gunaLabel5->Text = L"جست و جو های اخیر";
			// 
			// SEARCHPANEL
			// 
			this->SEARCHPANEL->BackColor = System::Drawing::Color::Transparent;
			this->SEARCHPANEL->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SEARCHPANEL.BackgroundImage")));
			this->SEARCHPANEL->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SEARCHPANEL->Controls->Add(this->gunaGradientPanel2);
			this->SEARCHPANEL->Controls->Add(this->gunaPanel1);
			this->SEARCHPANEL->Controls->Add(this->panel2);
			this->SEARCHPANEL->Controls->Add(this->gunaButton1);
			this->SEARCHPANEL->Controls->Add(this->gunaLabel5);
			this->SEARCHPANEL->Controls->Add(this->gunaButton2);
			this->SEARCHPANEL->Controls->Add(this->panel1);
			this->SEARCHPANEL->Controls->Add(this->gunaPanel3);
			this->SEARCHPANEL->Controls->Add(this->gunaPanel5);
			this->SEARCHPANEL->Controls->Add(this->gunaPanel2);
			this->SEARCHPANEL->Controls->Add(this->gunaPanel4);
			this->SEARCHPANEL->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SEARCHPANEL->GradientColor1 = System::Drawing::Color::White;
			this->SEARCHPANEL->GradientColor2 = System::Drawing::Color::White;
			this->SEARCHPANEL->GradientColor3 = System::Drawing::Color::White;
			this->SEARCHPANEL->GradientColor4 = System::Drawing::Color::White;
			this->SEARCHPANEL->Location = System::Drawing::Point(0, 0);
			this->SEARCHPANEL->Name = L"SEARCHPANEL";
			this->SEARCHPANEL->Size = System::Drawing::Size(1101, 1000);
			this->SEARCHPANEL->TabIndex = 10;
			this->SEARCHPANEL->Text = L"gunaGradientPanel1";
			this->SEARCHPANEL->SizeChanged += gcnew System::EventHandler(this, &search::SEARCHPANEL_SizeChanged);
			// 
			// gunaGradientPanel2
			// 
			this->gunaGradientPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientPanel2.BackgroundImage")));
			this->gunaGradientPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaGradientPanel2->Controls->Add(this->advancedsearchlabel);
			this->gunaGradientPanel2->GradientColor1 = System::Drawing::Color::White;
			this->gunaGradientPanel2->GradientColor2 = System::Drawing::Color::White;
			this->gunaGradientPanel2->GradientColor3 = System::Drawing::Color::White;
			this->gunaGradientPanel2->GradientColor4 = System::Drawing::Color::White;
			this->gunaGradientPanel2->Location = System::Drawing::Point(63, 107);
			this->gunaGradientPanel2->Name = L"gunaGradientPanel2";
			this->gunaGradientPanel2->Size = System::Drawing::Size(940, 81);
			this->gunaGradientPanel2->TabIndex = 10;
			this->gunaGradientPanel2->Text = L"gunaGradientPanel2";
			// 
			// advancedsearchlabel
			// 
			this->advancedsearchlabel->AutoSize = true;
			this->advancedsearchlabel->Font = (gcnew System::Drawing::Font(L"B Titr", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->advancedsearchlabel->Location = System::Drawing::Point(357, 13);
			this->advancedsearchlabel->Name = L"advancedsearchlabel";
			this->advancedsearchlabel->Size = System::Drawing::Size(228, 49);
			this->advancedsearchlabel->TabIndex = 0;
			this->advancedsearchlabel->Text = L"جست و جوی پیشرفته";
			// 
			// search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->SEARCHPANEL);
			this->Name = L"search";
			this->Size = System::Drawing::Size(1101, 1000);
			this->Load += gcnew System::EventHandler(this, &search::search_Load);
			this->gunaPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->gunaPanel2->ResumeLayout(false);
			this->gunaPanel2->PerformLayout();
			this->gunaPanel3->ResumeLayout(false);
			this->gunaPanel3->PerformLayout();
			this->gunaPanel4->ResumeLayout(false);
			this->gunaPanel4->PerformLayout();
			this->gunaPanel5->ResumeLayout(false);
			this->gunaPanel5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->SEARCHPANEL->ResumeLayout(false);
			this->SEARCHPANEL->PerformLayout();
			this->gunaGradientPanel2->ResumeLayout(false);
			this->gunaGradientPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void check()
	{
		if (gunaCheckBox2->Checked == false || gunaCheckBox3->Checked == false || gunaCheckBox20->Checked == false)
		{
			gunaCheckBox1->Checked = false;
		}
		if (gunaCheckBox2->Checked == true && gunaCheckBox3->Checked == true && gunaCheckBox20->Checked == true)
		{
			gunaCheckBox1->Checked = true;
		}
	}
	private: System::Void gunaCheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gunaCheckBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gunaCheckBox1->Checked == true)
		{
			gunaCheckBox3->Checked = true;
			gunaCheckBox2->Checked = true;
			gunaCheckBox20->Checked = true;
		}
		else
		{
			gunaCheckBox3->Checked = false;
			gunaCheckBox2->Checked = false;
			gunaCheckBox20->Checked = false;
		}
	}

	private: System::Void gunaCheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//check();
	}

	private: System::Void gunaCheckBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		check();
	}

	private: System::Void gunaCheckBox20_Click(System::Object^ sender, System::EventArgs^ e) {
		check();
	}
	private: void check_Book()
	{
		if (gunaCheckBox5->Checked == true && gunaCheckBox6->Checked == true && gunaCheckBox7->Checked == true && gunaCheckBox8->Checked == true
			&& gunaCheckBox9->Checked == true && gunaCheckBox10->Checked == true && gunaCheckBox11->Checked == true && gunaCheckBox12->Checked == true
			&& gunaCheckBox13->Checked == true && gunaCheckBox14->Checked == true && gunaCheckBox15->Checked == true && gunaCheckBox16->Checked == true)
		{
			gunaCheckBox4->Checked = true;
		}
		if (gunaCheckBox5->Checked == false || gunaCheckBox6->Checked == false || gunaCheckBox7->Checked == false || gunaCheckBox8->Checked == false 
			|| gunaCheckBox9->Checked == false || gunaCheckBox10->Checked == false || gunaCheckBox11->Checked == false || gunaCheckBox12->Checked == false 
			|| gunaCheckBox13->Checked == false || gunaCheckBox14->Checked == false || gunaCheckBox15->Checked == false || gunaCheckBox16->Checked == false)
		{
			gunaCheckBox4->Checked = false;
		}
	}
	private: System::Void gunaCheckBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gunaCheckBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gunaCheckBox4->Checked == true)
		{
			gunaCheckBox5->Checked = true;
			gunaCheckBox6->Checked = true;
			gunaCheckBox7->Checked = true;
			gunaCheckBox8->Checked = true;
			gunaCheckBox9->Checked = true;
			gunaCheckBox10->Checked = true;
			gunaCheckBox11->Checked = true;
			gunaCheckBox12->Checked = true;
			gunaCheckBox13->Checked = true;
			gunaCheckBox14->Checked = true;
			gunaCheckBox15->Checked = true;
			gunaCheckBox16->Checked = true;
		}
		else
		{
			gunaCheckBox5->Checked = false;
			gunaCheckBox6->Checked = false;
			gunaCheckBox7->Checked = false;
			gunaCheckBox8->Checked = false;
			gunaCheckBox9->Checked = false;
			gunaCheckBox10->Checked = false;
			gunaCheckBox11->Checked = false;
			gunaCheckBox12->Checked = false;
			gunaCheckBox13->Checked = false;
			gunaCheckBox14->Checked = false;
			gunaCheckBox15->Checked = false;
			gunaCheckBox16->Checked = false;
		}
	}
	private: System::Void gunaCheckBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gunaCheckBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private: System::Void gunaCheckBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private: System::Void gunaCheckBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private: System::Void gunaCheckBox8_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private: System::Void gunaCheckBox9_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private: System::Void gunaCheckBox10_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private: System::Void gunaCheckBox11_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private: System::Void gunaCheckBox12_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private: System::Void gunaCheckBox13_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private: System::Void gunaCheckBox14_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private: System::Void gunaCheckBox15_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private: System::Void gunaCheckBox16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gunaCheckBox16_Click(System::Object^ sender, System::EventArgs^ e) {
		check_Book();
	}
	private:void check_type()
	{
		if (gunaCheckBox18->Checked == true && gunaCheckBox19->Checked == true)
		{
			gunaCheckBox17->Checked = true;
		}
		if (gunaCheckBox18->Checked == false || gunaCheckBox19->Checked == false)
		{
			gunaCheckBox17->Checked = false;
		}
	}

	private: System::Void gunaCheckBox17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gunaCheckBox17->Checked == true)
		{
			gunaCheckBox18->Checked = true;
			gunaCheckBox19->Checked = true;
		}
		else
		{
			gunaCheckBox18->Checked = false;
			gunaCheckBox19->Checked = false;
		}
	}

	private: System::Void gunaCheckBox18_Click(System::Object^ sender, System::EventArgs^ e) {
		check_type();
	}
	private: System::Void gunaCheckBox19_Click(System::Object^ sender, System::EventArgs^ e) {
		check_type();
	}
	private: System::Void gunaTrackBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		gunaTextBox4->Text = gunaTrackBar1->Value.ToString();

		if (gunaTrackBar1->Value >= gunaTrackBar2->Value)
		{
			gunaTextBox5->Text = gunaTrackBar1->Value.ToString();
			gunaTrackBar2->Value = gunaTrackBar1->Value;
		}
	}
	private: System::Void gunaTrackBar2_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		gunaTextBox5->Text = gunaTrackBar2->Value.ToString();
		if (gunaTrackBar1->Value >= gunaTrackBar2->Value)
		{
			gunaTextBox5->Text = gunaTrackBar1->Value.ToString();
			gunaTrackBar2->Value = gunaTrackBar1->Value;
		}
		else
		{
			gunaTextBox5->Text = gunaTrackBar2->Value.ToString();
		}
	}

	private: System::Void gunaTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		double a;
		if (gunaTextBox4->Text == "")
		{
			//a = 0;
			gunaTextBox4->Text = "0";
		}
		System::String^ string_system = gunaTextBox4->Text;
		//std::string std_system = msclr::interop::marshal_as<std::string>(string_system);
		//a = Convert::ToDouble(string_system);
		a = Double::Parse(string_system);
		if (a >= 1000000.0)
		{
			a = 1000000.0;
		}
		gunaTrackBar1->Value = a;
		if (gunaTrackBar1->Value >= gunaTrackBar2->Value)
		{
			gunaTrackBar2->Value = gunaTrackBar1->Value;
			//PLtractbar->Value = PHtrackbar->Value;
		}
	}

	private: System::Void gunaTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		double a;
		System::String^ string_system = gunaTextBox5->Text;
		a = Double::Parse(string_system);
		if (a >= 1000000.0)
		{
			a = 1000000.0;
		}
		gunaTrackBar2->Value = a;
		if (gunaTrackBar1->Value > gunaTrackBar2->Value)
		{
			gunaTrackBar2->Value = gunaTrackBar1->Value;
			a = gunaTrackBar1->Value;

		}
	}
	private: System::Void search_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gunaCheckBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		check();
	}
	private: System::Void SEARCHPANEL_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		if (SEARCHPANEL->Width >= 1101||SEARCHPANEL->Height>=1000)
		{
			SEARCHPANEL->Location = System::Drawing::Point(SEARCHPANEL->Right + 200);
		}
		else
		{
			SEARCHPANEL->Location = System::Drawing::Point(SEARCHPANEL->Right - 100);
		}
	}
};
}
