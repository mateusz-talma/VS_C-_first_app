#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <math.h>
namespace Run {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	//int ilosc = 0;  
	/// <summary>
	/// Summary for Statystyki 
	/// </summary>
	ref class Statystyki;

	class Trening
	{
	public:
		string dane[10];
		Trening()
		{};
	};
	

	public ref class Statystyki : public System::Windows::Forms::Form
	{
	public:
		Statystyki(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		int ilosc = 0;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::ErrorProvider^  errorProvider2;
	public:
		Trening *bieg = new Trening[10000];
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Statystyki()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Statystyki::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			this->SuspendLayout();
			this->comboBox1->BackColor = System::Drawing::Color::Wheat;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(389, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Statystyki::comboBox1_SelectedIndexChanged);
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(345, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Buty";
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(331, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Dystans";
			this->textBox1->Location = System::Drawing::Point(389, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 3;
			this->comboBox2->BackColor = System::Drawing::Color::Wheat;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Ca≥y rok", L"StyczeÒ", L"Luty", L"Marzec", L"KwiecieÒ",
					L"Maj", L"Czerwiec", L"Lipiec", L"SierpieÒ", L"WrzesieÒ", L"Paüdziernik", L"Listopad", L"GrudzieÒ"
			});
			this->comboBox2->Location = System::Drawing::Point(29, 51);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 4;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Statystyki::comboBox2_SelectedIndexChanged);
			this->comboBox2->Click += gcnew System::EventHandler(this, &Statystyki::czysc);
			this->comboBox3->BackColor = System::Drawing::Color::Wheat;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Wszystko", L"2015" });
			this->comboBox3->Location = System::Drawing::Point(178, 51);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 5;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Statystyki::comboBox3_SelectedIndexChanged);
			this->comboBox3->Click += gcnew System::EventHandler(this, &Statystyki::czysc2);
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(43, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Miesiπc";
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(208, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Rok";
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(29, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"IloúÊ treningÛw";
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(29, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"£πczny dystans";
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(29, 158);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Spalone calorie";
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(29, 184);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"årednia prÍdkoúÊ";
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(29, 210);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"årednie tempo";
			this->textBox2->Location = System::Drawing::Point(147, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 13;
			this->textBox3->Location = System::Drawing::Point(147, 125);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 13;
			this->textBox4->Location = System::Drawing::Point(147, 155);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 13;
			this->textBox5->Location = System::Drawing::Point(147, 181);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 13;
			this->textBox6->Location = System::Drawing::Point(147, 207);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 13;
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(32, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Pokaø";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Statystyki::button1_Click);
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(308, 275);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Statystyki::button2_Click);
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(29, 237);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"årednie tÍtno";
			this->textBox7->Location = System::Drawing::Point(147, 234);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 17;
			this->errorProvider1->ContainerControl = this;
			this->errorProvider2->ContainerControl = this;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(522, 324);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(538, 362);
			this->MinimumSize = System::Drawing::Size(538, 362);
			this->Name = L"Statystyki";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Statystyki";
			this->Activated += gcnew System::EventHandler(this, &Statystyki::Statystyki_Activated);
			this->Load += gcnew System::EventHandler(this, &Statystyki::Statystyki_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Statystyki_Load(System::Object^  sender, System::EventArgs^  e) {
		liczba();
		StreamReader ^ odczyt1 = gcnew StreamReader("buty.txt");
		String ^ buty;
		while (buty = odczyt1->ReadLine())
			{
			if (buty != "")
				comboBox1->Items->Add(buty); 
			}
		odczyt1->Close();

		ifstream odczyt("plik.txt");
		if (odczyt)
		{
			string linia;
			for (int i = 0; i <= ilosc / 10 - 1; i++)
			{

				for (int j = 0; j <= 9; j++)
				{

					if (getline(odczyt, linia))
						bieg[i].dane[j] = linia;
				}
			}
			odczyt.close();
		}
		else
		
			MessageBox::Show("B≥πd odczytu pliku!");
		DateTime czas = DateTime::Now;
		int lata = czas.Year - 2015;
		for (int i = 1; i <= lata; i++)
		{
			comboBox3->Items->Add(2015 + i);
		}
		comboBox2->SelectedIndex = 0;
		comboBox3->SelectedIndex = 0;

		/*textBox4->Text = gcnew String(to_string(ilosc).c_str());
		DateTime c = Convert::ToDateTime(gcnew String(bieg[0].dane[1].c_str()));
		textBox3->Text = Convert::ToString(c.Month);
		textBox2->Text = Convert::ToString(c.Year);
		textBox1->Text = Convert::ToString(comboBox2->SelectedIndex);*/
		
	}
		void liczba()
		{
			StreamReader ^ wczytuj = gcnew StreamReader("plik.txt");
			String ^ zawartosc;
			ilosc = 0;
			while (zawartosc = wczytuj->ReadLine())
				ilosc++;
			wczytuj->Close();
			 
		}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		StreamReader ^ read = gcnew StreamReader(comboBox1->Text + "d.txt");
			String^ przebieg = read->ReadLine();
			textBox1->Text = przebieg+ " " +"km";
			read->Close();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	wyswietl();
	
}
		 void wyswietl()
		 {
			 if (comboBox2->SelectedIndex != -1 && comboBox3->SelectedIndex != -1)
			 {
				 int rok = 0;
				 int miesiac = comboBox2->SelectedIndex;
				 if (comboBox3->SelectedIndex!=0)
				  rok = Convert::ToInt32(comboBox3->Text);
				 double dystans = 0;
				 int liczba_treningow = 0;
				 int calorie = 0;
				 int h = 0;
				 int m = 0;
				 int s = 0;
				 int hr=0;
				 int t = 0;
				 int hr_avg = 0;
				 for (int i = 0; i <= (ilosc / 10) - 1; i++)
				 {
					 if ((miesiac == Convert::ToInt32(Convert::ToDateTime(gcnew String(bieg[i].dane[1].c_str())).Month) && rok == Convert::ToInt32(Convert::ToDateTime(gcnew String(bieg[i].dane[1].c_str())).Year)) || miesiac == 0 || rok==0)
					 {
						 liczba_treningow++;
						 dystans += Convert::ToDouble(gcnew String(bieg[i].dane[2].c_str()));
						 if (bieg[i].dane[9] != "")

							 calorie += Convert::ToInt32(gcnew String(bieg[i].dane[9].c_str()));
						 if (bieg[i].dane[7] != "")
						 {
							 hr += Convert::ToInt32(gcnew String(bieg[i].dane[7].c_str()));
							 t++;
						 }
						 h += Convert::ToInt32(gcnew String(bieg[i].dane[3].c_str()));
						 m += Convert::ToInt32(gcnew String(bieg[i].dane[4].c_str()));
						 s += Convert::ToInt32(gcnew String(bieg[i].dane[5].c_str()));

					 }
				
				 }

				 textBox2->Text = gcnew String(to_string(liczba_treningow).c_str());
				 textBox3->Text = Math::Round(dystans, 1).ToString()+ " km";
				 textBox4->Text = gcnew String(to_string(calorie).c_str());
				 int czas = h * 3600 + m * 60 + s;
				 textBox5->Text = predkosc(dystans, czas);
				 textBox6->Text = tmp(dystans, czas);
				 if (t!=0)
				  hr_avg = hr / t;
				 textBox7->Text = gcnew String(to_string(hr_avg).c_str());
			 } 
			 else
			 {
				 if (comboBox2->Text == "")
					 errorProvider1->SetError(this->comboBox2, "Wprowadü miesiπc");

				 if (comboBox3->Text == "");
				//	 errorProvider2->SetError(this->comboBox3, "Wprowadü rok");
			 }

		 }
		 String^ predkosc(double d, double t)
		 {
			 if (d != 0)
			 {
				 double h = t / 3600;
				 double v = d / h;
				 return Math::Round(v, 2).ToString() + " km/h";
			 }
			 else
				 return "0";
		 }
		 String^ tmp(double dys, double tim)
		 {
			 if (dys != 0) 
			 {
				 string sekunda;
				 int tempo = tim / dys;
				 int tempo_min = tempo / 60;
				 int tempo_sek = tempo % 60;
				 if (tempo_sek < 10)
					 sekunda = "0" + to_string(tempo_sek);
				 else
					 sekunda = to_string(tempo_sek);
				 String^ minuta = gcnew String(to_string(tempo_min).c_str());
				 String^ sek = gcnew String(sekunda.c_str());
				 return minuta + ":" + sek + " min/km";
			 }
			 else
				 return "0:00";
			 
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void czysc(System::Object^  sender, System::EventArgs^  e) {
	errorProvider1->Clear();
}
private: System::Void czysc2(System::Object^  sender, System::EventArgs^  e) {
	errorProvider2->Clear();
}


private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox3->SelectedIndex == 0)
	{
		comboBox2->SelectedIndex = 0;
		comboBox2->Enabled = false;
		
	}
	else
		comboBox2->Enabled = true;
	wyswietl();
}
private: System::Void Statystyki_Activated(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox3->SelectedIndex == 0)
	{
		comboBox2->SelectedIndex = 0;
		comboBox2->Enabled = false;
	}
	else
		comboBox2->Enabled = true;
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	wyswietl();
}
};
}
