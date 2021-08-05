#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for GETEMAILUSERCONTROL
	/// </summary>
	public ref class GETEMAILUSERCONTROL : public System::Windows::Forms::UserControl
	{
	public:
		GETEMAILUSERCONTROL(void)
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
		~GETEMAILUSERCONTROL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaLabel^ TYPEEMAILLABEL;
	protected:
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaGradientButton^ CODEVALIDATION;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GETEMAILUSERCONTROL::typeid));
			this->TYPEEMAILLABEL = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->CODEVALIDATION = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TYPEEMAILLABEL
			// 
			this->TYPEEMAILLABEL->AutoSize = true;
			this->TYPEEMAILLABEL->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->TYPEEMAILLABEL->Location = System::Drawing::Point(590, 227);
			this->TYPEEMAILLABEL->Name = L"TYPEEMAILLABEL";
			this->TYPEEMAILLABEL->Size = System::Drawing::Size(143, 20);
			this->TYPEEMAILLABEL->TabIndex = 0;
			this->TYPEEMAILLABEL->Text = L"ایمیل خود را وارد کنید";
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
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaTextBox1->Location = System::Drawing::Point(414, 311);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(309, 45);
			this->gunaTextBox1->TabIndex = 1;
			this->gunaTextBox1->Text = L"gunaTextBox1";
			// 
			// CODEVALIDATION
			// 
			this->CODEVALIDATION->AnimationHoverSpeed = 0.07F;
			this->CODEVALIDATION->AnimationSpeed = 0.03F;
			this->CODEVALIDATION->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->CODEVALIDATION->BaseColor2 = System::Drawing::Color::Fuchsia;
			this->CODEVALIDATION->BorderColor = System::Drawing::Color::Black;
			this->CODEVALIDATION->DialogResult = System::Windows::Forms::DialogResult::None;
			this->CODEVALIDATION->FocusedColor = System::Drawing::Color::Empty;
			this->CODEVALIDATION->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->CODEVALIDATION->ForeColor = System::Drawing::Color::White;
			this->CODEVALIDATION->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CODEVALIDATION.Image")));
			this->CODEVALIDATION->ImageSize = System::Drawing::Size(20, 20);
			this->CODEVALIDATION->Location = System::Drawing::Point(36, 524);
			this->CODEVALIDATION->Name = L"CODEVALIDATION";
			this->CODEVALIDATION->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->CODEVALIDATION->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->CODEVALIDATION->OnHoverBorderColor = System::Drawing::Color::Black;
			this->CODEVALIDATION->OnHoverForeColor = System::Drawing::Color::White;
			this->CODEVALIDATION->OnHoverImage = nullptr;
			this->CODEVALIDATION->OnPressedColor = System::Drawing::Color::Black;
			this->CODEVALIDATION->Size = System::Drawing::Size(183, 42);
			this->CODEVALIDATION->TabIndex = 2;
			this->CODEVALIDATION->Text = L"مرحله بعد";
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
			this->gunaGradientButton2->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton2->Location = System::Drawing::Point(225, 524);
			this->gunaGradientButton2->Name = L"gunaGradientButton2";
			this->gunaGradientButton2->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton2->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->OnHoverImage = nullptr;
			this->gunaGradientButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->Size = System::Drawing::Size(194, 42);
			this->gunaGradientButton2->TabIndex = 3;
			this->gunaGradientButton2->Text = L"مرحله قبل";
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel1->Location = System::Drawing::Point(366, 41);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(86, 20);
			this->gunaLabel1->TabIndex = 8;
			this->gunaLabel1->Text = L"gunaLabel1";
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox1->Location = System::Drawing::Point(199, 31);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(393, 45);
			this->gunaPictureBox1->TabIndex = 7;
			this->gunaPictureBox1->TabStop = false;
			// 
			// GETEMAILUSERCONTROL
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->gunaLabel1);
			this->Controls->Add(this->gunaPictureBox1);
			this->Controls->Add(this->gunaGradientButton2);
			this->Controls->Add(this->CODEVALIDATION);
			this->Controls->Add(this->gunaTextBox1);
			this->Controls->Add(this->TYPEEMAILLABEL);
			this->Name = L"GETEMAILUSERCONTROL";
			this->Size = System::Drawing::Size(822, 605);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
