#pragma once
#include<string>



namespace Client {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace std;
	using namespace System::Threading;

	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	IntPtr CreateObject_API();
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	int GetUsernametRowId_API(IntPtr, std::wstring, bool ThrowExc);

#pragma region Update_Server
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	extern void UpdateServerUsername_API(IntPtr, std::string usernamelast, std::string usernamenew);
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	void  UpdateServerPassword_API(IntPtr, std::string passwordlast, std::string passwordnew);
#pragma endregion
#pragma region Server_signup
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	extern bool Signup_Admin_Username_Api(IntPtr, std::string username);
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	extern bool Signup_Admin_Password_API(IntPtr, std::string password, bool ThrowExc);
	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	extern bool Check_Admin_Username_API(IntPtr db, string username, string password);
#pragma endregion
#pragma region Profile_Picture

	[DllImport("DataBaseDLL.dll", CallingConvention = CallingConvention::Cdecl)]
	extern void Set_Server_FileNmaeProfilePicture_API(IntPtr, std::string username, std::string filenmaeprofilepicture, bool ThrowExc);
	/// <summary>
	/// Summary for EnterUserControl
	/// </summary>
	public ref class EnterUserControl : public System::Windows::Forms::UserControl
	{
	public:
		IntPtr db;
		
		EnterUserControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			db = CreateObject_API();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EnterUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ CANCELBTN;
	protected:
	private: System::Windows::Forms::Button^ ENTERBTN;
	private: System::Windows::Forms::Label^ ENTERACEUSERNAME;
	private: System::Windows::Forms::Label^ ENTERANCEPASSWORD;
	private: Guna::UI::WinForms::GunaTextBox^ ENTERANCEUSERNAMETEXTBOX;


	private: Guna::UI::WinForms::GunaTextBox^ ENTERANCEPASSTEXTBOX;
	private: Guna::UI::WinForms::GunaLinkLabel^ gunaLinkLabel1;
	private: Guna::UI::WinForms::GunaLinkLabel^ gunaLinkLabel2;
	private: System::Windows::Forms::ToolTip^ INFORMATIONTOOLTIP;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EnterUserControl::typeid));
			this->CANCELBTN = (gcnew System::Windows::Forms::Button());
			this->ENTERBTN = (gcnew System::Windows::Forms::Button());
			this->ENTERACEUSERNAME = (gcnew System::Windows::Forms::Label());
			this->ENTERANCEPASSWORD = (gcnew System::Windows::Forms::Label());
			this->ENTERANCEUSERNAMETEXTBOX = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->ENTERANCEPASSTEXTBOX = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLinkLabel1 = (gcnew Guna::UI::WinForms::GunaLinkLabel());
			this->gunaLinkLabel2 = (gcnew Guna::UI::WinForms::GunaLinkLabel());
			this->INFORMATIONTOOLTIP = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->SuspendLayout();
			// 
			// CANCELBTN
			// 
			this->CANCELBTN->BackColor = System::Drawing::Color::Transparent;
			this->CANCELBTN->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CANCELBTN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->CANCELBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CANCELBTN->Font = (gcnew System::Drawing::Font(L"B Titr", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->CANCELBTN->Location = System::Drawing::Point(217, 474);
			this->CANCELBTN->Name = L"CANCELBTN";
			this->CANCELBTN->Size = System::Drawing::Size(125, 60);
			this->CANCELBTN->TabIndex = 0;
			this->CANCELBTN->Text = L"لغو";
			this->CANCELBTN->UseVisualStyleBackColor = false;
			// 
			// ENTERBTN
			// 
			this->ENTERBTN->BackColor = System::Drawing::Color::Transparent;
			this->ENTERBTN->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ENTERBTN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ENTERBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ENTERBTN->Font = (gcnew System::Drawing::Font(L"B Titr", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ENTERBTN->Location = System::Drawing::Point(3, 474);
			this->ENTERBTN->Name = L"ENTERBTN";
			this->ENTERBTN->Size = System::Drawing::Size(208, 60);
			this->ENTERBTN->TabIndex = 1;
			this->ENTERBTN->Text = L"ورود";
			this->ENTERBTN->UseVisualStyleBackColor = false;
			// 
			// ENTERACEUSERNAME
			// 
			this->ENTERACEUSERNAME->AutoSize = true;
			this->ENTERACEUSERNAME->BackColor = System::Drawing::Color::Transparent;
			this->ENTERACEUSERNAME->Font = (gcnew System::Drawing::Font(L"B Traffic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ENTERACEUSERNAME->ForeColor = System::Drawing::Color::White;
			this->ENTERACEUSERNAME->Location = System::Drawing::Point(583, 68);
			this->ENTERACEUSERNAME->Name = L"ENTERACEUSERNAME";
			this->ENTERACEUSERNAME->Size = System::Drawing::Size(120, 43);
			this->ENTERACEUSERNAME->TabIndex = 2;
			this->ENTERACEUSERNAME->Text = L"نام کاربری";
			// 
			// ENTERANCEPASSWORD
			// 
			this->ENTERANCEPASSWORD->AutoSize = true;
			this->ENTERANCEPASSWORD->BackColor = System::Drawing::Color::Transparent;
			this->ENTERANCEPASSWORD->Font = (gcnew System::Drawing::Font(L"B Traffic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->ENTERANCEPASSWORD->ForeColor = System::Drawing::Color::White;
			this->ENTERANCEPASSWORD->Location = System::Drawing::Point(592, 148);
			this->ENTERANCEPASSWORD->Name = L"ENTERANCEPASSWORD";
			this->ENTERANCEPASSWORD->Size = System::Drawing::Size(102, 43);
			this->ENTERANCEPASSWORD->TabIndex = 3;
			this->ENTERANCEPASSWORD->Text = L"رمز عبور";
			// 
			// ENTERANCEUSERNAMETEXTBOX
			// 
			this->ENTERANCEUSERNAMETEXTBOX->BaseColor = System::Drawing::Color::White;
			this->ENTERANCEUSERNAMETEXTBOX->BorderColor = System::Drawing::Color::Silver;
			this->ENTERANCEUSERNAMETEXTBOX->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->ENTERANCEUSERNAMETEXTBOX->FocusedBaseColor = System::Drawing::Color::White;
			this->ENTERANCEUSERNAMETEXTBOX->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ENTERANCEUSERNAMETEXTBOX->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->ENTERANCEUSERNAMETEXTBOX->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->ENTERANCEUSERNAMETEXTBOX->Location = System::Drawing::Point(366, 79);
			this->ENTERANCEUSERNAMETEXTBOX->Name = L"ENTERANCEUSERNAMETEXTBOX";
			this->ENTERANCEUSERNAMETEXTBOX->PasswordChar = '\0';
			this->ENTERANCEUSERNAMETEXTBOX->SelectedText = L"";
			this->ENTERANCEUSERNAMETEXTBOX->Size = System::Drawing::Size(160, 32);
			this->ENTERANCEUSERNAMETEXTBOX->TabIndex = 4;
			this->ENTERANCEUSERNAMETEXTBOX->MouseHover += gcnew System::EventHandler(this, &EnterUserControl::ENTERANCETEXTBOX_MouseHover);
			// 
			// ENTERANCEPASSTEXTBOX
			// 
			this->ENTERANCEPASSTEXTBOX->BaseColor = System::Drawing::Color::White;
			this->ENTERANCEPASSTEXTBOX->BorderColor = System::Drawing::Color::Silver;
			this->ENTERANCEPASSTEXTBOX->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->ENTERANCEPASSTEXTBOX->FocusedBaseColor = System::Drawing::Color::White;
			this->ENTERANCEPASSTEXTBOX->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ENTERANCEPASSTEXTBOX->FocusedForeColor = System::Drawing::SystemColors::ControlText;
			this->ENTERANCEPASSTEXTBOX->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->ENTERANCEPASSTEXTBOX->Location = System::Drawing::Point(366, 159);
			this->ENTERANCEPASSTEXTBOX->Name = L"ENTERANCEPASSTEXTBOX";
			this->ENTERANCEPASSTEXTBOX->PasswordChar = '#';
			this->ENTERANCEPASSTEXTBOX->SelectedText = L"";
			this->ENTERANCEPASSTEXTBOX->Size = System::Drawing::Size(160, 32);
			this->ENTERANCEPASSTEXTBOX->TabIndex = 6;
			this->ENTERANCEPASSTEXTBOX->MouseHover += gcnew System::EventHandler(this, &EnterUserControl::ENTERANCEPASSTEXTBOX_MouseHover);
			// 
			// gunaLinkLabel1
			// 
			this->gunaLinkLabel1->AutoSize = true;
			this->gunaLinkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaLinkLabel1->Font = (gcnew System::Drawing::Font(L"B Titr", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLinkLabel1->LinkColor = System::Drawing::Color::Teal;
			this->gunaLinkLabel1->Location = System::Drawing::Point(371, 235);
			this->gunaLinkLabel1->Name = L"gunaLinkLabel1";
			this->gunaLinkLabel1->Size = System::Drawing::Size(123, 30);
			this->gunaLinkLabel1->TabIndex = 7;
			this->gunaLinkLabel1->TabStop = true;
			this->gunaLinkLabel1->Text = L"فراموشی رمز عبور\r\n";
			this->gunaLinkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &EnterUserControl::gunaLinkLabel1_LinkClicked);
			// 
			// gunaLinkLabel2
			// 
			this->gunaLinkLabel2->AutoSize = true;
			this->gunaLinkLabel2->BackColor = System::Drawing::Color::Transparent;
			this->gunaLinkLabel2->Font = (gcnew System::Drawing::Font(L"B Titr", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->gunaLinkLabel2->LinkColor = System::Drawing::Color::Teal;
			this->gunaLinkLabel2->Location = System::Drawing::Point(565, 235);
			this->gunaLinkLabel2->Name = L"gunaLinkLabel2";
			this->gunaLinkLabel2->Size = System::Drawing::Size(131, 30);
			this->gunaLinkLabel2->TabIndex = 8;
			this->gunaLinkLabel2->TabStop = true;
			this->gunaLinkLabel2->Text = L"ایجاد حساب کاربری\r\n";
			// 
			// EnterUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Controls->Add(this->gunaLinkLabel2);
			this->Controls->Add(this->gunaLinkLabel1);
			this->Controls->Add(this->ENTERANCEPASSTEXTBOX);
			this->Controls->Add(this->ENTERANCEUSERNAMETEXTBOX);
			this->Controls->Add(this->ENTERANCEPASSWORD);
			this->Controls->Add(this->ENTERACEUSERNAME);
			this->Controls->Add(this->ENTERBTN);
			this->Controls->Add(this->CANCELBTN);
			this->Name = L"EnterUserControl";
			this->Size = System::Drawing::Size(731, 546);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void gunaLinkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
private: System::Void ENTERANCETEXTBOX_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	INFORMATIONTOOLTIP->Show("نام کاربری را وارد نمایید", ENTERANCEUSERNAMETEXTBOX);
}
private: System::Void ENTERANCEPASSTEXTBOX_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	INFORMATIONTOOLTIP->Show("رمز عبور را وارد نمایید", ENTERANCEPASSTEXTBOX);
}
};
}
