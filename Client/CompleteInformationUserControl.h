#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Client {

	/// <summary>
	/// Summary for CompleteInformationUserControl
	/// </summary>
	public ref class CompleteInformationUserControl : public System::Windows::Forms::UserControl
	{
	public:
		CompleteInformationUserControl(void)
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
		~CompleteInformationUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaPictureBox^ BOOKPICTURE;
	protected:
	private: System::Windows::Forms::Label^ NAMELABEL;
	private: System::Windows::Forms::Label^ WRITERLABEL;
	private: System::Windows::Forms::Label^ TRANSLATORLABEL;
	private: System::Windows::Forms::Label^ PUBLICATIONLABEL;
	private: System::Windows::Forms::Label^ PRICELABEL;
	private: System::Windows::Forms::Label^ AVAILABILITYLABEL;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ ADDBUTTON;
	private: System::Windows::Forms::PictureBox^ REMOVEBUTTON;
	private: System::Windows::Forms::Label^ QUANTITYLABEL;
	private: System::Windows::Forms::Label^ BOOKEXPLANATIONLABEL;
	private: System::Windows::Forms::Label^ BOOKEXPLANATION;
	private: System::Windows::Forms::TableLayoutPanel^ BOOKEXPLAINTABLE;
	private: System::Windows::Forms::Button^ ADDTOBUY;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CompleteInformationUserControl::typeid));
			this->BOOKPICTURE = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->NAMELABEL = (gcnew System::Windows::Forms::Label());
			this->WRITERLABEL = (gcnew System::Windows::Forms::Label());
			this->TRANSLATORLABEL = (gcnew System::Windows::Forms::Label());
			this->PUBLICATIONLABEL = (gcnew System::Windows::Forms::Label());
			this->PRICELABEL = (gcnew System::Windows::Forms::Label());
			this->AVAILABILITYLABEL = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ADDBUTTON = (gcnew System::Windows::Forms::PictureBox());
			this->QUANTITYLABEL = (gcnew System::Windows::Forms::Label());
			this->REMOVEBUTTON = (gcnew System::Windows::Forms::PictureBox());
			this->BOOKEXPLANATIONLABEL = (gcnew System::Windows::Forms::Label());
			this->BOOKEXPLANATION = (gcnew System::Windows::Forms::Label());
			this->BOOKEXPLAINTABLE = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ADDTOBUY = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BOOKPICTURE))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ADDBUTTON))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->REMOVEBUTTON))->BeginInit();
			this->BOOKEXPLAINTABLE->SuspendLayout();
			this->SuspendLayout();
			// 
			// BOOKPICTURE
			// 
			this->BOOKPICTURE->BackColor = System::Drawing::Color::Transparent;
			this->BOOKPICTURE->BaseColor = System::Drawing::Color::White;
			this->BOOKPICTURE->Location = System::Drawing::Point(589, 38);
			this->BOOKPICTURE->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BOOKPICTURE->Name = L"BOOKPICTURE";
			this->BOOKPICTURE->Radius = 10;
			this->BOOKPICTURE->Size = System::Drawing::Size(184, 271);
			this->BOOKPICTURE->TabIndex = 0;
			this->BOOKPICTURE->TabStop = false;
			// 
			// NAMELABEL
			// 
			this->NAMELABEL->AutoSize = true;
			this->NAMELABEL->Font = (gcnew System::Drawing::Font(L"B Nazanin", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->NAMELABEL->Location = System::Drawing::Point(484, 57);
			this->NAMELABEL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NAMELABEL->Name = L"NAMELABEL";
			this->NAMELABEL->Size = System::Drawing::Size(79, 35);
			this->NAMELABEL->TabIndex = 1;
			this->NAMELABEL->Text = L"نام کتاب";
			// 
			// WRITERLABEL
			// 
			this->WRITERLABEL->AutoSize = true;
			this->WRITERLABEL->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->WRITERLABEL->Location = System::Drawing::Point(500, 119);
			this->WRITERLABEL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->WRITERLABEL->Name = L"WRITERLABEL";
			this->WRITERLABEL->Size = System::Drawing::Size(50, 24);
			this->WRITERLABEL->TabIndex = 2;
			this->WRITERLABEL->Text = L"نویسنده";
			// 
			// TRANSLATORLABEL
			// 
			this->TRANSLATORLABEL->AutoSize = true;
			this->TRANSLATORLABEL->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->TRANSLATORLABEL->Location = System::Drawing::Point(503, 168);
			this->TRANSLATORLABEL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TRANSLATORLABEL->Name = L"TRANSLATORLABEL";
			this->TRANSLATORLABEL->Size = System::Drawing::Size(42, 24);
			this->TRANSLATORLABEL->TabIndex = 3;
			this->TRANSLATORLABEL->Text = L"مترجم";
			// 
			// PUBLICATIONLABEL
			// 
			this->PUBLICATIONLABEL->AutoSize = true;
			this->PUBLICATIONLABEL->Font = (gcnew System::Drawing::Font(L"B Nazanin", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->PUBLICATIONLABEL->Location = System::Drawing::Point(499, 218);
			this->PUBLICATIONLABEL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PUBLICATIONLABEL->Name = L"PUBLICATIONLABEL";
			this->PUBLICATIONLABEL->Size = System::Drawing::Size(51, 24);
			this->PUBLICATIONLABEL->TabIndex = 4;
			this->PUBLICATIONLABEL->Text = L"انتشارات";
			// 
			// PRICELABEL
			// 
			this->PRICELABEL->AutoSize = true;
			this->PRICELABEL->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->PRICELABEL->Location = System::Drawing::Point(292, 283);
			this->PRICELABEL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PRICELABEL->Name = L"PRICELABEL";
			this->PRICELABEL->Size = System::Drawing::Size(44, 26);
			this->PRICELABEL->TabIndex = 5;
			this->PRICELABEL->Text = L"قیمت";
			// 
			// AVAILABILITYLABEL
			// 
			this->AVAILABILITYLABEL->AutoSize = true;
			this->AVAILABILITYLABEL->Font = (gcnew System::Drawing::Font(L"B Homa", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->AVAILABILITYLABEL->ForeColor = System::Drawing::Color::Lime;
			this->AVAILABILITYLABEL->Location = System::Drawing::Point(151, 274);
			this->AVAILABILITYLABEL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->AVAILABILITYLABEL->Name = L"AVAILABILITYLABEL";
			this->AVAILABILITYLABEL->Size = System::Drawing::Size(73, 44);
			this->AVAILABILITYLABEL->TabIndex = 6;
			this->AVAILABILITYLABEL->Text = L"موجود";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				57)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				39)));
			this->tableLayoutPanel1->Controls->Add(this->ADDBUTTON, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->QUANTITYLABEL, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->REMOVEBUTTON, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(409, 280);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(126, 32);
			this->tableLayoutPanel1->TabIndex = 7;
			// 
			// ADDBUTTON
			// 
			this->ADDBUTTON->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ADDBUTTON.Image")));
			this->ADDBUTTON->Location = System::Drawing::Point(89, 2);
			this->ADDBUTTON->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ADDBUTTON->Name = L"ADDBUTTON";
			this->ADDBUTTON->Size = System::Drawing::Size(34, 27);
			this->ADDBUTTON->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ADDBUTTON->TabIndex = 8;
			this->ADDBUTTON->TabStop = false;
			this->ADDBUTTON->Click += gcnew System::EventHandler(this, &CompleteInformationUserControl::ADDBUTTON_Click);
			// 
			// QUANTITYLABEL
			// 
			this->QUANTITYLABEL->AutoSize = true;
			this->QUANTITYLABEL->Dock = System::Windows::Forms::DockStyle::Fill;
			this->QUANTITYLABEL->Font = (gcnew System::Drawing::Font(L"B Homa", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->QUANTITYLABEL->Location = System::Drawing::Point(32, 0);
			this->QUANTITYLABEL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->QUANTITYLABEL->Name = L"QUANTITYLABEL";
			this->QUANTITYLABEL->Size = System::Drawing::Size(53, 32);
			this->QUANTITYLABEL->TabIndex = 10;
			this->QUANTITYLABEL->Text = L"1";
			this->QUANTITYLABEL->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// REMOVEBUTTON
			// 
			this->REMOVEBUTTON->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"REMOVEBUTTON.Image")));
			this->REMOVEBUTTON->Location = System::Drawing::Point(2, 2);
			this->REMOVEBUTTON->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->REMOVEBUTTON->Name = L"REMOVEBUTTON";
			this->REMOVEBUTTON->Size = System::Drawing::Size(26, 27);
			this->REMOVEBUTTON->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->REMOVEBUTTON->TabIndex = 9;
			this->REMOVEBUTTON->TabStop = false;
			this->REMOVEBUTTON->Click += gcnew System::EventHandler(this, &CompleteInformationUserControl::REMOVEBUTTON_Click);
			// 
			// BOOKEXPLANATIONLABEL
			// 
			this->BOOKEXPLANATIONLABEL->AutoSize = true;
			this->BOOKEXPLANATIONLABEL->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->BOOKEXPLANATIONLABEL->Location = System::Drawing::Point(2, 0);
			this->BOOKEXPLANATIONLABEL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->BOOKEXPLANATIONLABEL->Name = L"BOOKEXPLANATIONLABEL";
			this->BOOKEXPLANATIONLABEL->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->BOOKEXPLANATIONLABEL->Size = System::Drawing::Size(39, 13);
			this->BOOKEXPLANATIONLABEL->TabIndex = 9;
			this->BOOKEXPLANATIONLABEL->Text = L"معرفی";
			this->BOOKEXPLANATIONLABEL->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// BOOKEXPLANATION
			// 
			this->BOOKEXPLANATION->AutoSize = true;
			this->BOOKEXPLANATION->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->BOOKEXPLANATION->Location = System::Drawing::Point(2, 25);
			this->BOOKEXPLANATION->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->BOOKEXPLANATION->Name = L"BOOKEXPLANATION";
			this->BOOKEXPLANATION->Size = System::Drawing::Size(65, 13);
			this->BOOKEXPLANATION->TabIndex = 10;
			this->BOOKEXPLANATION->Text = L"معرفی کتاب";
			this->BOOKEXPLANATION->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BOOKEXPLAINTABLE
			// 
			this->BOOKEXPLAINTABLE->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->BOOKEXPLAINTABLE->ColumnCount = 1;
			this->BOOKEXPLAINTABLE->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->BOOKEXPLAINTABLE->Controls->Add(this->BOOKEXPLANATIONLABEL, 0, 0);
			this->BOOKEXPLAINTABLE->Controls->Add(this->BOOKEXPLANATION, 0, 1);
			this->BOOKEXPLAINTABLE->Location = System::Drawing::Point(72, 352);
			this->BOOKEXPLAINTABLE->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BOOKEXPLAINTABLE->Name = L"BOOKEXPLAINTABLE";
			this->BOOKEXPLAINTABLE->RowCount = 2;
			this->BOOKEXPLAINTABLE->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->BOOKEXPLAINTABLE->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 88.88889F)));
			this->BOOKEXPLAINTABLE->Size = System::Drawing::Size(695, 234);
			this->BOOKEXPLAINTABLE->TabIndex = 11;
			// 
			// ADDTOBUY
			// 
			this->ADDTOBUY->BackColor = System::Drawing::Color::NavajoWhite;
			this->ADDTOBUY->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ADDTOBUY->Font = (gcnew System::Drawing::Font(L"B Homa", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ADDTOBUY->Location = System::Drawing::Point(145, 173);
			this->ADDTOBUY->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ADDTOBUY->Name = L"ADDTOBUY";
			this->ADDTOBUY->Size = System::Drawing::Size(188, 68);
			this->ADDTOBUY->TabIndex = 12;
			this->ADDTOBUY->Text = L"اضافه کردن به سبد خرید";
			this->ADDTOBUY->UseVisualStyleBackColor = false;
			this->ADDTOBUY->Click += gcnew System::EventHandler(this, &CompleteInformationUserControl::ADDTOBUY_Click);
			// 
			// CompleteInformationUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->ADDTOBUY);
			this->Controls->Add(this->BOOKEXPLAINTABLE);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->AVAILABILITYLABEL);
			this->Controls->Add(this->PRICELABEL);
			this->Controls->Add(this->PUBLICATIONLABEL);
			this->Controls->Add(this->TRANSLATORLABEL);
			this->Controls->Add(this->WRITERLABEL);
			this->Controls->Add(this->NAMELABEL);
			this->Controls->Add(this->BOOKPICTURE);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"CompleteInformationUserControl";
			this->Size = System::Drawing::Size(826, 624);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BOOKPICTURE))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ADDBUTTON))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->REMOVEBUTTON))->EndInit();
			this->BOOKEXPLAINTABLE->ResumeLayout(false);
			this->BOOKEXPLAINTABLE->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private:		cli::array<String^>^ Information = gcnew  cli::array<String^>(3);
	   // a function for getting information from the array
public:
	   String ^GetId()
	   {
		   return Information[0];
	   }
	   String^ GetPrice()
	   {
		   return Information[1];
	   }
	   String^ GetQuantity()
	   {
		   return Information[2];
	   }
private: System::Void ADDBUTTON_Click(System::Object^ sender, System::EventArgs^ e) {
	//for calculating quantity
	auto previous = int::Parse(QUANTITYLABEL->Text);
	previous += 1;
	auto next = previous.ToString();
	QUANTITYLABEL->Text = next;
	
	//for calculating price label
	//
	//   NOTE : 
	// 	   THE FEE MUST BE RETRIVED FROM THE DATABASE SO THIS IS JUST A SAMPLE
	//
	auto previousP = int::Parse(PRICELABEL->Text);
	previousP += previousP;
	auto nextP = previousP.ToString();
	PRICELABEL->Text = nextP;

}
private: System::Void REMOVEBUTTON_Click(System::Object^ sender, System::EventArgs^ e) {
	//for calculating quantity
	auto previousQ = int::Parse(QUANTITYLABEL->Text);
	if (previousQ >=1) {
		previousQ -= 1;
	}
	else
	{
		//the Error useercontrol will be created
		return;
	}
	auto nextQ = previousQ.ToString();
	QUANTITYLABEL->Text = nextQ;
	//for calculating price label
	//
	//   NOTE : 
	// 	   THE FEE MUST BE RETRIVED FROM THE DATABASE SO THIS IS JUST A SAMPLE
	//
	auto previousP = int::Parse(PRICELABEL->Text);
	previousP -= previousP;
	auto nextP = previousP.ToString();
	PRICELABEL->Text = nextP;

}
	   //a bool for checking if the payment list is empty or not
	   bool Is_Pay_empty;
	   //a function to get the information of emptiness of the pay
public:	   bool Get_IS_PAY_EMPTY()
	   {
		   return Is_Pay_empty;
	   }
private: System::Void ADDTOBUY_Click(System::Object^ sender, System::EventArgs^ e) {
	Is_Pay_empty = false;
	//0=>id
	//1=>price
	//2= quantity
	//Information[0];
	//Information[1] = PRICELABEL->Text;
	//Information[2] = QUANTITYLABEL->Text;
}
};

}
