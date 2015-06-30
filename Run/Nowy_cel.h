#pragma once

namespace Run {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for Nowy_cel
	/// </summary>
	public ref class Nowy_cel : public System::Windows::Forms::Form
	{
	public:
		Nowy_cel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^  label4;
	public:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider2;
	private: System::Windows::Forms::ErrorProvider^  errorProvider3;
	private: System::Windows::Forms::ErrorProvider^  errorProvider4;
			 int k = 0;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Nowy_cel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Nowy_cel::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider4 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider4))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Rodzaj celu";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(74, 219);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Zapisz";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Nowy_cel::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(211, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Anuluj";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Nowy_cel::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(12, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Od";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(12, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Do";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(121, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Click += gcnew System::EventHandler(this, &Nowy_cel::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Nowy_cel::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(121, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->Click += gcnew System::EventHandler(this, &Nowy_cel::textBox3_Click);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Nowy_cel::textBox3_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(62, 131);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 32);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Nowy_cel::pictureBox1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Wheat;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ilosc treningow", L"Dystans" });
			this->comboBox1->Location = System::Drawing::Point(121, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Nowy_cel::comboBox1_SelectedIndexChanged);
			this->comboBox1->Click += gcnew System::EventHandler(this, &Nowy_cel::comboBox1_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->monthCalendar1->Location = System::Drawing::Point(275, 18);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 11;
			this->monthCalendar1->Visible = false;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Nowy_cel::monthCalendar1_DateChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(12, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Liczba treningów";
			this->label4->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(121, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 13;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Nowy_cel::textBox1_TextChanged);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// errorProvider3
			// 
			this->errorProvider3->ContainerControl = this;
			// 
			// errorProvider4
			// 
			this->errorProvider4->ContainerControl = this;
			// 
			// Nowy_cel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(450, 272);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(466, 310);
			this->MinimumSize = System::Drawing::Size(466, 310);
			this->Name = L"Nowy_cel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Nowy_cel";
			this->Load += gcnew System::EventHandler(this, &Nowy_cel::Nowy_cel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	if (k % 2 == 0)
	{
		textBox2->Text = monthCalendar1->SelectionRange->End.Date.ToShortDateString();
		
	}
	else
	{
		textBox3->Text = monthCalendar1->SelectionRange->End.Date.ToShortDateString();
		
	}


}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	monthCalendar1->Visible = true;

}

private: System::Void Nowy_cel_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	label4->Visible = true;
	label4->Text = comboBox1->Text;
	textBox1->Visible = true;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex == -1)
		errorProvider1->SetError(this->comboBox1, "Wybierz rodzaj celu");
	if (textBox1->Text == "")
		errorProvider2->SetError(this->textBox1, "WprowadŸ dane");
	if (textBox2->Text == "")
		errorProvider3->SetError(this->textBox2, "WprowadŸ pocz¹tkow¹ datê");
	if (textBox3->Text == "")
		errorProvider4->SetError(this->textBox3, "WprowadŸ koñcow¹ datê");
	if (comboBox1->SelectedIndex != -1 && textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "")
	{
		StreamWriter ^ zapis = gcnew StreamWriter("cele.txt",true);
			zapis->WriteLine(comboBox1->Text);
			zapis->WriteLine(textBox1->Text);
			zapis->WriteLine(textBox2->Text);
			zapis->WriteLine(textBox3->Text);
			zapis->Close();
			this->Close();
	}

}
private: System::Void comboBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	errorProvider1->Clear();
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	errorProvider2->Clear();
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	errorProvider3->Clear();
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	errorProvider4->Clear();
}
private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	k = 0;
}
private: System::Void textBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	k = 1;
}
};
} 
