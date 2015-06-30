#pragma once
#include "Buty.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h> 
#include <math.h>


namespace Run {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Summary for Ustawienia
	/// </summary>
	public ref class Ustawienia : public System::Windows::Forms::Form
	{
	public:
		Ustawienia(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
	public:
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ErrorProvider^  errorProvider4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button5;


			 String^ plec;
			 
			 
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Ustawienia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;

	private: System::ComponentModel::IContainer^  components;

	private: System::Windows::Forms::ErrorProvider^  errorProvider2;
	private: System::Windows::Forms::ErrorProvider^  errorProvider3;
	private: System::Windows::Forms::RadioButton^  radioButton1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Ustawienia::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider4 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(20, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"P³eæ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(134, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Ustawienia::textBox1_TextChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton2->Location = System::Drawing::Point(177, 24);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(60, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"kobieta";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Ustawienia::radioButton2_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(20, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Waga (kg)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(20, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Wzrost (cm)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(134, 110);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Ustawienia::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(48, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Zapisz";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Ustawienia::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(145, 205);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Anuluj";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Ustawienia::button2_Click);
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
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton1->Location = System::Drawing::Point(94, 24);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(77, 17);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"mê¿czyzna";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Ustawienia::radioButton1_CheckedChanged_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(20, 58);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Rok urodzenia";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(134, 58);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Ustawienia::textBox3_TextChanged);
			// 
			// errorProvider4
			// 
			this->errorProvider4->ContainerControl = this;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(228, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(20, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Têtno MAX";
			this->toolTip1->SetToolTip(this->label6, L"Obliczone têtno maksymalne");
			this->label6->Click += gcnew System::EventHandler(this, &Ustawienia::label6_Click);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(134, 144);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(319, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 16);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Buty";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(308, 58);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 95);
			this->listBox1->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::ForestGreen;
			this->button3->Location = System::Drawing::Point(308, 160);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Dodaj";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Ustawienia::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(380, 160);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(48, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Usuñ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Ustawienia::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(321, 230);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(333, 205);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Usuñ dane";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Ustawienia::button5_Click);
			// 
			// Ustawienia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(467, 259);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(483, 297);
			this->MinimumSize = System::Drawing::Size(483, 297);
			this->Name = L"Ustawienia";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ustawienia";
			this->Activated += gcnew System::EventHandler(this, &Ustawienia::update);
			this->Load += gcnew System::EventHandler(this, &Ustawienia::Ustawienia_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		

		if (radioButton1->Checked == false && radioButton2->Checked == false)
			errorProvider1->SetError(this->radioButton1, "Podaj p³eæ!");
		if (textBox1->Text == "")
			errorProvider2->SetError(this->textBox1, "Podaj wage!");
		if (textBox2->Text == "")
			errorProvider3->SetError(this->textBox2, "Podaj wzrost!");
		if (textBox3->Text == "")
		{
			errorProvider4->SetError(this->textBox3, "Podaj rok urodzenia!");
		}
		
		 if (((radioButton1->Checked == true || radioButton2->Checked == true)) && (textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text!=""))
			{
			textBox4->Text = gcnew String(hrmax().c_str());

			StreamWriter^ plik = gcnew StreamWriter("setup.txt");
			plik->WriteLine(plec);
			plik->WriteLine(textBox3->Text);
			plik->WriteLine(textBox1->Text);
			plik->WriteLine(textBox2->Text);
			plik->WriteLine(textBox4->Text);
			plik->Close();
			Close();
			}
		

	}

			 string hrmax()
			 {
				 DateTime czas = DateTime::Now;
				 double hr;
				 double rok = Convert::ToDouble(textBox3->Text);
				 double waga = Convert::ToDouble(textBox1->Text);
				 double wzrost = Convert::ToDouble(textBox2->Text);
				 double wiek = czas.Year - rok;
				 if (wiek < 0)
					 MessageBox::Show("Wprowadzi³eœ b³êdn¹ datê urodzenia!");
				 if (radioButton1->Checked)
					 hr = 210 - 0.5*wiek - 0.022*waga + 4;
				 else
					 hr =210 - 0.5*wiek - 0.022*waga;
				 int hrm = floor(hr);
				 string max = to_string(hrm);
				 return max;
				 
			 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	errorProvider1->Clear();
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	errorProvider2->Clear();
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	errorProvider3->Clear();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void Ustawienia_Load(System::Object^  sender, System::EventArgs^  e) {
StreamReader ^ wczytuj = gcnew StreamReader("setup.txt");
	String ^ odczyt;
	if (wczytuj)
	{
		odczyt = wczytuj->ReadLine();
		if (odczyt == "mê¿czyzna")
			radioButton1->Checked = true;
		else
			radioButton2->Checked = true;
		odczyt = wczytuj->ReadLine();
		textBox3->Text = odczyt;
		odczyt = wczytuj->ReadLine();
		textBox1->Text = odczyt;
		odczyt = wczytuj->ReadLine();
		textBox2->Text = odczyt;
		odczyt = wczytuj->ReadLine();
		textBox4->Text = odczyt;
	}
	wczytuj->Close();
	
	
}
private: System::Void radioButton1_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
	errorProvider1->Clear();
	if (radioButton1->Checked)
		plec = "mê¿czyzna";
	else
		plec = "kobieta";
	label4->Text = plec;



}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	errorProvider4->Clear();
}
private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void updaye(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void update(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Clear();
	StreamReader ^ odczyt = gcnew StreamReader("buty.txt");
	String ^ dane;

	while (dane = odczyt->ReadLine())
	{

		if (dane != "")
			listBox1->Items->Add(dane);
		
	}
	odczyt->Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Buty^ okno = gcnew Buty;
	okno->ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	int temp = listBox1->SelectedIndex;
	textBox5->Text = gcnew String(to_string(temp).c_str());
	int k = 0;
	if (temp != -1)
	{
		string buty[100];
		
		ifstream odczyt("buty.txt");
		if (odczyt)
		{

			string linia;

			while (getline(odczyt, linia)) 
			{
				if (linia != "")
				{
					if (k != temp)
					{
						buty[k] = linia;
						
					}
					k++;
				}

			}
		}

		else
		{
			MessageBox::Show("B³¹d pliku buty.txt");
		}
		odczyt.close();

		StreamWriter ^ zapis = gcnew StreamWriter("buty.txt");
		for (int w = 0; w <= k; w++)
		{
			zapis->WriteLine(gcnew String(buty[w].c_str()));
		}

		zapis->Close();
		aktual();
	}

}
		void aktual()
		 {
			listBox1->Items->Clear();
			StreamReader ^ odczyt = gcnew StreamReader("buty.txt");
			String ^ dane;


			while (dane = odczyt->ReadLine())
			{
				if (dane != "")
					listBox1->Items->Add(dane);
				
			}
			odczyt->Close();
		}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult odp = MessageBox::Show("Wszystkie dane, ³¹cznie z treningami zostan¹ usuniête! \n Chcesz kontynuowaæ?", "Uwaga!", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button2);
	switch (odp)
	{
	case System::Windows::Forms::DialogResult::Yes:
	{
		StreamWriter ^ zapis_plik = gcnew StreamWriter("plik.txt");
		zapis_plik->Close();
		string buty[100];
		int i = 0;
		ifstream odczyt("buty.txt");
		if (odczyt)
		{

			string linia;

			while (getline(odczyt, linia))
			{

				buty[i] = linia + "d.txt";
				i++;

			}
		}
		odczyt.close();
		StreamWriter ^ zapis_buty = gcnew StreamWriter("buty.txt");
		zapis_buty->Close();
		StreamWriter ^ zapis_setup = gcnew StreamWriter("setup.txt");
		zapis_setup->Close();
		StreamWriter ^ as = gcnew StreamWriter("cele.txt");
		as->Close();
		textBox2 ->Text = "";
		textBox1->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		aktual(); 
		break;
	}
	case System::Windows::Forms::DialogResult::No:
		break;
	}
}
};
}
