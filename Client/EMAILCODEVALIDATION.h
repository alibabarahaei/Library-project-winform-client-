#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for EMAILCODEVALIDATION
	/// </summary>
	public ref class EMAILCODEVALIDATION : public System::Windows::Forms::UserControl
	{
	public:
		EMAILCODEVALIDATION(void)
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
		~EMAILCODEVALIDATION()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaLabel^ TYPECODELABEL;
	protected:
	private: Guna::UI::WinForms::GunaTextBox^ SENTCODE;
	private: Guna::UI::WinForms::GunaGradientButton^ FINALIZEREGISTER;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EMAILCODEVALIDATION::typeid));
			this->TYPECODELABEL = (gcnew Guna::UI::WinForms::GunaLabel());
			this->SENTCODE = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->FINALIZEREGISTER = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// TYPECODELABEL
			// 
			this->TYPECODELABEL->AutoSize = true;
			this->TYPECODELABEL->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->TYPECODELABEL->Location = System::Drawing::Point(590, 230);
			this->TYPECODELABEL->Name = L"TYPECODELABEL";
			this->TYPECODELABEL->Size = System::Drawing::Size(274, 20);
			this->TYPECODELABEL->TabIndex = 0;
			this->TYPECODELABEL->Text = L"رمز دریافت شده توسط ایمیل را وارد نمایید";
			// 
			// SENTCODE
			// 
			this->SENTCODE->BaseColor = System::Drawing::Color::White;
			this->SENTCODE->BorderColor = System::Drawing::Color::Silver;
			this->SENTCODE->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->SENTCODE->FocusedBaseColor = System::Drawing::Color::White;
			this->SENTCODE->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->SENTCODE->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->SENTCODE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->SENTCODE->Location = System::Drawing::Point(555, 316);
			this->SENTCODE->Name = L"SENTCODE";
			this->SENTCODE->PasswordChar = '\0';
			this->SENTCODE->SelectedText = L"";
			this->SENTCODE->Size = System::Drawing::Size(306, 50);
			this->SENTCODE->TabIndex = 1;
			// 
			// FINALIZEREGISTER
			// 
			this->FINALIZEREGISTER->AnimationHoverSpeed = 0.07F;
			this->FINALIZEREGISTER->AnimationSpeed = 0.03F;
			this->FINALIZEREGISTER->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->FINALIZEREGISTER->BaseColor2 = System::Drawing::Color::Fuchsia;
			this->FINALIZEREGISTER->BorderColor = System::Drawing::Color::Black;
			this->FINALIZEREGISTER->DialogResult = System::Windows::Forms::DialogResult::None;
			this->FINALIZEREGISTER->FocusedColor = System::Drawing::Color::Empty;
			this->FINALIZEREGISTER->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->FINALIZEREGISTER->ForeColor = System::Drawing::Color::White;
			this->FINALIZEREGISTER->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FINALIZEREGISTER.Image")));
			this->FINALIZEREGISTER->ImageSize = System::Drawing::Size(20, 20);
			this->FINALIZEREGISTER->Location = System::Drawing::Point(39, 553);
			this->FINALIZEREGISTER->Name = L"FINALIZEREGISTER";
			this->FINALIZEREGISTER->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->FINALIZEREGISTER->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->FINALIZEREGISTER->OnHoverBorderColor = System::Drawing::Color::Black;
			this->FINALIZEREGISTER->OnHoverForeColor = System::Drawing::Color::White;
			this->FINALIZEREGISTER->OnHoverImage = nullptr;
			this->FINALIZEREGISTER->OnPressedColor = System::Drawing::Color::Black;
			this->FINALIZEREGISTER->Size = System::Drawing::Size(160, 42);
			this->FINALIZEREGISTER->TabIndex = 2;
			this->FINALIZEREGISTER->Text = L"ثبت نام";
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox1->Location = System::Drawing::Point(245, 34);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(393, 45);
			this->gunaPictureBox1->TabIndex = 5;
			this->gunaPictureBox1->TabStop = false;
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaLabel1->Location = System::Drawing::Point(412, 44);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(86, 20);
			this->gunaLabel1->TabIndex = 6;
			this->gunaLabel1->Text = L"gunaLabel1";
			// 
			// EMAILCODEVALIDATION
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->gunaLabel1);
			this->Controls->Add(this->gunaPictureBox1);
			this->Controls->Add(this->FINALIZEREGISTER);
			this->Controls->Add(this->SENTCODE);
			this->Controls->Add(this->TYPECODELABEL);
			this->Name = L"EMAILCODEVALIDATION";
			this->Size = System::Drawing::Size(902, 654);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
