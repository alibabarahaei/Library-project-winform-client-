#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for group2
	/// </summary>
	public ref class group2 : public System::Windows::Forms::UserControl
	{
	public:
		group2(void)
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
		~group2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: Guna::UI::WinForms::GunaPanel^ gunaPanel1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton7;
	private: Guna::UI::WinForms::GunaButton^ gunaButton6;
	private: Guna::UI::WinForms::GunaButton^ gunaButton1;
	private: Guna::UI::WinForms::GunaButton^ gunaButton2;
	private: Guna::UI::WinForms::GunaButton^ gunaButton5;
	private: Guna::UI::WinForms::GunaButton^ gunaButton3;
	private: Guna::UI::WinForms::GunaButton^ gunaButton4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(group2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->gunaPanel1 = (gcnew Guna::UI::WinForms::GunaPanel());
			this->gunaButton7 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton6 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton1 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton2 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton5 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton3 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton4 = (gcnew Guna::UI::WinForms::GunaButton());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->gunaPanel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 139);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(249, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 139);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(479, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 139);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(694, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 139);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(3, 158);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 139);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(3, 330);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 139);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(3, 492);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(107, 139);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(249, 330);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(107, 139);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(249, 158);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(107, 139);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(249, 492);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(107, 139);
			this->button10->TabIndex = 9;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(479, 330);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(107, 139);
			this->button11->TabIndex = 10;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(479, 158);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(107, 139);
			this->button12->TabIndex = 11;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(479, 492);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(107, 139);
			this->button13->TabIndex = 12;
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(694, 330);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(107, 139);
			this->button14->TabIndex = 13;
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(694, 158);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(107, 139);
			this->button15->TabIndex = 14;
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(694, 492);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(107, 139);
			this->button16->TabIndex = 15;
			this->button16->UseVisualStyleBackColor = true;
			// 
			// gunaPanel1
			// 
			this->gunaPanel1->Controls->Add(this->gunaButton7);
			this->gunaPanel1->Controls->Add(this->gunaButton6);
			this->gunaPanel1->Controls->Add(this->gunaButton1);
			this->gunaPanel1->Controls->Add(this->gunaButton2);
			this->gunaPanel1->Controls->Add(this->gunaButton5);
			this->gunaPanel1->Controls->Add(this->gunaButton3);
			this->gunaPanel1->Controls->Add(this->gunaButton4);
			this->gunaPanel1->Location = System::Drawing::Point(131, 693);
			this->gunaPanel1->Name = L"gunaPanel1";
			this->gunaPanel1->Size = System::Drawing::Size(435, 40);
			this->gunaPanel1->TabIndex = 16;
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
			this->gunaButton7->Location = System::Drawing::Point(3, -1);
			this->gunaButton7->Name = L"gunaButton7";
			this->gunaButton7->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton7->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton7->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton7->OnHoverImage = nullptr;
			this->gunaButton7->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton7->Size = System::Drawing::Size(82, 43);
			this->gunaButton7->TabIndex = 34;
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
			this->gunaButton6->Location = System::Drawing::Point(83, -2);
			this->gunaButton6->Name = L"gunaButton6";
			this->gunaButton6->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton6->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton6->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton6->OnHoverImage = nullptr;
			this->gunaButton6->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton6->Size = System::Drawing::Size(91, 43);
			this->gunaButton6->TabIndex = 36;
			this->gunaButton6->Text = L"بعدی";
			this->gunaButton6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->gunaButton1->Location = System::Drawing::Point(382, -2);
			this->gunaButton1->Name = L"gunaButton1";
			this->gunaButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton1->OnHoverImage = nullptr;
			this->gunaButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton1->Size = System::Drawing::Size(54, 41);
			this->gunaButton1->TabIndex = 30;
			this->gunaButton1->Text = L"1";
			this->gunaButton1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->gunaButton2->Location = System::Drawing::Point(328, -2);
			this->gunaButton2->Name = L"gunaButton2";
			this->gunaButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton2->OnHoverImage = nullptr;
			this->gunaButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton2->Size = System::Drawing::Size(54, 43);
			this->gunaButton2->TabIndex = 31;
			this->gunaButton2->Text = L"2";
			this->gunaButton2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaButton5
			// 
			this->gunaButton5->AnimationHoverSpeed = 0.07F;
			this->gunaButton5->AnimationSpeed = 0.03F;
			this->gunaButton5->BaseColor = System::Drawing::Color::Silver;
			this->gunaButton5->BorderColor = System::Drawing::Color::Gray;
			this->gunaButton5->BorderSize = 1;
			this->gunaButton5->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton5->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton5->ForeColor = System::Drawing::Color::Black;
			this->gunaButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton5.Image")));
			this->gunaButton5->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton5->Location = System::Drawing::Point(170, -1);
			this->gunaButton5->Name = L"gunaButton5";
			this->gunaButton5->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton5->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton5->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton5->OnHoverImage = nullptr;
			this->gunaButton5->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton5->Size = System::Drawing::Size(54, 42);
			this->gunaButton5->TabIndex = 35;
			this->gunaButton5->Text = L"5";
			this->gunaButton5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gunaButton3
			// 
			this->gunaButton3->AnimationHoverSpeed = 0.07F;
			this->gunaButton3->AnimationSpeed = 0.03F;
			this->gunaButton3->BaseColor = System::Drawing::Color::Silver;
			this->gunaButton3->BorderColor = System::Drawing::Color::Gray;
			this->gunaButton3->BorderSize = 1;
			this->gunaButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton3->ForeColor = System::Drawing::Color::Black;
			this->gunaButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton3.Image")));
			this->gunaButton3->ImageSize = System::Drawing::Size(0, 0);
			this->gunaButton3->Location = System::Drawing::Point(275, -1);
			this->gunaButton3->Name = L"gunaButton3";
			this->gunaButton3->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton3->OnHoverImage = nullptr;
			this->gunaButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton3->Size = System::Drawing::Size(54, 42);
			this->gunaButton3->TabIndex = 32;
			this->gunaButton3->Text = L"3";
			this->gunaButton3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->gunaButton4->Location = System::Drawing::Point(222, -2);
			this->gunaButton4->Name = L"gunaButton4";
			this->gunaButton4->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton4->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton4->OnHoverImage = nullptr;
			this->gunaButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton4->Size = System::Drawing::Size(54, 43);
			this->gunaButton4->TabIndex = 33;
			this->gunaButton4->Text = L"4";
			this->gunaButton4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				51.68067F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				48.31933F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				215)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				228)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button16, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->button3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button13, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->button14, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->button10, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->button15, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->button7, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button11, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button5, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button9, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button8, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button12, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button6, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47.40061F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 52.59939F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 162)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 181)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(920, 671);
			this->tableLayoutPanel1->TabIndex = 17;
			// 
			// group2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->gunaPanel1);
			this->Name = L"group2";
			this->Size = System::Drawing::Size(996, 751);
			this->gunaPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
