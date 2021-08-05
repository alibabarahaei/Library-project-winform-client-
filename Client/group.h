#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for group
	/// </summary>
	public ref class group : public System::Windows::Forms::UserControl
	{
	public:
		group(void)
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
		~group()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: Guna::UI::WinForms::GunaGradient2Panel^ gunaGradient2Panel1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton7;
	private: Guna::UI::WinForms::GunaButton^ gunaButton6;
	private: Guna::UI::WinForms::GunaButton^ gunaButton5;
	private: Guna::UI::WinForms::GunaButton^ gunaButton4;
	private: Guna::UI::WinForms::GunaButton^ gunaButton3;
	private: Guna::UI::WinForms::GunaButton^ gunaButton2;
	private: Guna::UI::WinForms::GunaButton^ gunaButton1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(group::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->gunaGradient2Panel1 = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaButton7 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton6 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton5 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton4 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton3 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton2 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton1 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaGradient2Panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(21, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 139);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(171, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 139);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &group::button3_Click);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(332, 33);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 139);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &group::button4_Click);
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(491, 33);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 139);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &group::button5_Click);
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(21, 208);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(107, 139);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &group::button7_Click);
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(171, 208);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(107, 139);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &group::button9_Click);
			// 
			// button10
			// 
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(332, 208);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(107, 139);
			this->button10->TabIndex = 9;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &group::button10_Click);
			// 
			// button11
			// 
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(491, 208);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(107, 139);
			this->button11->TabIndex = 10;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &group::button11_Click);
			// 
			// button13
			// 
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(21, 373);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(107, 139);
			this->button13->TabIndex = 12;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &group::button13_Click);
			// 
			// button15
			// 
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(171, 373);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(107, 139);
			this->button15->TabIndex = 14;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &group::button15_Click);
			// 
			// button16
			// 
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(332, 373);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(107, 139);
			this->button16->TabIndex = 15;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &group::button16_Click);
			// 
			// button17
			// 
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(491, 373);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(107, 139);
			this->button17->TabIndex = 16;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &group::button17_Click);
			// 
			// button19
			// 
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(21, 527);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(107, 139);
			this->button19->TabIndex = 18;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &group::button19_Click);
			// 
			// button21
			// 
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->Location = System::Drawing::Point(171, 527);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(107, 139);
			this->button21->TabIndex = 20;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &group::button21_Click);
			// 
			// button22
			// 
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.Image")));
			this->button22->Location = System::Drawing::Point(332, 527);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(107, 139);
			this->button22->TabIndex = 21;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &group::button22_Click);
			// 
			// button23
			// 
			this->button23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.Image")));
			this->button23->Location = System::Drawing::Point(491, 527);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(107, 139);
			this->button23->TabIndex = 22;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &group::button23_Click);
			// 
			// gunaGradient2Panel1
			// 
			this->gunaGradient2Panel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradient2Panel1->Controls->Add(this->gunaButton7);
			this->gunaGradient2Panel1->Controls->Add(this->gunaButton6);
			this->gunaGradient2Panel1->Controls->Add(this->gunaButton5);
			this->gunaGradient2Panel1->Controls->Add(this->gunaButton4);
			this->gunaGradient2Panel1->Controls->Add(this->gunaButton3);
			this->gunaGradient2Panel1->Controls->Add(this->gunaButton2);
			this->gunaGradient2Panel1->Controls->Add(this->gunaButton1);
			this->gunaGradient2Panel1->GradientColor1 = System::Drawing::Color::White;
			this->gunaGradient2Panel1->GradientColor2 = System::Drawing::Color::White;
			this->gunaGradient2Panel1->Location = System::Drawing::Point(152, 684);
			this->gunaGradient2Panel1->Name = L"gunaGradient2Panel1";
			this->gunaGradient2Panel1->Size = System::Drawing::Size(432, 41);
			this->gunaGradient2Panel1->TabIndex = 23;
			// 
			// gunaButton7
			// 
			this->gunaButton7->AnimationHoverSpeed = 0.07F;
			this->gunaButton7->AnimationSpeed = 0.03F;
			this->gunaButton7->BaseColor = System::Drawing::Color::Silver;
			this->gunaButton7->BorderColor = System::Drawing::Color::Gray;
			this->gunaButton7->BorderSize = 1;
			this->gunaButton7->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton7->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton7->ForeColor = System::Drawing::Color::Black;
			this->gunaButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton7.Image")));
			this->gunaButton7->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton7->Location = System::Drawing::Point(0, -1);
			this->gunaButton7->Name = L"gunaButton7";
			this->gunaButton7->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton7->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton7->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton7->OnHoverImage = nullptr;
			this->gunaButton7->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton7->Size = System::Drawing::Size(82, 43);
			this->gunaButton7->TabIndex = 28;
			this->gunaButton7->Text = L"قبلی";
			this->gunaButton7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaButton6
			// 
			this->gunaButton6->AnimationHoverSpeed = 0.07F;
			this->gunaButton6->AnimationSpeed = 0.03F;
			this->gunaButton6->BaseColor = System::Drawing::Color::Silver;
			this->gunaButton6->BorderColor = System::Drawing::Color::Gray;
			this->gunaButton6->BorderSize = 1;
			this->gunaButton6->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton6->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton6->ForeColor = System::Drawing::Color::Black;
			this->gunaButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton6.Image")));
			this->gunaButton6->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton6->Location = System::Drawing::Point(79, -1);
			this->gunaButton6->Name = L"gunaButton6";
			this->gunaButton6->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton6->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton6->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton6->OnHoverImage = nullptr;
			this->gunaButton6->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton6->Size = System::Drawing::Size(91, 43);
			this->gunaButton6->TabIndex = 29;
			this->gunaButton6->Text = L"بعدی";
			this->gunaButton6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaButton5
			// 
			this->gunaButton5->AnimationHoverSpeed = 0.07F;
			this->gunaButton5->AnimationSpeed = 0.03F;
			this->gunaButton5->BaseColor = System::Drawing::Color::Silver;
			this->gunaButton5->BorderColor = System::Drawing::Color::Black;
			this->gunaButton5->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton5->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton5->ForeColor = System::Drawing::Color::Black;
			this->gunaButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton5.Image")));
			this->gunaButton5->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton5->Location = System::Drawing::Point(166, 0);
			this->gunaButton5->Name = L"gunaButton5";
			this->gunaButton5->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton5->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton5->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton5->OnHoverImage = nullptr;
			this->gunaButton5->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton5->Size = System::Drawing::Size(54, 42);
			this->gunaButton5->TabIndex = 28;
			this->gunaButton5->Text = L"5";
			this->gunaButton5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaButton4
			// 
			this->gunaButton4->AnimationHoverSpeed = 0.07F;
			this->gunaButton4->AnimationSpeed = 0.03F;
			this->gunaButton4->BaseColor = System::Drawing::Color::Silver;
			this->gunaButton4->BorderColor = System::Drawing::Color::Gray;
			this->gunaButton4->BorderSize = 1;
			this->gunaButton4->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton4->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton4->ForeColor = System::Drawing::Color::Black;
			this->gunaButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton4.Image")));
			this->gunaButton4->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton4->Location = System::Drawing::Point(220, -1);
			this->gunaButton4->Name = L"gunaButton4";
			this->gunaButton4->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton4->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton4->OnHoverImage = nullptr;
			this->gunaButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton4->Size = System::Drawing::Size(54, 43);
			this->gunaButton4->TabIndex = 27;
			this->gunaButton4->Text = L"4";
			this->gunaButton4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaButton3
			// 
			this->gunaButton3->AnimationHoverSpeed = 0.07F;
			this->gunaButton3->AnimationSpeed = 0.03F;
			this->gunaButton3->BaseColor = System::Drawing::Color::Silver;
			this->gunaButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton3->ForeColor = System::Drawing::Color::Black;
			this->gunaButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton3.Image")));
			this->gunaButton3->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton3->Location = System::Drawing::Point(270, 0);
			this->gunaButton3->Name = L"gunaButton3";
			this->gunaButton3->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton3->OnHoverImage = nullptr;
			this->gunaButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton3->Size = System::Drawing::Size(54, 42);
			this->gunaButton3->TabIndex = 26;
			this->gunaButton3->Text = L"3";
			this->gunaButton3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaButton2
			// 
			this->gunaButton2->AnimationHoverSpeed = 0.07F;
			this->gunaButton2->AnimationSpeed = 0.03F;
			this->gunaButton2->BaseColor = System::Drawing::Color::Silver;
			this->gunaButton2->BorderColor = System::Drawing::Color::Gray;
			this->gunaButton2->BorderSize = 1;
			this->gunaButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton2->ForeColor = System::Drawing::Color::Black;
			this->gunaButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton2.Image")));
			this->gunaButton2->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton2->Location = System::Drawing::Point(324, -1);
			this->gunaButton2->Name = L"gunaButton2";
			this->gunaButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton2->OnHoverImage = nullptr;
			this->gunaButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton2->Size = System::Drawing::Size(54, 43);
			this->gunaButton2->TabIndex = 25;
			this->gunaButton2->Text = L"2";
			this->gunaButton2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaButton1
			// 
			this->gunaButton1->AnimationHoverSpeed = 0.07F;
			this->gunaButton1->AnimationSpeed = 0.03F;
			this->gunaButton1->BaseColor = System::Drawing::Color::Silver;
			this->gunaButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton1->ForeColor = System::Drawing::Color::Black;
			this->gunaButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton1.Image")));
			this->gunaButton1->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton1->Location = System::Drawing::Point(378, 0);
			this->gunaButton1->Name = L"gunaButton1";
			this->gunaButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton1->OnHoverImage = nullptr;
			this->gunaButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton1->Size = System::Drawing::Size(54, 41);
			this->gunaButton1->TabIndex = 24;
			this->gunaButton1->Text = L"1";
			this->gunaButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// group
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->gunaGradient2Panel1);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"group";
			this->Size = System::Drawing::Size(996, 751);
			this->Load += gcnew System::EventHandler(this, &group::group_Load);
			this->gunaGradient2Panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void group_Load(System::Object^ sender, System::EventArgs^ e) {
	}




private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
