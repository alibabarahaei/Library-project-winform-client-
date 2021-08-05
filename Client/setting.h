#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for setting
	/// </summary>
	public ref class setting : public System::Windows::Forms::UserControl
	{
	public:
		setting(void)
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
		~setting()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaElipsePanel^ SETTINGHEADERPANEL;
	protected:

	protected:
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel8;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox6;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox1;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox2;
	private: Guna::UI::WinForms::GunaLinePanel^ INFORMATION1;

	private: Guna::UI::WinForms::GunaLabel^ gunaLabel6;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel5;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel4;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox5;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox5;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: System::Windows::Forms::Label^ label1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox7;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox8;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel3;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel9;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox8;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox10;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox9;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox7;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox11;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel10;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: Guna::UI::WinForms::GunaGradientPanel^ gunaGradientPanel1;
	private: Guna::UI::WinForms::GunaGradientPanel^ INFORMATION1PANEL;
	private: Guna::UI::WinForms::GunaLinePanel^ PASSWORD;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton2;
	private: Guna::UI::WinForms::GunaCircleButton^ gunaCircleButton1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox13;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox12;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel12;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel11;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel7;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox4;
	private: Guna::UI::WinForms::GunaCirclePictureBox^ gunaCirclePictureBox6;
	private: Guna::UI::WinForms::GunaGradientPanel^ gunaGradientPanel5;
	private: Guna::UI::WinForms::GunaGradientPanel^ gunaGradientPanel2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(setting::typeid));
			this->SETTINGHEADERPANEL = (gcnew Guna::UI::WinForms::GunaElipsePanel());
			this->gunaGradientPanel2 = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->gunaLabel8 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaTextBox6 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaCirclePictureBox1 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaCirclePictureBox2 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->INFORMATION1 = (gcnew Guna::UI::WinForms::GunaLinePanel());
			this->gunaLabel9 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaCirclePictureBox8 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaTextBox10 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaTextBox9 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaCirclePictureBox7 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaLabel6 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLabel5 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaCirclePictureBox3 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLabel4 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaCirclePictureBox4 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaTextBox5 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaCirclePictureBox5 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaTextBox11 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLabel10 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaTextBox7 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox8 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLabel3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaGradientButton1 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->gunaGradientPanel1 = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->INFORMATION1PANEL = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->PASSWORD = (gcnew Guna::UI::WinForms::GunaLinePanel());
			this->gunaCircleButton2 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaCircleButton1 = (gcnew Guna::UI::WinForms::GunaCircleButton());
			this->gunaTextBox13 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox12 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLabel12 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel11 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaLabel7 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaCirclePictureBox6 = (gcnew Guna::UI::WinForms::GunaCirclePictureBox());
			this->gunaGradientPanel5 = (gcnew Guna::UI::WinForms::GunaGradientPanel());
			this->SETTINGHEADERPANEL->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox2))->BeginInit();
			this->INFORMATION1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox5))->BeginInit();
			this->gunaGradientPanel1->SuspendLayout();
			this->INFORMATION1PANEL->SuspendLayout();
			this->PASSWORD->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox6))->BeginInit();
			this->gunaGradientPanel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// SETTINGHEADERPANEL
			// 
			this->SETTINGHEADERPANEL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SETTINGHEADERPANEL->AutoSize = true;
			this->SETTINGHEADERPANEL->BackColor = System::Drawing::Color::Transparent;
			this->SETTINGHEADERPANEL->BaseColor = System::Drawing::Color::DeepSkyBlue;
			this->SETTINGHEADERPANEL->Controls->Add(this->gunaGradientPanel2);
			this->SETTINGHEADERPANEL->Controls->Add(this->gunaLabel8);
			this->SETTINGHEADERPANEL->Controls->Add(this->gunaTextBox6);
			this->SETTINGHEADERPANEL->Controls->Add(this->gunaCirclePictureBox1);
			this->SETTINGHEADERPANEL->Controls->Add(this->gunaCirclePictureBox2);
			this->SETTINGHEADERPANEL->Location = System::Drawing::Point(39, 5);
			this->SETTINGHEADERPANEL->Name = L"SETTINGHEADERPANEL";
			this->SETTINGHEADERPANEL->Size = System::Drawing::Size(986, 770);
			this->SETTINGHEADERPANEL->TabIndex = 1;
			// 
			// gunaGradientPanel2
			// 
			this->gunaGradientPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientPanel2.BackgroundImage")));
			this->gunaGradientPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaGradientPanel2->GradientColor1 = System::Drawing::Color::White;
			this->gunaGradientPanel2->GradientColor2 = System::Drawing::Color::White;
			this->gunaGradientPanel2->GradientColor3 = System::Drawing::Color::White;
			this->gunaGradientPanel2->GradientColor4 = System::Drawing::Color::White;
			this->gunaGradientPanel2->Location = System::Drawing::Point(38, 219);
			this->gunaGradientPanel2->Name = L"gunaGradientPanel2";
			this->gunaGradientPanel2->Size = System::Drawing::Size(568, 548);
			this->gunaGradientPanel2->TabIndex = 15;
			this->gunaGradientPanel2->Text = L"gunaGradientPanel2";
			// 
			// gunaLabel8
			// 
			this->gunaLabel8->AutoSize = true;
			this->gunaLabel8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel8->Location = System::Drawing::Point(690, 125);
			this->gunaLabel8->Name = L"gunaLabel8";
			this->gunaLabel8->Size = System::Drawing::Size(54, 23);
			this->gunaLabel8->TabIndex = 15;
			this->gunaLabel8->Text = L"Name ";
			// 
			// gunaTextBox6
			// 
			this->gunaTextBox6->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox6->Enabled = false;
			this->gunaTextBox6->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox6->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox6->Location = System::Drawing::Point(619, 62);
			this->gunaTextBox6->Name = L"gunaTextBox6";
			this->gunaTextBox6->PasswordChar = '\0';
			this->gunaTextBox6->SelectedText = L"";
			this->gunaTextBox6->Size = System::Drawing::Size(160, 33);
			this->gunaTextBox6->TabIndex = 10;
			this->gunaTextBox6->Text = L"No Name";
			this->gunaTextBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaTextBox6->Visible = false;
			// 
			// gunaCirclePictureBox1
			// 
			this->gunaCirclePictureBox1->BaseColor = System::Drawing::Color::Maroon;
			this->gunaCirclePictureBox1->Location = System::Drawing::Point(815, 52);
			this->gunaCirclePictureBox1->Name = L"gunaCirclePictureBox1";
			this->gunaCirclePictureBox1->Size = System::Drawing::Size(118, 124);
			this->gunaCirclePictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox1->TabIndex = 2;
			this->gunaCirclePictureBox1->TabStop = false;
			this->gunaCirclePictureBox1->UseTransfarantBackground = false;
			// 
			// gunaCirclePictureBox2
			// 
			this->gunaCirclePictureBox2->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox2->Location = System::Drawing::Point(60, 147);
			this->gunaCirclePictureBox2->Name = L"gunaCirclePictureBox2";
			this->gunaCirclePictureBox2->Size = System::Drawing::Size(68, 66);
			this->gunaCirclePictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox2->TabIndex = 2;
			this->gunaCirclePictureBox2->TabStop = false;
			this->gunaCirclePictureBox2->UseTransfarantBackground = false;
			// 
			// INFORMATION1
			// 
			this->INFORMATION1->AutoSize = true;
			this->INFORMATION1->Controls->Add(this->gunaLabel9);
			this->INFORMATION1->Controls->Add(this->gunaCirclePictureBox8);
			this->INFORMATION1->Controls->Add(this->gunaTextBox10);
			this->INFORMATION1->Controls->Add(this->gunaLabel1);
			this->INFORMATION1->Controls->Add(this->gunaTextBox9);
			this->INFORMATION1->Controls->Add(this->gunaCirclePictureBox7);
			this->INFORMATION1->Controls->Add(this->gunaLabel6);
			this->INFORMATION1->Controls->Add(this->label1);
			this->INFORMATION1->Controls->Add(this->gunaTextBox2);
			this->INFORMATION1->Controls->Add(this->gunaLabel5);
			this->INFORMATION1->Controls->Add(this->gunaCirclePictureBox3);
			this->INFORMATION1->Controls->Add(this->gunaTextBox1);
			this->INFORMATION1->Controls->Add(this->gunaLabel4);
			this->INFORMATION1->Controls->Add(this->gunaCirclePictureBox4);
			this->INFORMATION1->Controls->Add(this->gunaTextBox5);
			this->INFORMATION1->Controls->Add(this->gunaCirclePictureBox5);
			this->INFORMATION1->LineColor = System::Drawing::Color::Transparent;
			this->INFORMATION1->LineStyle = System::Windows::Forms::BorderStyle::None;
			this->INFORMATION1->Location = System::Drawing::Point(609, 41);
			this->INFORMATION1->Name = L"INFORMATION1";
			this->INFORMATION1->Size = System::Drawing::Size(424, 453);
			this->INFORMATION1->TabIndex = 3;
			// 
			// gunaLabel9
			// 
			this->gunaLabel9->AutoSize = true;
			this->gunaLabel9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel9->Location = System::Drawing::Point(158, 148);
			this->gunaLabel9->Name = L"gunaLabel9";
			this->gunaLabel9->Size = System::Drawing::Size(67, 23);
			this->gunaLabel9->TabIndex = 19;
			this->gunaLabel9->Text = L"شماره منزل";
			// 
			// gunaCirclePictureBox8
			// 
			this->gunaCirclePictureBox8->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox8.Image")));
			this->gunaCirclePictureBox8->Location = System::Drawing::Point(349, 82);
			this->gunaCirclePictureBox8->Name = L"gunaCirclePictureBox8";
			this->gunaCirclePictureBox8->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox8->TabIndex = 17;
			this->gunaCirclePictureBox8->TabStop = false;
			this->gunaCirclePictureBox8->UseTransfarantBackground = false;
			// 
			// gunaTextBox10
			// 
			this->gunaTextBox10->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox10->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox10->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox10->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox10->Enabled = false;
			this->gunaTextBox10->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox10->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox10->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox10->Location = System::Drawing::Point(111, 107);
			this->gunaTextBox10->Name = L"gunaTextBox10";
			this->gunaTextBox10->PasswordChar = '\0';
			this->gunaTextBox10->Radius = 12;
			this->gunaTextBox10->SelectedText = L"";
			this->gunaTextBox10->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox10->TabIndex = 18;
			this->gunaTextBox10->Text = L"02188448844";
			this->gunaTextBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel1->Location = System::Drawing::Point(165, 400);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(53, 23);
			this->gunaLabel1->TabIndex = 16;
			this->gunaLabel1->Text = L"کد پستی";
			// 
			// gunaTextBox9
			// 
			this->gunaTextBox9->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox9->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox9->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox9->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox9->Enabled = false;
			this->gunaTextBox9->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox9->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox9->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox9->Location = System::Drawing::Point(111, 365);
			this->gunaTextBox9->Name = L"gunaTextBox9";
			this->gunaTextBox9->PasswordChar = '\0';
			this->gunaTextBox9->Radius = 12;
			this->gunaTextBox9->SelectedText = L"";
			this->gunaTextBox9->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox9->TabIndex = 15;
			this->gunaTextBox9->Text = L"4444444444";
			this->gunaTextBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaCirclePictureBox7
			// 
			this->gunaCirclePictureBox7->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox7.Image")));
			this->gunaCirclePictureBox7->Location = System::Drawing::Point(349, 374);
			this->gunaCirclePictureBox7->Name = L"gunaCirclePictureBox7";
			this->gunaCirclePictureBox7->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox7->TabIndex = 14;
			this->gunaCirclePictureBox7->TabStop = false;
			this->gunaCirclePictureBox7->UseTransfarantBackground = false;
			// 
			// gunaLabel6
			// 
			this->gunaLabel6->AutoSize = true;
			this->gunaLabel6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel6->Location = System::Drawing::Point(157, 69);
			this->gunaLabel6->Name = L"gunaLabel6";
			this->gunaLabel6->Size = System::Drawing::Size(69, 23);
			this->gunaLabel6->TabIndex = 13;
			this->gunaLabel6->Text = L"شماره همراه";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(242, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 2;
			// 
			// gunaTextBox2
			// 
			this->gunaTextBox2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox2->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox2->Enabled = false;
			this->gunaTextBox2->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox2->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox2->Location = System::Drawing::Point(111, 186);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->Radius = 12;
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox2->TabIndex = 5;
			this->gunaTextBox2->Text = L"@No_Name";
			this->gunaTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaLabel5
			// 
			this->gunaLabel5->AutoSize = true;
			this->gunaLabel5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel5->Location = System::Drawing::Point(162, 223);
			this->gunaLabel5->Name = L"gunaLabel5";
			this->gunaLabel5->Size = System::Drawing::Size(59, 23);
			this->gunaLabel5->TabIndex = 13;
			this->gunaLabel5->Text = L"نام کاربری";
			// 
			// gunaCirclePictureBox3
			// 
			this->gunaCirclePictureBox3->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox3.Image")));
			this->gunaCirclePictureBox3->Location = System::Drawing::Point(349, 3);
			this->gunaCirclePictureBox3->Name = L"gunaCirclePictureBox3";
			this->gunaCirclePictureBox3->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox3->TabIndex = 0;
			this->gunaCirclePictureBox3->TabStop = false;
			this->gunaCirclePictureBox3->UseTransfarantBackground = false;
			// 
			// gunaTextBox1
			// 
			this->gunaTextBox1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox1->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox1->Enabled = false;
			this->gunaTextBox1->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox1->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox1->Location = System::Drawing::Point(111, 28);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->Radius = 12;
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox1->TabIndex = 1;
			this->gunaTextBox1->Text = L"0989123456789";
			this->gunaTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaLabel4
			// 
			this->gunaLabel4->AutoSize = true;
			this->gunaLabel4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel4->Location = System::Drawing::Point(173, 314);
			this->gunaLabel4->Name = L"gunaLabel4";
			this->gunaLabel4->Size = System::Drawing::Size(36, 23);
			this->gunaLabel4->TabIndex = 13;
			this->gunaLabel4->Text = L"ایمیل";
			// 
			// gunaCirclePictureBox4
			// 
			this->gunaCirclePictureBox4->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox4.Image")));
			this->gunaCirclePictureBox4->Location = System::Drawing::Point(349, 276);
			this->gunaCirclePictureBox4->Name = L"gunaCirclePictureBox4";
			this->gunaCirclePictureBox4->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox4->TabIndex = 6;
			this->gunaCirclePictureBox4->TabStop = false;
			this->gunaCirclePictureBox4->UseTransfarantBackground = false;
			// 
			// gunaTextBox5
			// 
			this->gunaTextBox5->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox5->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox5->Enabled = false;
			this->gunaTextBox5->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox5->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox5->Location = System::Drawing::Point(111, 279);
			this->gunaTextBox5->Name = L"gunaTextBox5";
			this->gunaTextBox5->PasswordChar = '\0';
			this->gunaTextBox5->Radius = 12;
			this->gunaTextBox5->SelectedText = L"";
			this->gunaTextBox5->Size = System::Drawing::Size(160, 32);
			this->gunaTextBox5->TabIndex = 7;
			this->gunaTextBox5->Text = L"example@gmail.com";
			this->gunaTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaCirclePictureBox5
			// 
			this->gunaCirclePictureBox5->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox5.Image")));
			this->gunaCirclePictureBox5->Location = System::Drawing::Point(349, 180);
			this->gunaCirclePictureBox5->Name = L"gunaCirclePictureBox5";
			this->gunaCirclePictureBox5->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox5->TabIndex = 9;
			this->gunaCirclePictureBox5->TabStop = false;
			this->gunaCirclePictureBox5->UseTransfarantBackground = false;
			// 
			// gunaTextBox11
			// 
			this->gunaTextBox11->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox11->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox11->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox11->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox11->Enabled = false;
			this->gunaTextBox11->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox11->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox11->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox11->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox11->Location = System::Drawing::Point(144, 296);
			this->gunaTextBox11->Name = L"gunaTextBox11";
			this->gunaTextBox11->PasswordChar = '\0';
			this->gunaTextBox11->Radius = 12;
			this->gunaTextBox11->SelectedText = L"";
			this->gunaTextBox11->Size = System::Drawing::Size(160, 33);
			this->gunaTextBox11->TabIndex = 14;
			this->gunaTextBox11->Text = L"ایران تهران";
			this->gunaTextBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaLabel10
			// 
			this->gunaLabel10->AutoSize = true;
			this->gunaLabel10->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel10->Location = System::Drawing::Point(388, 296);
			this->gunaLabel10->Name = L"gunaLabel10";
			this->gunaLabel10->Size = System::Drawing::Size(38, 23);
			this->gunaLabel10->TabIndex = 13;
			this->gunaLabel10->Text = L"آدرس";
			// 
			// gunaTextBox7
			// 
			this->gunaTextBox7->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox7->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox7->Enabled = false;
			this->gunaTextBox7->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox7->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox7->Location = System::Drawing::Point(144, 195);
			this->gunaTextBox7->Name = L"gunaTextBox7";
			this->gunaTextBox7->PasswordChar = '\0';
			this->gunaTextBox7->Radius = 12;
			this->gunaTextBox7->SelectedText = L"";
			this->gunaTextBox7->Size = System::Drawing::Size(160, 33);
			this->gunaTextBox7->TabIndex = 10;
			this->gunaTextBox7->Text = L"بی نام";
			this->gunaTextBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaTextBox8
			// 
			this->gunaTextBox8->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox8->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox8->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox8->Enabled = false;
			this->gunaTextBox8->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox8->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox8->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox8->Location = System::Drawing::Point(144, 247);
			this->gunaTextBox8->Name = L"gunaTextBox8";
			this->gunaTextBox8->PasswordChar = '\0';
			this->gunaTextBox8->Radius = 12;
			this->gunaTextBox8->SelectedText = L"";
			this->gunaTextBox8->Size = System::Drawing::Size(160, 33);
			this->gunaTextBox8->TabIndex = 11;
			this->gunaTextBox8->Text = L"بی نامی";
			this->gunaTextBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaLabel3
			// 
			this->gunaLabel3->AutoSize = true;
			this->gunaLabel3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel3->Location = System::Drawing::Point(373, 247);
			this->gunaLabel3->Name = L"gunaLabel3";
			this->gunaLabel3->Size = System::Drawing::Size(69, 23);
			this->gunaLabel3->TabIndex = 12;
			this->gunaLabel3->Text = L"نام خانوادگی";
			this->gunaLabel3->Click += gcnew System::EventHandler(this, &setting::gunaLabel3_Click);
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel2->Location = System::Drawing::Point(396, 195);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(22, 23);
			this->gunaLabel2->TabIndex = 11;
			this->gunaLabel2->Text = L"نام";
			// 
			// gunaGradientButton1
			// 
			this->gunaGradientButton1->Animated = true;
			this->gunaGradientButton1->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton1->AnimationSpeed = 0.03F;
			this->gunaGradientButton1->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientButton1->BaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->gunaGradientButton1->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->gunaGradientButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton1->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton1->Image = nullptr;
			this->gunaGradientButton1->ImageSize = System::Drawing::Size(0, 0);
			this->gunaGradientButton1->Location = System::Drawing::Point(0, 2);
			this->gunaGradientButton1->Name = L"gunaGradientButton1";
			this->gunaGradientButton1->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->gunaGradientButton1->OnHoverBaseColor2 = System::Drawing::Color::Green;
			this->gunaGradientButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton1->OnHoverImage = nullptr;
			this->gunaGradientButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->Radius = 12;
			this->gunaGradientButton1->Size = System::Drawing::Size(1045, 82);
			this->gunaGradientButton1->TabIndex = 6;
			this->gunaGradientButton1->Text = L"ویرایش اطلاعات";
			this->gunaGradientButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaGradientButton1->Click += gcnew System::EventHandler(this, &setting::gunaGradientButton1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &setting::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Tick += gcnew System::EventHandler(this, &setting::timer2_Tick);
			// 
			// gunaGradientPanel1
			// 
			this->gunaGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientPanel1.BackgroundImage")));
			this->gunaGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaGradientPanel1->Controls->Add(this->SETTINGHEADERPANEL);
			this->gunaGradientPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->gunaGradientPanel1->GradientColor1 = System::Drawing::Color::White;
			this->gunaGradientPanel1->GradientColor2 = System::Drawing::Color::White;
			this->gunaGradientPanel1->GradientColor3 = System::Drawing::Color::White;
			this->gunaGradientPanel1->GradientColor4 = System::Drawing::Color::White;
			this->gunaGradientPanel1->Location = System::Drawing::Point(2, 2);
			this->gunaGradientPanel1->Name = L"gunaGradientPanel1";
			this->gunaGradientPanel1->Size = System::Drawing::Size(1045, 224);
			this->gunaGradientPanel1->TabIndex = 7;
			this->gunaGradientPanel1->Text = L"gunaGradientPanel1";
			// 
			// INFORMATION1PANEL
			// 
			this->INFORMATION1PANEL->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"INFORMATION1PANEL.BackgroundImage")));
			this->INFORMATION1PANEL->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->INFORMATION1PANEL->Controls->Add(this->PASSWORD);
			this->INFORMATION1PANEL->Controls->Add(this->INFORMATION1);
			this->INFORMATION1PANEL->Dock = System::Windows::Forms::DockStyle::Top;
			this->INFORMATION1PANEL->GradientColor1 = System::Drawing::Color::White;
			this->INFORMATION1PANEL->GradientColor2 = System::Drawing::Color::White;
			this->INFORMATION1PANEL->GradientColor3 = System::Drawing::Color::White;
			this->INFORMATION1PANEL->GradientColor4 = System::Drawing::Color::White;
			this->INFORMATION1PANEL->Location = System::Drawing::Point(2, 226);
			this->INFORMATION1PANEL->Name = L"INFORMATION1PANEL";
			this->INFORMATION1PANEL->Size = System::Drawing::Size(1045, 500);
			this->INFORMATION1PANEL->TabIndex = 20;
			this->INFORMATION1PANEL->Text = L"gunaGradientPanel2";
			this->INFORMATION1PANEL->SizeChanged += gcnew System::EventHandler(this, &setting::UNFORMATION1PANEL_SizeChanged);
			// 
			// PASSWORD
			// 
			this->PASSWORD->Controls->Add(this->gunaLabel10);
			this->PASSWORD->Controls->Add(this->gunaTextBox11);
			this->PASSWORD->Controls->Add(this->gunaLabel3);
			this->PASSWORD->Controls->Add(this->gunaCircleButton2);
			this->PASSWORD->Controls->Add(this->gunaLabel2);
			this->PASSWORD->Controls->Add(this->gunaCircleButton1);
			this->PASSWORD->Controls->Add(this->gunaTextBox8);
			this->PASSWORD->Controls->Add(this->gunaTextBox7);
			this->PASSWORD->Controls->Add(this->gunaTextBox13);
			this->PASSWORD->Controls->Add(this->gunaTextBox12);
			this->PASSWORD->Controls->Add(this->gunaLabel12);
			this->PASSWORD->Controls->Add(this->gunaLabel11);
			this->PASSWORD->Controls->Add(this->gunaGradientButton2);
			this->PASSWORD->Controls->Add(this->gunaLabel7);
			this->PASSWORD->Controls->Add(this->gunaTextBox3);
			this->PASSWORD->Controls->Add(this->gunaTextBox4);
			this->PASSWORD->Controls->Add(this->gunaCirclePictureBox6);
			this->PASSWORD->LineColor = System::Drawing::Color::Black;
			this->PASSWORD->LineStyle = System::Windows::Forms::BorderStyle::None;
			this->PASSWORD->Location = System::Drawing::Point(59, 41);
			this->PASSWORD->Name = L"PASSWORD";
			this->PASSWORD->Size = System::Drawing::Size(526, 450);
			this->PASSWORD->TabIndex = 4;
			// 
			// gunaCircleButton2
			// 
			this->gunaCircleButton2->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton2->AnimationSpeed = 0.03F;
			this->gunaCircleButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton2->Enabled = false;
			this->gunaCircleButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton2->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton2->Image = nullptr;
			this->gunaCircleButton2->ImageSize = System::Drawing::Size(52, 52);
			this->gunaCircleButton2->Location = System::Drawing::Point(18, 87);
			this->gunaCircleButton2->Name = L"gunaCircleButton2";
			this->gunaCircleButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton2->OnHoverImage = nullptr;
			this->gunaCircleButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton2->Size = System::Drawing::Size(24, 24);
			this->gunaCircleButton2->TabIndex = 19;
			this->gunaCircleButton2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &setting::gunaCircleButton2_MouseDown);
			this->gunaCircleButton2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &setting::gunaCircleButton2_MouseUp);
			// 
			// gunaCircleButton1
			// 
			this->gunaCircleButton1->AnimationHoverSpeed = 0.07F;
			this->gunaCircleButton1->AnimationSpeed = 0.03F;
			this->gunaCircleButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaCircleButton1->Enabled = false;
			this->gunaCircleButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaCircleButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaCircleButton1->ForeColor = System::Drawing::Color::White;
			this->gunaCircleButton1->Image = nullptr;
			this->gunaCircleButton1->ImageSize = System::Drawing::Size(52, 52);
			this->gunaCircleButton1->Location = System::Drawing::Point(18, 43);
			this->gunaCircleButton1->Name = L"gunaCircleButton1";
			this->gunaCircleButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaCircleButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaCircleButton1->OnHoverImage = nullptr;
			this->gunaCircleButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaCircleButton1->Size = System::Drawing::Size(24, 24);
			this->gunaCircleButton1->TabIndex = 7;
			this->gunaCircleButton1->Click += gcnew System::EventHandler(this, &setting::gunaCircleButton1_Click);
			this->gunaCircleButton1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &setting::gunaCircleButton1_MouseDown);
			this->gunaCircleButton1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &setting::gunaCircleButton1_MouseUp);
			// 
			// gunaTextBox13
			// 
			this->gunaTextBox13->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox13->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox13->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox13->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox13->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox13->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox13->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox13->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox13->Location = System::Drawing::Point(62, 84);
			this->gunaTextBox13->Name = L"gunaTextBox13";
			this->gunaTextBox13->PasswordChar = '*';
			this->gunaTextBox13->Radius = 12;
			this->gunaTextBox13->SelectedText = L"";
			this->gunaTextBox13->Size = System::Drawing::Size(207, 33);
			this->gunaTextBox13->TabIndex = 18;
			this->gunaTextBox13->Text = L"12345678";
			this->gunaTextBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaTextBox12
			// 
			this->gunaTextBox12->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox12->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox12->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox12->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox12->Enabled = false;
			this->gunaTextBox12->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox12->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox12->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox12->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox12->Location = System::Drawing::Point(62, 35);
			this->gunaTextBox12->Name = L"gunaTextBox12";
			this->gunaTextBox12->PasswordChar = '*';
			this->gunaTextBox12->Radius = 12;
			this->gunaTextBox12->SelectedText = L"";
			this->gunaTextBox12->Size = System::Drawing::Size(207, 33);
			this->gunaTextBox12->TabIndex = 17;
			this->gunaTextBox12->Text = L"12345678";
			this->gunaTextBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaLabel12
			// 
			this->gunaLabel12->AutoSize = true;
			this->gunaLabel12->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel12->Location = System::Drawing::Point(276, 85);
			this->gunaLabel12->Name = L"gunaLabel12";
			this->gunaLabel12->Size = System::Drawing::Size(52, 23);
			this->gunaLabel12->TabIndex = 16;
			this->gunaLabel12->Text = L"تکرار رمز";
			// 
			// gunaLabel11
			// 
			this->gunaLabel11->AutoSize = true;
			this->gunaLabel11->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel11->Location = System::Drawing::Point(289, 36);
			this->gunaLabel11->Name = L"gunaLabel11";
			this->gunaLabel11->Size = System::Drawing::Size(26, 23);
			this->gunaLabel11->TabIndex = 15;
			this->gunaLabel11->Text = L"رمز";
			// 
			// gunaGradientButton2
			// 
			this->gunaGradientButton2->AnimationHoverSpeed = 0.07F;
			this->gunaGradientButton2->AnimationSpeed = 0.03F;
			this->gunaGradientButton2->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientButton2->BaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientButton2->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->gunaGradientButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaGradientButton2->ForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->Image = nullptr;
			this->gunaGradientButton2->ImageSize = System::Drawing::Size(0, 0);
			this->gunaGradientButton2->Location = System::Drawing::Point(40, 381);
			this->gunaGradientButton2->Name = L"gunaGradientButton2";
			this->gunaGradientButton2->OnHoverBaseColor1 = System::Drawing::Color::Yellow;
			this->gunaGradientButton2->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->gunaGradientButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->OnHoverImage = nullptr;
			this->gunaGradientButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->Radius = 12;
			this->gunaGradientButton2->Size = System::Drawing::Size(288, 42);
			this->gunaGradientButton2->TabIndex = 7;
			this->gunaGradientButton2->Text = L"ثبت";
			this->gunaGradientButton2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaGradientButton2->Click += gcnew System::EventHandler(this, &setting::gunaGradientButton2_Click);
			// 
			// gunaLabel7
			// 
			this->gunaLabel7->AutoSize = true;
			this->gunaLabel7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel7->Location = System::Drawing::Point(373, 122);
			this->gunaLabel7->Name = L"gunaLabel7";
			this->gunaLabel7->Size = System::Drawing::Size(54, 23);
			this->gunaLabel7->TabIndex = 14;
			this->gunaLabel7->Text = L"تغییر رمز";
			// 
			// gunaTextBox3
			// 
			this->gunaTextBox3->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox3->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox3->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox3->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox3->Location = System::Drawing::Point(62, 35);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->Radius = 12;
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(207, 33);
			this->gunaTextBox3->TabIndex = 1;
			this->gunaTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaTextBox4
			// 
			this->gunaTextBox4->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox4->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->BorderColor = System::Drawing::Color::Silver;
			this->gunaTextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox4->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox4->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaTextBox4->Location = System::Drawing::Point(62, 84);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->Radius = 12;
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(207, 33);
			this->gunaTextBox4->TabIndex = 2;
			this->gunaTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaCirclePictureBox6
			// 
			this->gunaCirclePictureBox6->BaseColor = System::Drawing::Color::White;
			this->gunaCirclePictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaCirclePictureBox6.Image")));
			this->gunaCirclePictureBox6->Location = System::Drawing::Point(365, 27);
			this->gunaCirclePictureBox6->Name = L"gunaCirclePictureBox6";
			this->gunaCirclePictureBox6->Size = System::Drawing::Size(72, 76);
			this->gunaCirclePictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaCirclePictureBox6->TabIndex = 10;
			this->gunaCirclePictureBox6->TabStop = false;
			this->gunaCirclePictureBox6->UseTransfarantBackground = false;
			// 
			// gunaGradientPanel5
			// 
			this->gunaGradientPanel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientPanel5.BackgroundImage")));
			this->gunaGradientPanel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->gunaGradientPanel5->Controls->Add(this->gunaGradientButton1);
			this->gunaGradientPanel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->gunaGradientPanel5->GradientColor1 = System::Drawing::Color::White;
			this->gunaGradientPanel5->GradientColor2 = System::Drawing::Color::White;
			this->gunaGradientPanel5->GradientColor3 = System::Drawing::Color::White;
			this->gunaGradientPanel5->GradientColor4 = System::Drawing::Color::White;
			this->gunaGradientPanel5->Location = System::Drawing::Point(2, 744);
			this->gunaGradientPanel5->Name = L"gunaGradientPanel5";
			this->gunaGradientPanel5->Size = System::Drawing::Size(1045, 84);
			this->gunaGradientPanel5->TabIndex = 22;
			this->gunaGradientPanel5->Text = L"gunaGradientPanel5";
			// 
			// setting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->gunaGradientPanel5);
			this->Controls->Add(this->INFORMATION1PANEL);
			this->Controls->Add(this->gunaGradientPanel1);
			this->Name = L"setting";
			this->Padding = System::Windows::Forms::Padding(2);
			this->Size = System::Drawing::Size(1049, 830);
			this->Load += gcnew System::EventHandler(this, &setting::setting_Load);
			this->SETTINGHEADERPANEL->ResumeLayout(false);
			this->SETTINGHEADERPANEL->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox2))->EndInit();
			this->INFORMATION1->ResumeLayout(false);
			this->INFORMATION1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox5))->EndInit();
			this->gunaGradientPanel1->ResumeLayout(false);
			this->gunaGradientPanel1->PerformLayout();
			this->INFORMATION1PANEL->ResumeLayout(false);
			this->INFORMATION1PANEL->PerformLayout();
			this->PASSWORD->ResumeLayout(false);
			this->PASSWORD->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaCirclePictureBox6))->EndInit();
			this->gunaGradientPanel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
	
#pragma endregion
	private: System::Void setting_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gunaLabel3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gunaGradientButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox1->Enabled = true;
		gunaTextBox2->Enabled = true;
		gunaTextBox3->Enabled = true;
		gunaTextBox4->Enabled = true;
		gunaTextBox5->Enabled = true;
		gunaTextBox6->Enabled = true;
		gunaTextBox7->Enabled = true;
		gunaTextBox8->Enabled = true;
		gunaTextBox9->Enabled = true;
		gunaTextBox10->Enabled = true;
		gunaTextBox11->Enabled = true;
		gunaTextBox12->Enabled = true;
		gunaCircleButton1->Enabled = true;
		gunaCircleButton2->Enabled = true;

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox3->Text = gunaTextBox12->Text;
	}
	private: System::Void gunaCircleButton1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		gunaTextBox12->Hide();
	}
	private: System::Void gunaCircleButton1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		gunaTextBox12->Show();
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox4->Text = gunaTextBox13->Text;
	}
	private: System::Void gunaCircleButton2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		gunaTextBox13->Hide();

	}
	private: System::Void gunaCircleButton2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		gunaTextBox13->Show();

	}
	private: System::Void gunaCircleButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gunaGradientButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void UNFORMATION1PANEL_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		if (INFORMATION1PANEL->Width > 1075)
		{
			INFORMATION1->Location = System::Drawing::Point((INFORMATION1PANEL->Right + INFORMATION1PANEL->Left)/2 +30);
			PASSWORD->Location = System::Drawing::Point((INFORMATION1PANEL->Right + INFORMATION1PANEL->Left)/2 -600);
		
		}
		else
		{
			INFORMATION1->Location = System::Drawing::Point((INFORMATION1PANEL->Right + INFORMATION1PANEL->Left) / 2-10);
			PASSWORD->Location = System::Drawing::Point((INFORMATION1PANEL->Right + INFORMATION1PANEL->Left) / 2 -400);
			
		}
	}
};
}
