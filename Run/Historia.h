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
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Summary for Historia
	/// </summary>


	
ref class Historia;

class Dane{
public:
	string cecha[10];
	Dane()
	{};
};
	public ref class Historia : public System::Windows::Forms::Form
	{
	public:
		Historia(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^  label1;
	public:
		int ilosc;
	private: System::Windows::Forms::Label^  label2;
	public:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Button^  button2;



			 Dane *treningi = new Dane[10000];
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Historia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::ListBox^  listBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Historia::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(400, 320);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Historia::button1_Click);
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(506, 40);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(125, 238);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Historia::listBox1_SelectedIndexChanged);
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(11, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Data";
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(12, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 28);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Dystans";
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(11, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 28);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Czas";
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(11, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 28);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tempo";
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(11, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 28);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Prêdkoœæ";
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(12, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 28);
			this->label6->TabIndex = 4;
			this->label6->Text = L"HR avg";
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(12, 175);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 28);
			this->label7->TabIndex = 5;
			this->label7->Text = L"HR max";
			this->textBox1->Location = System::Drawing::Point(128, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Historia::textBox1_TextChanged);
			this->textBox2->Location = System::Drawing::Point(128, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->Location = System::Drawing::Point(128, 67);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(93, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Historia::textBox3_TextChanged);
			this->textBox4->Location = System::Drawing::Point(128, 94);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(93, 20);
			this->textBox4->TabIndex = 6;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->Location = System::Drawing::Point(128, 121);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(93, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->Location = System::Drawing::Point(128, 151);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(93, 20);
			this->textBox6->TabIndex = 6;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->Location = System::Drawing::Point(128, 181);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(93, 20);
			this->textBox7->TabIndex = 6;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(14, 205);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 28);
			this->label8->TabIndex = 7;
			this->label8->Text = L"%HR";
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(11, 237);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 28);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Calorie";
			this->label9->Click += gcnew System::EventHandler(this, &Historia::label9_Click);
			this->textBox9->Location = System::Drawing::Point(128, 243);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(93, 20);
			this->textBox9->TabIndex = 10;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->Location = System::Drawing::Point(128, 212);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(93, 20);
			this->textBox10->TabIndex = 11;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(262, 12);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(180, 28);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Prognozowane czasy:";
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(279, 49);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 28);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Maraton";
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(252, 77);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(107, 28);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Pó³maraton";
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(292, 105);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 28);
			this->label13->TabIndex = 14;
			this->label13->Text = L"10 km";
			this->textBox17->Location = System::Drawing::Point(375, 55);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(67, 20);
			this->textBox17->TabIndex = 15;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox18->Location = System::Drawing::Point(375, 83);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(67, 20);
			this->textBox18->TabIndex = 16;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox19->Location = System::Drawing::Point(375, 109);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(67, 20);
			this->textBox19->TabIndex = 16;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(543, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Usuñ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Historia::button2_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(656, 409);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(672, 447);
			this->MinimumSize = System::Drawing::Size(672, 447);
			this->Name = L"Historia";
			this->Text = L"Moje Treningi";
			this->Load += gcnew System::EventHandler(this, &Historia::Historia_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Historia_Load(System::Object^  sender, System::EventArgs^  e) {
		czyt();
	

	}
			 int il()
			 {
				 StreamReader ^ wczytuj = gcnew StreamReader("plik.txt");
				 String ^ zawartosc;
				 ilosc = 0;
				 while (zawartosc = wczytuj->ReadLine())
					 ilosc++;
				 wczytuj->Close();
				 return ilosc;
			 }
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//	int indeks = Convert::ToInt32(listBox1->IndexFromPoint);
		//label1->Text = gcnew String(treningi[indeks].cecha[2].c_str());
		wyczysc();
		int temp = listBox1->SelectedIndex;
		
		if (temp <= ilosc/9-1)
		{
			textBox1->Text = gcnew String(treningi[temp].cecha[1].c_str());
			textBox2->Text = gcnew String(treningi[temp].cecha[2].c_str())+ "  " +"km";
			textBox3->Text = gcnew String(treningi[temp].cecha[3].c_str()) + ":" + gcnew String(treningi[temp].cecha[4].c_str()) + ":" + gcnew String(treningi[temp].cecha[5].c_str());
			textBox4->Text = gcnew String(tempo(treningi[temp]).c_str()) +"  " + "min/km";
			textBox5->Text = predkosc(treningi[temp])+ "  " + "km/h";
			textBox17->Text = gcnew String(maraton(treningi[temp],42.195).c_str());
			textBox18->Text = gcnew String(maraton(treningi[temp],21.097).c_str());
			textBox19->Text = gcnew String(maraton(treningi[temp], 10).c_str());
			if (treningi[temp].cecha[7] != "" && treningi[temp].cecha[8] != "" && treningi[temp].cecha[9] !="")
			{
				textBox6->Visible = true;
				textBox7->Visible = true;
				textBox10->Visible = true;
				textBox9->Visible = true;
				label6->Visible = true;
				label7->Visible = true;
				label8->Visible = true;
				label9->Visible = true;
				textBox6->Text = gcnew String(treningi[temp].cecha[7].c_str());
				textBox7->Text = gcnew String(treningi[temp].cecha[8].c_str());
				textBox9->Text = gcnew String(treningi[temp].cecha[9].c_str());
				textBox10->Text = gcnew String(tetno(temp).c_str());
			

			}
			else
			{
				textBox6->Visible=false;
				textBox7->Visible = false;
				textBox10->Visible = false;
				textBox9->Visible = false;
				label6->Visible = false;
				label7->Visible = false;
				label8->Visible = false;
				label9->Visible = false;



			}
		
		}
		
	}
			 string tempo(Dane obiekt )
			 {
				 string sekunda;
				 double h = Convert::ToDouble(gcnew String(obiekt.cecha[3].c_str()));
				 double m = Convert::ToDouble(gcnew String(obiekt.cecha[4].c_str()));
				double s =Convert::ToDouble(gcnew String(obiekt.cecha[5].c_str()));
				float czas = h * 3600 + m * 60 + s;
				int tempo = czas / Convert::ToDouble(gcnew String(obiekt.cecha[2].c_str()));
				int tempo_min = tempo / 60;
				int tempo_sek = tempo % 60;
				if (tempo_sek < 10)
					 sekunda = "0" + to_string(tempo_sek);
				else
					 sekunda = to_string(tempo_sek);

				string minuta = to_string(tempo_min);
			
				return minuta + ":" + sekunda ;
			 }
			 String^ predkosc(Dane obiekt)
			 {
				 double h = Convert::ToDouble(gcnew String(obiekt.cecha[3].c_str()));
				 double m = Convert::ToDouble(gcnew String(obiekt.cecha[4].c_str()));
				 double s = Convert::ToDouble(gcnew String(obiekt.cecha[5].c_str()));
				 double czas = (h * 3600 + m * 60 + s)/3600;
				 double dystans = Convert::ToDouble(gcnew String(obiekt.cecha[2].c_str()));
				 double predkosc = Math::Round(dystans / czas,2);
				 return predkosc.ToString();


			 }
			 string tetno(int i)
			 {
				 string s;
				 ifstream odczyt("setup.txt");
				 if (odczyt)
				 {
					 string linia;
					 for (int i = 1; i <= 4; i++)
						 getline(odczyt, linia);
					 getline(odczyt, linia);
					 s = linia;



					 odczyt.close();
					 if (s != "")
					 {
						 String ^ d = gcnew String(s.c_str());
						 double  t = Convert::ToDouble(d);
						 String ^ e = gcnew String(treningi[i].cecha[7].c_str());
						 double q = Convert::ToDouble(e);
						 double z = (q / t * 100);
						 int w = floor(z);
						 return to_string(w);
					 }
				 }
				 
			 }
			 void wyczysc()
			 {
				 
				 textBox1->Text = "";
				 textBox2->Text = "";
				 textBox3->Text = "";
				 textBox4->Text = "";
				 textBox5->Text = "";
				 textBox6->Text = "";
				 textBox7->Text = "";
				 textBox10->Text ="";
				 textBox9->Text = "";
				 textBox17->Text = "";
				 textBox18->Text = "";
				 textBox19->Text = "";

				 
				
			 }
			 
			 string maraton(Dane obiekt,double km)
			 {
				 string m_m, h_m, s_m;
				 double h = Convert::ToDouble(gcnew String(obiekt.cecha[3].c_str()));
				 double m = Convert::ToDouble(gcnew String(obiekt.cecha[4].c_str()));
				 double s = Convert::ToDouble(gcnew String(obiekt.cecha[5].c_str()));
				 double czas = (h * 3600 + m * 60 + s) ;
				 double dystans = Convert::ToDouble(gcnew String(obiekt.cecha[2].c_str()));
				 double czas_maratonu = (km / dystans)*czas;
				// int czas_maratonu_int = czas_maratonu;
				 int h_maratonu = czas_maratonu / 3600;
				 int m_maratonu = (czas_maratonu - h_maratonu * 3600) / 60;
				 int s_maratonu = czas_maratonu - h_maratonu * 3600 - m_maratonu * 60;
				  h_m = to_string(h_maratonu);
				 if (m_maratonu >= 10)
					  m_m = to_string(m_maratonu);
				else
					  m_m = "0" + to_string(m_maratonu);
				 if (s_maratonu >= 10)
					  s_m = to_string(s_maratonu);
				 else
					  s_m = "0" + to_string(s_maratonu);
				 return  h_m + ":" + m_m + ":" + s_m;
			 }

			 string polmaraton(Dane obiekt)
			 {
				 string m_m, h_m, s_m;
				 double h = Convert::ToDouble(gcnew String(obiekt.cecha[3].c_str()));
				 double m = Convert::ToDouble(gcnew String(obiekt.cecha[4].c_str()));
				 double s = Convert::ToDouble(gcnew String(obiekt.cecha[5].c_str()));
				 double czas = (h * 3600 + m * 60 + s);
				 double dystans = Convert::ToDouble(gcnew String(obiekt.cecha[2].c_str()));
				 double czas_maratonu = (21.097 / dystans)*czas;
				 // int czas_maratonu_int = czas_maratonu;
				 int h_maratonu = czas_maratonu / 3600;
				 int m_maratonu = (czas_maratonu - h_maratonu * 3600) / 60;
				 int s_maratonu = czas_maratonu - h_maratonu * 3600 - m_maratonu * 60;
				 h_m = to_string(h_maratonu);
				 if (m_maratonu >= 10)
					 m_m = to_string(m_maratonu);
				 else
					 m_m = "0" + to_string(m_maratonu);
				 if (s_maratonu >= 10)
					 s_m = to_string(s_maratonu);
				 else
					 s_m = "0" + to_string(s_maratonu);
				 return  h_m + ":" + m_m + ":" + s_m;
			 }
/*private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
	progressBar1->Text = "abc";
}*/
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (listBox1->SelectedIndex != -1)
		{
			int a = listBox1->SelectedIndex;
			StreamWriter ^ zapisz = gcnew StreamWriter("plik.txt");
			for (int i = 0; i <= ilosc / 10 - 1; i++)
			{
				if (i != a)
				{
					for (int j = 0; j <= 9; j++)
						zapisz->WriteLine(gcnew String(treningi[i].cecha[j].c_str()));
				}
			}
			zapisz->Close();
			czyt();
		
		//	ilosc--;
		//	usun();


		}
	}
	void usun()
	{
		listBox1->Items->Clear();
		for (int i = 0; i <= ilosc / 10 - 1; i++)
			listBox1->Items->Add(gcnew String(treningi[i].cecha[1].c_str()) + "  " + gcnew String(treningi[i].cecha[0].c_str()));
	}

	void czyt()
	{

		ifstream odczyt("plik.txt");
		if (odczyt)
		{
			string linia;
			for (int i = 0; i <= il() / 10 - 1; i++)
			{

				for (int j = 0; j <= 9; j++)
				{

					if (getline(odczyt, linia))
						treningi[i].cecha[j] = linia;


					//	String^ nazwa = gcnew String(linia.c_str());
					//	listBox1->Items->Add(nazwa);



				}
			}
			odczyt.close();
		} 
		else
		{
			MessageBox::Show("B³¹d odczytu pliku!");
			listBox1->Enabled = false;
		}
		listBox1->Items->Clear();
		for (int i = 0; i <= ilosc / 10 - 1; i++)
			listBox1->Items->Add(gcnew String(treningi[i].cecha[1].c_str()) + "  " + gcnew String(treningi[i].cecha[0].c_str()));
	}
};
}
