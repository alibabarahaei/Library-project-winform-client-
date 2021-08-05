#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for payment
	/// </summary>
	public ref class payment : public System::Windows::Forms::UserControl
	{
	public:
		payment(void)
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
		~payment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: Guna::UI::WinForms::GunaElipsePanel^ gunaElipsePanel3;
	private: Guna::UI::WinForms::GunaElipsePanel^ gunaElipsePanel2;
	private: Guna::UI::WinForms::GunaElipsePanel^ gunaElipsePanel5;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: Guna::UI::WinForms::GunaElipsePanel^ gunaElipsePanel4;
	private: System::Windows::Forms::Button^ button3;
	private: Guna::UI::WinForms::GunaImageButton^ gunaImageButton2;
	private: Guna::UI::WinForms::GunaImageButton^ gunaImageButton1;
	private: Guna::UI::WinForms::GunaImageButton^ gunaImageButton3;
	private: Guna::UI::WinForms::GunaLineTextBox^ gunaLineTextBox6;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel6;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaElipsePanel^ gunaElipsePanel8;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox5;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox6;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel12;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel11;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel10;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel9;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox7;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel3;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel8;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel7;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel5;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel4;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel14;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel13;
	private: Guna::UI::WinForms::GunaGradientTileButton^ gunaGradientTileButton1;
	private: Guna::UI::WinForms::GunaGradientTileButton^ gunaGradientTileButton2;
	private: Guna::UI::WinForms::GunaGradientTileButton^ gunaGradientTileButton3;
	private: System::Windows::Forms::Button^ button1;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox2;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel15;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel19;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel18;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel17;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel16;
	private: System::Windows::Forms::Timer^ timer1;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox8;


	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: Guna::UI::WinForms::GunaGradientTileButton^ gunaGradientTileButton4;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox9;
	private: Guna::UI::WinForms::GunaGradientTileButton^ gunaGradientTileButton5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(payment::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaElipsePanel8 = (gcnew Guna::UI::WinForms::GunaElipsePanel());
			this->gunaGradientTileButton5 = (gcnew Guna::UI::WinForms::GunaGradientTileButton());
			this->gunaTextBox9 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaGradientTileButton4 = (gcnew Guna::UI::WinForms::GunaGradientTileButton());
			this->gunaTextBox8 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaElipsePanel2 = (gcnew Guna::UI::WinForms::GunaElipsePanel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->gunaElipsePanel3 = (gcnew Guna::UI::WinForms::GunaElipsePanel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->gunaGradientTileButton3 = (gcnew Guna::UI::WinForms::GunaGradientTileButton());
			this->gunaElipsePanel5 = (gcnew Guna::UI::WinForms::GunaElipsePanel());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->gunaGradientTileButton2 = (gcnew Guna::UI::WinForms::GunaGradientTileButton());
			this->gunaGradientTileButton1 = (gcnew Guna::UI::WinForms::GunaGradientTileButton());
			this->gunaLabel3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel8 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel7 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel5 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel4 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel14 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel13 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaTextBox7 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel12 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel11 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel10 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel9 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaTextBox6 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox5 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox4 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaImageButton1 = (gcnew Guna::UI::WinForms::GunaImageButton());
			this->gunaImageButton2 = (gcnew Guna::UI::WinForms::GunaImageButton());
			this->gunaImageButton3 = (gcnew Guna::UI::WinForms::GunaImageButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->gunaElipsePanel4 = (gcnew Guna::UI::WinForms::GunaElipsePanel());
			this->gunaLabel19 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel18 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel17 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel16 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaPictureBox2 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaLabel15 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLineTextBox6 = (gcnew Guna::UI::WinForms::GunaLineTextBox());
			this->gunaLabel6 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
			this->gunaElipsePanel8->SuspendLayout();
			this->gunaElipsePanel2->SuspendLayout();
			this->gunaElipsePanel3->SuspendLayout();
			this->gunaElipsePanel5->SuspendLayout();
			this->gunaElipsePanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->gunaPictureBox1);
			this->panel1->Controls->Add(this->gunaElipsePanel8);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->gunaElipsePanel4);
			this->panel1->Controls->Add(this->gunaLabel1);
			this->panel1->Controls->Add(this->gunaLineTextBox6);
			this->panel1->Controls->Add(this->gunaLabel6);
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(812, 812);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &payment::panel1_Paint);
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox1.Image")));
			this->gunaPictureBox1->Location = System::Drawing::Point(32, 8);
			this->gunaPictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(750, 82);
			this->gunaPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->gunaPictureBox1->TabIndex = 37;
			this->gunaPictureBox1->TabStop = false;
			// 
			// gunaElipsePanel8
			// 
			this->gunaElipsePanel8->BackColor = System::Drawing::Color::Transparent;
			this->gunaElipsePanel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaElipsePanel8.BackgroundImage")));
			this->gunaElipsePanel8->BaseColor = System::Drawing::Color::White;
			this->gunaElipsePanel8->Controls->Add(this->gunaGradientTileButton5);
			this->gunaElipsePanel8->Controls->Add(this->gunaTextBox9);
			this->gunaElipsePanel8->Controls->Add(this->gunaGradientTileButton4);
			this->gunaElipsePanel8->Controls->Add(this->gunaTextBox8);
			this->gunaElipsePanel8->Controls->Add(this->gunaElipsePanel2);
			this->gunaElipsePanel8->Controls->Add(this->gunaElipsePanel3);
			this->gunaElipsePanel8->Controls->Add(this->gunaGradientTileButton3);
			this->gunaElipsePanel8->Controls->Add(this->gunaElipsePanel5);
			this->gunaElipsePanel8->Controls->Add(this->gunaGradientTileButton2);
			this->gunaElipsePanel8->Controls->Add(this->gunaGradientTileButton1);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel3);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel8);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel7);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel5);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel4);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel14);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel13);
			this->gunaElipsePanel8->Controls->Add(this->gunaTextBox7);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel2);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel12);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel11);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel10);
			this->gunaElipsePanel8->Controls->Add(this->gunaLabel9);
			this->gunaElipsePanel8->Controls->Add(this->gunaTextBox6);
			this->gunaElipsePanel8->Controls->Add(this->gunaTextBox5);
			this->gunaElipsePanel8->Controls->Add(this->gunaTextBox4);
			this->gunaElipsePanel8->Controls->Add(this->gunaTextBox3);
			this->gunaElipsePanel8->Controls->Add(this->gunaTextBox2);
			this->gunaElipsePanel8->Controls->Add(this->gunaTextBox1);
			this->gunaElipsePanel8->Controls->Add(this->gunaImageButton1);
			this->gunaElipsePanel8->Controls->Add(this->gunaImageButton2);
			this->gunaElipsePanel8->Controls->Add(this->gunaImageButton3);
			this->gunaElipsePanel8->Location = System::Drawing::Point(312, 102);
			this->gunaElipsePanel8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaElipsePanel8->Name = L"gunaElipsePanel8";
			this->gunaElipsePanel8->Size = System::Drawing::Size(470, 509);
			this->gunaElipsePanel8->TabIndex = 36;
			this->gunaElipsePanel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &payment::gunaElipsePanel8_Paint);
			// 
			// gunaGradientTileButton5
			// 
			this->gunaGradientTileButton5->AnimationHoverSpeed = 0.07F;
			this->gunaGradientTileButton5->AnimationSpeed = 0.03F;
			this->gunaGradientTileButton5->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientTileButton5->BaseColor1 = System::Drawing::Color::Lime;
			this->gunaGradientTileButton5->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientTileButton5->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton5->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientTileButton5->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientTileButton5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientTileButton5->ForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton5->Image = nullptr;
			this->gunaGradientTileButton5->ImageSize = System::Drawing::Size(0, 0);
			this->gunaGradientTileButton5->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->gunaGradientTileButton5->Location = System::Drawing::Point(337, 197);
			this->gunaGradientTileButton5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaGradientTileButton5->Name = L"gunaGradientTileButton5";
			this->gunaGradientTileButton5->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientTileButton5->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientTileButton5->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton5->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton5->OnHoverImage = nullptr;
			this->gunaGradientTileButton5->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton5->Radius = 12;
			this->gunaGradientTileButton5->Size = System::Drawing::Size(25, 17);
			this->gunaGradientTileButton5->TabIndex = 62;
			this->gunaGradientTileButton5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &payment::gunaGradientTileButton5_KeyDown);
			this->gunaGradientTileButton5->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &payment::gunaGradientTileButton5_KeyUp);
			this->gunaGradientTileButton5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &payment::gunaGradientTileButton5_MouseDown);
			this->gunaGradientTileButton5->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &payment::gunaGradientTileButton5_MouseUp);
			// 
			// gunaTextBox9
			// 
			this->gunaTextBox9->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox9->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox9->BorderColor = System::Drawing::Color::Red;
			this->gunaTextBox9->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox9->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox9->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox9->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox9->Location = System::Drawing::Point(142, 192);
			this->gunaTextBox9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaTextBox9->Name = L"gunaTextBox9";
			this->gunaTextBox9->PasswordChar = '*';
			this->gunaTextBox9->Radius = 12;
			this->gunaTextBox9->SelectedText = L"";
			this->gunaTextBox9->Size = System::Drawing::Size(190, 26);
			this->gunaTextBox9->TabIndex = 61;
			this->gunaTextBox9->TextChanged += gcnew System::EventHandler(this, &payment::gunaTextBox9_TextChanged);
			// 
			// gunaGradientTileButton4
			// 
			this->gunaGradientTileButton4->AnimationHoverSpeed = 0.07F;
			this->gunaGradientTileButton4->AnimationSpeed = 0.03F;
			this->gunaGradientTileButton4->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientTileButton4->BaseColor1 = System::Drawing::Color::Lime;
			this->gunaGradientTileButton4->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientTileButton4->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton4->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientTileButton4->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientTileButton4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientTileButton4->ForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton4->Image = nullptr;
			this->gunaGradientTileButton4->ImageSize = System::Drawing::Size(0, 0);
			this->gunaGradientTileButton4->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->gunaGradientTileButton4->Location = System::Drawing::Point(368, 111);
			this->gunaGradientTileButton4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaGradientTileButton4->Name = L"gunaGradientTileButton4";
			this->gunaGradientTileButton4->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientTileButton4->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientTileButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton4->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton4->OnHoverImage = nullptr;
			this->gunaGradientTileButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton4->Radius = 12;
			this->gunaGradientTileButton4->Size = System::Drawing::Size(25, 17);
			this->gunaGradientTileButton4->TabIndex = 60;
			this->gunaGradientTileButton4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &payment::gunaGradientTileButton4_MouseDown);
			this->gunaGradientTileButton4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &payment::gunaGradientTileButton4_MouseUp);
			// 
			// gunaTextBox8
			// 
			this->gunaTextBox8->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox8->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox8->BorderColor = System::Drawing::Color::Red;
			this->gunaTextBox8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox8->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox8->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox8->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox8->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaTextBox8->Location = System::Drawing::Point(259, 111);
			this->gunaTextBox8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaTextBox8->Name = L"gunaTextBox8";
			this->gunaTextBox8->PasswordChar = '*';
			this->gunaTextBox8->Radius = 12;
			this->gunaTextBox8->SelectedText = L"";
			this->gunaTextBox8->Size = System::Drawing::Size(99, 26);
			this->gunaTextBox8->TabIndex = 59;
			this->gunaTextBox8->TextChanged += gcnew System::EventHandler(this, &payment::gunaTextBox8_TextChanged);
			// 
			// gunaElipsePanel2
			// 
			this->gunaElipsePanel2->BackColor = System::Drawing::Color::Transparent;
			this->gunaElipsePanel2->BaseColor = System::Drawing::Color::White;
			this->gunaElipsePanel2->Controls->Add(this->button14);
			this->gunaElipsePanel2->Controls->Add(this->button15);
			this->gunaElipsePanel2->Controls->Add(this->button16);
			this->gunaElipsePanel2->Controls->Add(this->button17);
			this->gunaElipsePanel2->Controls->Add(this->button18);
			this->gunaElipsePanel2->Controls->Add(this->button19);
			this->gunaElipsePanel2->Controls->Add(this->button20);
			this->gunaElipsePanel2->Controls->Add(this->button1);
			this->gunaElipsePanel2->Controls->Add(this->button21);
			this->gunaElipsePanel2->Controls->Add(this->button23);
			this->gunaElipsePanel2->Location = System::Drawing::Point(10, 105);
			this->gunaElipsePanel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaElipsePanel2->Name = L"gunaElipsePanel2";
			this->gunaElipsePanel2->Size = System::Drawing::Size(67, 93);
			this->gunaElipsePanel2->TabIndex = 10;
			this->gunaElipsePanel2->Visible = false;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(22, 69);
			this->button14->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(21, 23);
			this->button14->TabIndex = 9;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &payment::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(43, 46);
			this->button15->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(21, 23);
			this->button15->TabIndex = 8;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &payment::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(22, 46);
			this->button16->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(21, 23);
			this->button16->TabIndex = 7;
			this->button16->Text = L"8";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &payment::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(0, 46);
			this->button17->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(21, 23);
			this->button17->TabIndex = 6;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &payment::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(43, 24);
			this->button18->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(21, 23);
			this->button18->TabIndex = 5;
			this->button18->Text = L"5";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &payment::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(22, 24);
			this->button19->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(21, 23);
			this->button19->TabIndex = 4;
			this->button19->Text = L"3";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &payment::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(0, 24);
			this->button20->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(21, 23);
			this->button20->TabIndex = 3;
			this->button20->Text = L"6";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &payment::button20_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 0);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(21, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &payment::button22_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(43, 0);
			this->button21->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(21, 23);
			this->button21->TabIndex = 2;
			this->button21->Text = L"7";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &payment::button21_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(0, 0);
			this->button23->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(21, 23);
			this->button23->TabIndex = 0;
			this->button23->Text = L"4";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &payment::button23_Click);
			// 
			// gunaElipsePanel3
			// 
			this->gunaElipsePanel3->BackColor = System::Drawing::Color::Transparent;
			this->gunaElipsePanel3->BaseColor = System::Drawing::Color::White;
			this->gunaElipsePanel3->Controls->Add(this->button13);
			this->gunaElipsePanel3->Controls->Add(this->button12);
			this->gunaElipsePanel3->Controls->Add(this->button11);
			this->gunaElipsePanel3->Controls->Add(this->button10);
			this->gunaElipsePanel3->Controls->Add(this->button9);
			this->gunaElipsePanel3->Controls->Add(this->button8);
			this->gunaElipsePanel3->Controls->Add(this->button7);
			this->gunaElipsePanel3->Controls->Add(this->button6);
			this->gunaElipsePanel3->Controls->Add(this->button5);
			this->gunaElipsePanel3->Controls->Add(this->button2);
			this->gunaElipsePanel3->Location = System::Drawing::Point(8, 2);
			this->gunaElipsePanel3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaElipsePanel3->Name = L"gunaElipsePanel3";
			this->gunaElipsePanel3->Size = System::Drawing::Size(69, 98);
			this->gunaElipsePanel3->TabIndex = 10;
			this->gunaElipsePanel3->Visible = false;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(24, 74);
			this->button13->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(21, 23);
			this->button13->TabIndex = 9;
			this->button13->Text = L"9";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &payment::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(47, 50);
			this->button12->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(21, 23);
			this->button12->TabIndex = 8;
			this->button12->Text = L"2";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &payment::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(24, 50);
			this->button11->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(21, 23);
			this->button11->TabIndex = 7;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &payment::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(0, 50);
			this->button10->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(21, 23);
			this->button10->TabIndex = 6;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &payment::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(47, 25);
			this->button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(21, 23);
			this->button9->TabIndex = 5;
			this->button9->Text = L"5";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &payment::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(24, 25);
			this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(21, 23);
			this->button8->TabIndex = 4;
			this->button8->Text = L"3";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &payment::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(0, 25);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(21, 23);
			this->button7->TabIndex = 3;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &payment::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(47, 0);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(21, 23);
			this->button6->TabIndex = 2;
			this->button6->Text = L"7";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &payment::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(24, 0);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(21, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"1";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &payment::button5_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(21, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"4";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &payment::button2_Click);
			// 
			// gunaGradientTileButton3
			// 
			this->gunaGradientTileButton3->AnimationHoverSpeed = 0.07F;
			this->gunaGradientTileButton3->AnimationSpeed = 0.03F;
			this->gunaGradientTileButton3->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientTileButton3->BaseColor1 = System::Drawing::Color::Lime;
			this->gunaGradientTileButton3->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientTileButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientTileButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientTileButton3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientTileButton3->ForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton3->Image = nullptr;
			this->gunaGradientTileButton3->ImageSize = System::Drawing::Size(0, 0);
			this->gunaGradientTileButton3->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->gunaGradientTileButton3->Location = System::Drawing::Point(142, 108);
			this->gunaGradientTileButton3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaGradientTileButton3->Name = L"gunaGradientTileButton3";
			this->gunaGradientTileButton3->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientTileButton3->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientTileButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton3->OnHoverImage = nullptr;
			this->gunaGradientTileButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton3->Radius = 12;
			this->gunaGradientTileButton3->Size = System::Drawing::Size(103, 28);
			this->gunaGradientTileButton3->TabIndex = 58;
			this->gunaGradientTileButton3->Text = L"دریافت رمز دوم";
			// 
			// gunaElipsePanel5
			// 
			this->gunaElipsePanel5->BackColor = System::Drawing::Color::Transparent;
			this->gunaElipsePanel5->BaseColor = System::Drawing::Color::White;
			this->gunaElipsePanel5->Controls->Add(this->button24);
			this->gunaElipsePanel5->Controls->Add(this->button25);
			this->gunaElipsePanel5->Controls->Add(this->button26);
			this->gunaElipsePanel5->Controls->Add(this->button27);
			this->gunaElipsePanel5->Controls->Add(this->button28);
			this->gunaElipsePanel5->Controls->Add(this->button29);
			this->gunaElipsePanel5->Controls->Add(this->button30);
			this->gunaElipsePanel5->Controls->Add(this->button31);
			this->gunaElipsePanel5->Controls->Add(this->button32);
			this->gunaElipsePanel5->Controls->Add(this->button33);
			this->gunaElipsePanel5->Location = System::Drawing::Point(8, 201);
			this->gunaElipsePanel5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaElipsePanel5->Name = L"gunaElipsePanel5";
			this->gunaElipsePanel5->Size = System::Drawing::Size(69, 95);
			this->gunaElipsePanel5->TabIndex = 10;
			this->gunaElipsePanel5->Visible = false;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(22, 70);
			this->button24->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(21, 23);
			this->button24->TabIndex = 9;
			this->button24->Text = L"9";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &payment::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(45, 47);
			this->button25->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(21, 23);
			this->button25->TabIndex = 8;
			this->button25->Text = L"2";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &payment::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(22, 47);
			this->button26->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(21, 23);
			this->button26->TabIndex = 7;
			this->button26->Text = L"8";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &payment::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(0, 47);
			this->button27->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(21, 23);
			this->button27->TabIndex = 6;
			this->button27->Text = L"0";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &payment::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(45, 24);
			this->button28->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(21, 23);
			this->button28->TabIndex = 5;
			this->button28->Text = L"5";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &payment::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(22, 23);
			this->button29->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(21, 23);
			this->button29->TabIndex = 4;
			this->button29->Text = L"3";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &payment::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(0, 24);
			this->button30->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(21, 23);
			this->button30->TabIndex = 3;
			this->button30->Text = L"6";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &payment::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(45, 0);
			this->button31->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(21, 23);
			this->button31->TabIndex = 2;
			this->button31->Text = L"7";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &payment::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(22, 0);
			this->button32->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(21, 23);
			this->button32->TabIndex = 1;
			this->button32->Text = L"1";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &payment::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(0, 0);
			this->button33->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(21, 23);
			this->button33->TabIndex = 0;
			this->button33->Text = L"4";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &payment::button33_Click);
			// 
			// gunaGradientTileButton2
			// 
			this->gunaGradientTileButton2->AnimationHoverSpeed = 0.07F;
			this->gunaGradientTileButton2->AnimationSpeed = 0.03F;
			this->gunaGradientTileButton2->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientTileButton2->BaseColor1 = System::Drawing::Color::Yellow;
			this->gunaGradientTileButton2->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientTileButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientTileButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientTileButton2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientTileButton2->ForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton2->Image = nullptr;
			this->gunaGradientTileButton2->ImageSize = System::Drawing::Size(0, 0);
			this->gunaGradientTileButton2->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->gunaGradientTileButton2->Location = System::Drawing::Point(97, 459);
			this->gunaGradientTileButton2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaGradientTileButton2->Name = L"gunaGradientTileButton2";
			this->gunaGradientTileButton2->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientTileButton2->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientTileButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton2->OnHoverImage = nullptr;
			this->gunaGradientTileButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton2->Radius = 12;
			this->gunaGradientTileButton2->Size = System::Drawing::Size(86, 32);
			this->gunaGradientTileButton2->TabIndex = 57;
			this->gunaGradientTileButton2->Text = L"انصراف";
			// 
			// gunaGradientTileButton1
			// 
			this->gunaGradientTileButton1->AnimationHoverSpeed = 0.07F;
			this->gunaGradientTileButton1->AnimationSpeed = 0.03F;
			this->gunaGradientTileButton1->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientTileButton1->BaseColor1 = System::Drawing::Color::Lime;
			this->gunaGradientTileButton1->BaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaGradientTileButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientTileButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientTileButton1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaGradientTileButton1->ForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton1->Image = nullptr;
			this->gunaGradientTileButton1->ImageSize = System::Drawing::Size(0, 0);
			this->gunaGradientTileButton1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->gunaGradientTileButton1->Location = System::Drawing::Point(187, 459);
			this->gunaGradientTileButton1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaGradientTileButton1->Name = L"gunaGradientTileButton1";
			this->gunaGradientTileButton1->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientTileButton1->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientTileButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton1->OnHoverImage = nullptr;
			this->gunaGradientTileButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton1->Radius = 12;
			this->gunaGradientTileButton1->Size = System::Drawing::Size(171, 32);
			this->gunaGradientTileButton1->TabIndex = 56;
			this->gunaGradientTileButton1->Text = L"پرداخت";
			this->gunaGradientTileButton1->Click += gcnew System::EventHandler(this, &payment::gunaGradientTileButton1_Click);
			// 
			// gunaLabel3
			// 
			this->gunaLabel3->AutoSize = true;
			this->gunaLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7));
			this->gunaLabel3->Location = System::Drawing::Point(424, 448);
			this->gunaLabel3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel3->Name = L"gunaLabel3";
			this->gunaLabel3->Size = System::Drawing::Size(29, 12);
			this->gunaLabel3->TabIndex = 55;
			this->gunaLabel3->Text = L"اختیاری";
			// 
			// gunaLabel8
			// 
			this->gunaLabel8->AutoSize = true;
			this->gunaLabel8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel8->Location = System::Drawing::Point(436, 415);
			this->gunaLabel8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel8->Name = L"gunaLabel8";
			this->gunaLabel8->Size = System::Drawing::Size(32, 15);
			this->gunaLabel8->TabIndex = 54;
			this->gunaLabel8->Text = L"ایمیل";
			// 
			// gunaLabel7
			// 
			this->gunaLabel7->AutoSize = true;
			this->gunaLabel7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7));
			this->gunaLabel7->Location = System::Drawing::Point(315, 369);
			this->gunaLabel7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel7->Name = L"gunaLabel7";
			this->gunaLabel7->Size = System::Drawing::Size(129, 12);
			this->gunaLabel7->TabIndex = 53;
			this->gunaLabel7->Text = L"لطفا کد امنیتی داخل کادر را وارد نمایید";
			// 
			// gunaLabel5
			// 
			this->gunaLabel5->AutoSize = true;
			this->gunaLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel5->Location = System::Drawing::Point(415, 336);
			this->gunaLabel5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel5->Name = L"gunaLabel5";
			this->gunaLabel5->Size = System::Drawing::Size(56, 15);
			this->gunaLabel5->TabIndex = 52;
			this->gunaLabel5->Text = L"کد امنیتی";
			// 
			// gunaLabel4
			// 
			this->gunaLabel4->AutoSize = true;
			this->gunaLabel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7));
			this->gunaLabel4->Location = System::Drawing::Point(377, 297);
			this->gunaLabel4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel4->Name = L"gunaLabel4";
			this->gunaLabel4->Size = System::Drawing::Size(66, 12);
			this->gunaLabel4->TabIndex = 51;
			this->gunaLabel4->Text = L"به تفکیک ماه و سال";
			// 
			// gunaLabel14
			// 
			this->gunaLabel14->AutoSize = true;
			this->gunaLabel14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel14->Location = System::Drawing::Point(382, 267);
			this->gunaLabel14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel14->Name = L"gunaLabel14";
			this->gunaLabel14->Size = System::Drawing::Size(96, 15);
			this->gunaLabel14->TabIndex = 50;
			this->gunaLabel14->Text = L"تاریخ انقضا کارت";
			// 
			// gunaLabel13
			// 
			this->gunaLabel13->AutoSize = true;
			this->gunaLabel13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7));
			this->gunaLabel13->Location = System::Drawing::Point(290, 228);
			this->gunaLabel13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel13->Name = L"gunaLabel13";
			this->gunaLabel13->Size = System::Drawing::Size(156, 12);
			this->gunaLabel13->TabIndex = 49;
			this->gunaLabel13->Text = L"شماره 4 رقم درج شده رو کارت را وارد نمایید";
			// 
			// gunaTextBox7
			// 
			this->gunaTextBox7->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox7->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaTextBox7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox7->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox7->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox7->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox7->Location = System::Drawing::Point(100, 410);
			this->gunaTextBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaTextBox7->Name = L"gunaTextBox7";
			this->gunaTextBox7->PasswordChar = '\0';
			this->gunaTextBox7->Radius = 12;
			this->gunaTextBox7->SelectedText = L"";
			this->gunaTextBox7->Size = System::Drawing::Size(258, 26);
			this->gunaTextBox7->TabIndex = 48;
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7));
			this->gunaLabel2->Location = System::Drawing::Point(370, 149);
			this->gunaLabel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(86, 12);
			this->gunaLabel2->TabIndex = 47;
			this->gunaLabel2->Text = L"رمز اینترنتی را وارد کنید";
			// 
			// gunaLabel12
			// 
			this->gunaLabel12->AutoSize = true;
			this->gunaLabel12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel12->Location = System::Drawing::Point(365, 197);
			this->gunaLabel12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel12->Name = L"gunaLabel12";
			this->gunaLabel12->Size = System::Drawing::Size(118, 15);
			this->gunaLabel12->TabIndex = 46;
			this->gunaLabel12->Text = L"شماره شناسایی دوم ";
			// 
			// gunaLabel11
			// 
			this->gunaLabel11->AutoSize = true;
			this->gunaLabel11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel11->Location = System::Drawing::Point(419, 111);
			this->gunaLabel11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel11->Name = L"gunaLabel11";
			this->gunaLabel11->Size = System::Drawing::Size(48, 15);
			this->gunaLabel11->TabIndex = 45;
			this->gunaLabel11->Text = L"رمز دوم";
			// 
			// gunaLabel10
			// 
			this->gunaLabel10->AutoSize = true;
			this->gunaLabel10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7));
			this->gunaLabel10->Location = System::Drawing::Point(245, 61);
			this->gunaLabel10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel10->Name = L"gunaLabel10";
			this->gunaLabel10->Size = System::Drawing::Size(188, 12);
			this->gunaLabel10->TabIndex = 44;
			this->gunaLabel10->Text = L"شماره کارت 16 رقمی درج شده در کارت را وارد نمایید";
			// 
			// gunaLabel9
			// 
			this->gunaLabel9->AutoSize = true;
			this->gunaLabel9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel9->Location = System::Drawing::Point(405, 28);
			this->gunaLabel9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel9->Name = L"gunaLabel9";
			this->gunaLabel9->Size = System::Drawing::Size(72, 15);
			this->gunaLabel9->TabIndex = 43;
			this->gunaLabel9->Text = L"شماره کارت";
			// 
			// gunaTextBox6
			// 
			this->gunaTextBox6->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox6->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->BorderColor = System::Drawing::Color::Red;
			this->gunaTextBox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox6->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox6->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox6->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox6->Location = System::Drawing::Point(109, 332);
			this->gunaTextBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaTextBox6->Name = L"gunaTextBox6";
			this->gunaTextBox6->PasswordChar = '\0';
			this->gunaTextBox6->Radius = 12;
			this->gunaTextBox6->SelectedText = L"";
			this->gunaTextBox6->Size = System::Drawing::Size(238, 26);
			this->gunaTextBox6->TabIndex = 41;
			this->gunaTextBox6->TextChanged += gcnew System::EventHandler(this, &payment::gunaTextBox6_TextChanged);
			// 
			// gunaTextBox5
			// 
			this->gunaTextBox5->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox5->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->BorderColor = System::Drawing::Color::Red;
			this->gunaTextBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox5->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox5->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox5->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox5->Location = System::Drawing::Point(173, 264);
			this->gunaTextBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaTextBox5->Name = L"gunaTextBox5";
			this->gunaTextBox5->PasswordChar = '\0';
			this->gunaTextBox5->Radius = 12;
			this->gunaTextBox5->SelectedText = L"";
			this->gunaTextBox5->Size = System::Drawing::Size(75, 26);
			this->gunaTextBox5->TabIndex = 40;
			this->gunaTextBox5->Text = L"سال";
			this->gunaTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaTextBox5->TextChanged += gcnew System::EventHandler(this, &payment::gunaTextBox5_TextChanged);
			// 
			// gunaTextBox4
			// 
			this->gunaTextBox4->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox4->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->BorderColor = System::Drawing::Color::Red;
			this->gunaTextBox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox4->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox4->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox4->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox4->Location = System::Drawing::Point(271, 263);
			this->gunaTextBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaTextBox4->Name = L"gunaTextBox4";
			this->gunaTextBox4->PasswordChar = '\0';
			this->gunaTextBox4->Radius = 12;
			this->gunaTextBox4->SelectedText = L"";
			this->gunaTextBox4->Size = System::Drawing::Size(75, 26);
			this->gunaTextBox4->TabIndex = 39;
			this->gunaTextBox4->Text = L"ماه";
			this->gunaTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->gunaTextBox4->TextChanged += gcnew System::EventHandler(this, &payment::gunaTextBox4_TextChanged);
			// 
			// gunaTextBox3
			// 
			this->gunaTextBox3->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox3->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->BorderColor = System::Drawing::Color::Red;
			this->gunaTextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox3->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox3->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox3->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox3->Location = System::Drawing::Point(142, 192);
			this->gunaTextBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->Radius = 12;
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(190, 26);
			this->gunaTextBox3->TabIndex = 38;
			this->gunaTextBox3->TextChanged += gcnew System::EventHandler(this, &payment::gunaTextBox3_TextChanged);
			// 
			// gunaTextBox2
			// 
			this->gunaTextBox2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox2->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->BorderColor = System::Drawing::Color::Red;
			this->gunaTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox2->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox2->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox2->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaTextBox2->Location = System::Drawing::Point(259, 111);
			this->gunaTextBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->Radius = 12;
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(99, 26);
			this->gunaTextBox2->TabIndex = 37;
			this->gunaTextBox2->TextChanged += gcnew System::EventHandler(this, &payment::gunaTextBox2_TextChanged);
			// 
			// gunaTextBox1
			// 
			this->gunaTextBox1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTextBox1->BaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->BorderColor = System::Drawing::Color::Red;
			this->gunaTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox1->FocusedBaseColor = System::Drawing::Color::White;
			this->gunaTextBox1->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox1->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox1->Location = System::Drawing::Point(156, 27);
			this->gunaTextBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->Radius = 12;
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(190, 26);
			this->gunaTextBox1->TabIndex = 36;
			this->gunaTextBox1->TextChanged += gcnew System::EventHandler(this, &payment::gunaTextBox1_TextChanged);
			// 
			// gunaImageButton1
			// 
			this->gunaImageButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaImageButton1.Image")));
			this->gunaImageButton1->ImageSize = System::Drawing::Size(42, 38);
			this->gunaImageButton1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->gunaImageButton1->Location = System::Drawing::Point(118, 25);
			this->gunaImageButton1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaImageButton1->Name = L"gunaImageButton1";
			this->gunaImageButton1->OnHoverImage = nullptr;
			this->gunaImageButton1->OnHoverImageOffset = System::Drawing::Point(0, 0);
			this->gunaImageButton1->Size = System::Drawing::Size(32, 31);
			this->gunaImageButton1->TabIndex = 2;
			this->gunaImageButton1->Click += gcnew System::EventHandler(this, &payment::gunaImageButton1_Click_1);
			// 
			// gunaImageButton2
			// 
			this->gunaImageButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaImageButton2.Image")));
			this->gunaImageButton2->ImageSize = System::Drawing::Size(42, 38);
			this->gunaImageButton2->Location = System::Drawing::Point(110, 105);
			this->gunaImageButton2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaImageButton2->Name = L"gunaImageButton2";
			this->gunaImageButton2->OnHoverImage = nullptr;
			this->gunaImageButton2->OnHoverImageOffset = System::Drawing::Point(0, 0);
			this->gunaImageButton2->Size = System::Drawing::Size(32, 31);
			this->gunaImageButton2->TabIndex = 33;
			this->gunaImageButton2->Click += gcnew System::EventHandler(this, &payment::gunaImageButton2_Click);
			// 
			// gunaImageButton3
			// 
			this->gunaImageButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaImageButton3.Image")));
			this->gunaImageButton3->ImageSize = System::Drawing::Size(42, 38);
			this->gunaImageButton3->Location = System::Drawing::Point(109, 192);
			this->gunaImageButton3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaImageButton3->Name = L"gunaImageButton3";
			this->gunaImageButton3->OnHoverImage = nullptr;
			this->gunaImageButton3->OnHoverImageOffset = System::Drawing::Point(0, 0);
			this->gunaImageButton3->Size = System::Drawing::Size(32, 26);
			this->gunaImageButton3->TabIndex = 34;
			this->gunaImageButton3->Click += gcnew System::EventHandler(this, &payment::gunaImageButton3_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->button3->Location = System::Drawing::Point(220, 874);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 32);
			this->button3->TabIndex = 35;
			this->button3->Text = L"پرداخت";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// gunaElipsePanel4
			// 
			this->gunaElipsePanel4->BackColor = System::Drawing::Color::Transparent;
			this->gunaElipsePanel4->BaseColor = System::Drawing::Color::White;
			this->gunaElipsePanel4->Controls->Add(this->gunaLabel19);
			this->gunaElipsePanel4->Controls->Add(this->gunaLabel18);
			this->gunaElipsePanel4->Controls->Add(this->gunaLabel17);
			this->gunaElipsePanel4->Controls->Add(this->gunaLabel16);
			this->gunaElipsePanel4->Controls->Add(this->gunaPictureBox2);
			this->gunaElipsePanel4->Controls->Add(this->gunaLabel15);
			this->gunaElipsePanel4->Location = System::Drawing::Point(32, 102);
			this->gunaElipsePanel4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaElipsePanel4->Name = L"gunaElipsePanel4";
			this->gunaElipsePanel4->Radius = 50;
			this->gunaElipsePanel4->Size = System::Drawing::Size(265, 509);
			this->gunaElipsePanel4->TabIndex = 11;
			// 
			// gunaLabel19
			// 
			this->gunaLabel19->AutoSize = true;
			this->gunaLabel19->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->gunaLabel19->Location = System::Drawing::Point(86, 7);
			this->gunaLabel19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel19->Name = L"gunaLabel19";
			this->gunaLabel19->Size = System::Drawing::Size(39, 26);
			this->gunaLabel19->TabIndex = 5;
			this->gunaLabel19->Text = L"10:00";
			// 
			// gunaLabel18
			// 
			this->gunaLabel18->AutoSize = true;
			this->gunaLabel18->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel18->Location = System::Drawing::Point(196, 239);
			this->gunaLabel18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel18->Name = L"gunaLabel18";
			this->gunaLabel18->Size = System::Drawing::Size(68, 21);
			this->gunaLabel18->TabIndex = 4;
			this->gunaLabel18->Text = L"شماره پذیرنده";
			// 
			// gunaLabel17
			// 
			this->gunaLabel17->AutoSize = true;
			this->gunaLabel17->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel17->Location = System::Drawing::Point(194, 269);
			this->gunaLabel17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel17->Name = L"gunaLabel17";
			this->gunaLabel17->Size = System::Drawing::Size(68, 21);
			this->gunaLabel17->TabIndex = 3;
			this->gunaLabel17->Text = L"آدرس وبسایت";
			// 
			// gunaLabel16
			// 
			this->gunaLabel16->AutoSize = true;
			this->gunaLabel16->Font = (gcnew System::Drawing::Font(L"B Nazanin", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel16->Location = System::Drawing::Point(206, 207);
			this->gunaLabel16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel16->Name = L"gunaLabel16";
			this->gunaLabel16->Size = System::Drawing::Size(55, 21);
			this->gunaLabel16->TabIndex = 2;
			this->gunaLabel16->Text = L"نام پذیرنده";
			// 
			// gunaPictureBox2
			// 
			this->gunaPictureBox2->BackColor = System::Drawing::Color::White;
			this->gunaPictureBox2->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox2.Image")));
			this->gunaPictureBox2->Location = System::Drawing::Point(0, 54);
			this->gunaPictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaPictureBox2->Name = L"gunaPictureBox2";
			this->gunaPictureBox2->Size = System::Drawing::Size(262, 106);
			this->gunaPictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->gunaPictureBox2->TabIndex = 1;
			this->gunaPictureBox2->TabStop = false;
			// 
			// gunaLabel15
			// 
			this->gunaLabel15->AutoSize = true;
			this->gunaLabel15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel15->Location = System::Drawing::Point(190, 8);
			this->gunaLabel15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel15->Name = L"gunaLabel15";
			this->gunaLabel15->Size = System::Drawing::Size(70, 15);
			this->gunaLabel15->TabIndex = 0;
			this->gunaLabel15->Text = L"اطلاعات کارت";
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel1->Location = System::Drawing::Point(405, 568);
			this->gunaLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(69, 24);
			this->gunaLabel1->TabIndex = 18;
			this->gunaLabel1->Text = L"شماره کارت";
			// 
			// gunaLineTextBox6
			// 
			this->gunaLineTextBox6->BackColor = System::Drawing::Color::White;
			this->gunaLineTextBox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaLineTextBox6->FocusedLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaLineTextBox6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLineTextBox6->LineColor = System::Drawing::Color::Gainsboro;
			this->gunaLineTextBox6->Location = System::Drawing::Point(133, 843);
			this->gunaLineTextBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->gunaLineTextBox6->Name = L"gunaLineTextBox6";
			this->gunaLineTextBox6->PasswordChar = '\0';
			this->gunaLineTextBox6->SelectedText = L"";
			this->gunaLineTextBox6->Size = System::Drawing::Size(260, 28);
			this->gunaLineTextBox6->TabIndex = 29;
			// 
			// gunaLabel6
			// 
			this->gunaLabel6->AutoSize = true;
			this->gunaLabel6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLabel6->Location = System::Drawing::Point(405, 846);
			this->gunaLabel6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gunaLabel6->Name = L"gunaLabel6";
			this->gunaLabel6->Size = System::Drawing::Size(38, 24);
			this->gunaLabel6->TabIndex = 24;
			this->gunaLabel6->Text = L"ایمیل";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &payment::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Tick += gcnew System::EventHandler(this, &payment::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Tick += gcnew System::EventHandler(this, &payment::timer3_Tick);
			// 
			// payment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"payment";
			this->Size = System::Drawing::Size(826, 812);
			this->Load += gcnew System::EventHandler(this, &payment::payment_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			this->gunaElipsePanel8->ResumeLayout(false);
			this->gunaElipsePanel8->PerformLayout();
			this->gunaElipsePanel2->ResumeLayout(false);
			this->gunaElipsePanel3->ResumeLayout(false);
			this->gunaElipsePanel5->ResumeLayout(false);
			this->gunaElipsePanel4->ResumeLayout(false);
			this->gunaElipsePanel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void gunaShadowPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void gunaImageButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaElipsePanel3->Visible = true;
	}
	private: System::Void gunaImageButton1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		gunaElipsePanel5->Visible = false;
		gunaElipsePanel2->Visible = false;
		gunaElipsePanel3->Visible = true;
	}
	private: System::Void gunaImageButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaElipsePanel3->Visible = false;
		gunaElipsePanel5->Visible = false;
		gunaElipsePanel2->Visible = true;
	}
	private: System::Void gunaImageButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaElipsePanel3->Visible = false;
		gunaElipsePanel2->Visible = false;
		gunaElipsePanel5->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox1->Text += "4";
		//maskedTextBox1->Text += "4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox1->Text += "1";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox1->Text += "7";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox1->Text += "6";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox1->Text += "3";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox1->Text += "5";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox1->Text += "0";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox1->Text += "8";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox1->Text += "2";
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox1->Text += "9";
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox8->Text += "4";
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox8->Text += "1";
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox8->Text += "7";
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox8->Text += "6";
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox8->Text += "3";
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox8->Text += "5";
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox8->Text += "0";
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox8->Text += "8";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox8->Text += "2";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox8->Text += "9";
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox9->Text += "4";
	}
	private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox9->Text += "1";
	}
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox9->Text += "7";
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox9->Text += "6";
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox9->Text += "3";
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox9->Text += "5";
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox9->Text += "0";
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox9->Text += "8";
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox9->Text += "2";
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox9->Text += "9";
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void gunaTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (gunaTextBox1->TextLength > 18)
		{
			gunaElipsePanel2->Visible = true;
			gunaTextBox8->Focus();
			gunaElipsePanel3->Visible = false;
			gunaTextBox1->BorderColor = System::Drawing::Color::Green;

		}
		if (gunaTextBox1->TextLength == 4 || gunaTextBox1->TextLength == 9 || gunaTextBox1->TextLength == 14)
		{
			gunaTextBox1->Text += "-";
		}
	}
	private: System::Void gunaElipsePanel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void gunaTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (gunaTextBox2->TextLength > 5)
		{
			gunaTextBox3->Focus();
			gunaTextBox2->BorderColor = System::Drawing::Color::Green;
			gunaElipsePanel2->Visible = false;
			gunaElipsePanel5->Visible = true;
		}
	}
	private: System::Void gunaTextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (gunaTextBox3->TextLength > 5)
		{
			gunaTextBox3->BorderColor = System::Drawing::Color::Green;
			gunaElipsePanel5->Visible = false;
			gunaTextBox4->Focus();
		}
	}
	private: System::Void gunaTextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (gunaTextBox4->TextLength > 1)
		{
			gunaTextBox4->BorderColor = System::Drawing::Color::Green;
			gunaTextBox5->Focus();
		}
	}
	private: System::Void gunaTextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (gunaTextBox5->TextLength > 1)
		{
			gunaTextBox5->BorderColor = System::Drawing::Color::Green;
			gunaTextBox6->Focus();
		}
	}
	private: System::Void gunaTextBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (gunaTextBox6->TextLength > 7)
		{
			gunaTextBox7->Focus();

		}

		this->Controls->Clear();



	}
		
		   int quick = 600;
	private: System::Void gunaGradientTileButton1_Click(System::Object^ sender, System::EventArgs^ e) 
	{


		this->Controls->Clear();


	}
	private: System::Void payment_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1 = gcnew System::Windows::Forms::Timer();
		timer1->Interval = 1000;
		this->timer1->Tick += gcnew System::EventHandler(this, &payment::timer1_Tick);
		timer1->Enabled = true;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		quick--;
		gunaLabel19->Text = quick / 60 + ":" + ((quick % 60) >= 10 ? (quick % 60).ToString() : "0" + (quick % 60));
	}
	private: System::Void gunaGradientTileButton4_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		gunaTextBox8->Hide();
	}
	private: System::Void gunaGradientTileButton4_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		gunaTextBox8->Show();
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox2->Text = gunaTextBox8->Text;

	}
	private: System::Void gunaTextBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (gunaTextBox8->TextLength > 5)
		{
			gunaTextBox3->Focus();
			gunaTextBox8->BorderColor = System::Drawing::Color::Green;
			gunaElipsePanel2->Visible = false;
			gunaElipsePanel5->Visible = true;
		}
	}

	private: System::Void gunaTextBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (gunaTextBox9->TextLength > 5)
		{
			gunaTextBox9->BorderColor = System::Drawing::Color::Green;
			gunaElipsePanel5->Visible = false;
			gunaTextBox4->Focus();
		}
	}
	private: System::Void gunaGradientTileButton5_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	}
	private: System::Void gunaGradientTileButton5_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
		gunaTextBox3->Text = gunaTextBox9->Text;

	}
	private: System::Void gunaGradientTileButton5_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		gunaTextBox9->Hide();
	}
	private: System::Void gunaGradientTileButton5_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		gunaTextBox8->Show();
	}
	private: System::Void gunaElipsePanel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}
