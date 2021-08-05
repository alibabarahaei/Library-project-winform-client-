#pragma once
#include"group.h"
#include"group2.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for CHOOSEUSERCONTROL
	/// </summary>
	public ref class CHOOSEUSERCONTROL : public System::Windows::Forms::UserControl
	{
	public:
		CHOOSEUSERCONTROL(void)
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
		~CHOOSEUSERCONTROL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaLabel^ choosefastebandi;
	private: Guna::UI::WinForms::GunaButton^ dasetebandi1;
	private: Guna::UI::WinForms::GunaButton^ dastebandi2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CHOOSEUSERCONTROL::typeid));
			this->choosefastebandi = (gcnew Guna::UI::WinForms::GunaLabel());
			this->dasetebandi1 = (gcnew Guna::UI::WinForms::GunaButton());
			this->dastebandi2 = (gcnew Guna::UI::WinForms::GunaButton());
			this->SuspendLayout();
			// 
			// choosefastebandi
			// 
			this->choosefastebandi->AutoSize = true;
			this->choosefastebandi->Font = (gcnew System::Drawing::Font(L"B Farnaz", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->choosefastebandi->Location = System::Drawing::Point(275, 219);
			this->choosefastebandi->Name = L"choosefastebandi";
			this->choosefastebandi->Size = System::Drawing::Size(391, 37);
			this->choosefastebandi->TabIndex = 0;
			this->choosefastebandi->Text = L"دسته بندی مورد نظر خود را انخاب کنید";
			// 
			// dasetebandi1
			// 
			this->dasetebandi1->AnimationHoverSpeed = 0.07F;
			this->dasetebandi1->AnimationSpeed = 0.03F;
			this->dasetebandi1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dasetebandi1->BorderColor = System::Drawing::Color::Black;
			this->dasetebandi1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->dasetebandi1->FocusedColor = System::Drawing::Color::Empty;
			this->dasetebandi1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->dasetebandi1->ForeColor = System::Drawing::Color::White;
			this->dasetebandi1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dasetebandi1.Image")));
			this->dasetebandi1->ImageSize = System::Drawing::Size(20, 20);
			this->dasetebandi1->Location = System::Drawing::Point(547, 367);
			this->dasetebandi1->Name = L"dasetebandi1";
			this->dasetebandi1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dasetebandi1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->dasetebandi1->OnHoverForeColor = System::Drawing::Color::White;
			this->dasetebandi1->OnHoverImage = nullptr;
			this->dasetebandi1->OnPressedColor = System::Drawing::Color::Black;
			this->dasetebandi1->Size = System::Drawing::Size(160, 42);
			this->dasetebandi1->TabIndex = 1;
			this->dasetebandi1->Text = L"دسته بندی 1";
			this->dasetebandi1->Click += gcnew System::EventHandler(this, &CHOOSEUSERCONTROL::dasetebandi1_Click);
			// 
			// dastebandi2
			// 
			this->dastebandi2->AnimationHoverSpeed = 0.07F;
			this->dastebandi2->AnimationSpeed = 0.03F;
			this->dastebandi2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dastebandi2->BorderColor = System::Drawing::Color::Black;
			this->dastebandi2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->dastebandi2->FocusedColor = System::Drawing::Color::Empty;
			this->dastebandi2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->dastebandi2->ForeColor = System::Drawing::Color::White;
			this->dastebandi2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dastebandi2.Image")));
			this->dastebandi2->ImageSize = System::Drawing::Size(20, 20);
			this->dastebandi2->Location = System::Drawing::Point(223, 367);
			this->dastebandi2->Name = L"dastebandi2";
			this->dastebandi2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dastebandi2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->dastebandi2->OnHoverForeColor = System::Drawing::Color::White;
			this->dastebandi2->OnHoverImage = nullptr;
			this->dastebandi2->OnPressedColor = System::Drawing::Color::Black;
			this->dastebandi2->Size = System::Drawing::Size(160, 42);
			this->dastebandi2->TabIndex = 2;
			this->dastebandi2->Text = L"دسته بندی2";
			this->dastebandi2->Click += gcnew System::EventHandler(this, &CHOOSEUSERCONTROL::dastebandi2_Click);
			// 
			// CHOOSEUSERCONTROL
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dastebandi2);
			this->Controls->Add(this->dasetebandi1);
			this->Controls->Add(this->choosefastebandi);
			this->Name = L"CHOOSEUSERCONTROL";
			this->Size = System::Drawing::Size(946, 695);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		group^ Group1 = gcnew group();
		group2^ Group2 = gcnew group2();
	private: System::Void dasetebandi1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Clear();
		this->Controls->Add(Group1);
		this->Dock = System::Windows::Forms::DockStyle::Fill;
	}
private: System::Void dastebandi2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(Group2);
	this->Dock = System::Windows::Forms::DockStyle::Fill;
}
};
}
