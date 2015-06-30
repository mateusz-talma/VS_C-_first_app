#pragma once
#include "Nowy_cel.h"
#include <string>
#include <fstream>
#include <stdlib.h>
#include <time.h>

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
	/// Summary for Cele
	/// </summary>
	ref class Cele;
	class Treningi
	{
	public:
		string biegi[10];
		Treningi()
		{};
	};
	class Cel
	{
	public:
		string dane[4];
		Cel()
		{};
	};
	public ref class Cele : public System::Windows::Forms::Form
	{
	public:
		int ilosc = 0;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox8;
	public:
		int ilosc_treningow = 0;
		Cele(void)
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
		~Cele()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox6;
			 Cel *a = new Cel[100];
			 Treningi *bieg = new Treningi[10000];
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Cele::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(492, 70);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 160);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Cele::listBox1_SelectedIndexChanged);
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::AliceBlue;
			this->label1->Location = System::Drawing::Point(489, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cele treningowe";
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(492, 247);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Dodaj";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Cele::button1_Click);
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(561, 247);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Usuñ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Cele::button2_Click);
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::AliceBlue;
			this->label2->Location = System::Drawing::Point(34, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Rodzaj celu";
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::AliceBlue;
			this->label3->Location = System::Drawing::Point(34, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Od";
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::AliceBlue;
			this->label4->Location = System::Drawing::Point(34, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Do";
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(34, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 6;
			this->textBox1->Location = System::Drawing::Point(131, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			this->textBox2->Location = System::Drawing::Point(131, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			this->textBox3->Location = System::Drawing::Point(131, 136);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			this->textBox4->Location = System::Drawing::Point(131, 162);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::AliceBlue;
			this->label6->Location = System::Drawing::Point(117, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Cel";
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::AliceBlue;
			this->label7->Location = System::Drawing::Point(354, 44);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Aktualny stan";
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::Color::AliceBlue;
			this->label9->Location = System::Drawing::Point(248, 73);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"label9";
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(375, 70);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(75, 20);
			this->textBox6->TabIndex = 11;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Location = System::Drawing::Point(306, 247);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Wyczyœæ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Cele::button3_Click);
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(326, 143);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 18);
			this->label10->TabIndex = 13;
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(64, 311);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 14;
			this->button4->Text = L"OK";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Cele::button4_Click);
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->ForeColor = System::Drawing::Color::AliceBlue;
			this->label11->Location = System::Drawing::Point(37, 199);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Pozosta³o dni";
			this->textBox7->Location = System::Drawing::Point(131, 199);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 16;
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->ForeColor = System::Drawing::Color::AliceBlue;
			this->label12->Location = System::Drawing::Point(248, 107);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"label12";
			this->textBox8->Location = System::Drawing::Point(375, 104);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(75, 20);
			this->textBox8->TabIndex = 18;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(641, 376);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(657, 414);
			this->MinimumSize = System::Drawing::Size(657, 414);
			this->Name = L"Cele";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cele Treningowe";
			this->Activated += gcnew System::EventHandler(this, &Cele::Cele_Activated);
			this->Load += gcnew System::EventHandler(this, &Cele::Cele_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cele_Load(System::Object^  sender, System::EventArgs^  e) {
			liczba(); 
			trening();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Nowy_cel^ nowe = gcnew Nowy_cel;
		nowe->ShowDialog();
	}
	private: System::Void Cele_Activated(System::Object^  sender, System::EventArgs^  e) {
		liczba();
	//	trening();
		listBox1->Items->Clear();
		czytaj();
		wypisz();
	//	textBox6->Text = Convert::ToString(ilosc_treningow);
	}
			 	 void czytaj()
				  {

				  ifstream odczyt("cele.txt");
				  if (odczyt)
				  {
				  string linia;
				  for (int i = 0; i <= ilosc-1 ; i++)
				  {

				  for (int j = 0; j <= 3; j++)
				  {

				  if (getline(odczyt, linia))
				  a[i].dane[j] = linia;


				  }
				  }

				  }
				  else
				  MessageBox::Show("B³¹d odczytu pliku cele.txt");
				  odczyt.close();
				 
				  ifstream read("plik.txt");
				  if (read)
				  {
					  string line;
					  for (int i = 0; i <= ilosc_treningow - 1; i++)
					  {
						  for (int j = 0; j <= 9; j++)
						  {

							  if (getline(read, line))
								  bieg[i].biegi[j] = line;
						  }

					  }

				  }
				  else
					  MessageBox::Show("B³¹d odczytu pliku plik.txt");
				  read.close();
			  }
			  void liczba()
			  {
			  StreamReader ^ odczyt = gcnew StreamReader("cele.txt");
			  ilosc = 0;
			  String^ linia;
			  while (linia = odczyt->ReadLine())
				  ilosc++;
			  odczyt->Close();
			  ilosc = ilosc / 4;

			  }
			  
			  void wypisz()
			  {
				  zeruj();
			  for (int p = 0; p <= ilosc-1 ; p++)
			  {
			  listBox1->Items->Add(gcnew String(a[p].dane[0].c_str()) + " - " + gcnew String(a[p].dane[1].c_str()));

			  }
			  }
			  void trening()
			  {
				  StreamReader ^ czyt = gcnew StreamReader("plik.txt");
				  ilosc_treningow = 0;
				  String^ linia;
				  while (linia = czyt->ReadLine())
					  ilosc++;
				  czyt->Close();
				  ilosc_treningow = ilosc / 10;
			  }
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int t = listBox1->SelectedIndex;
		if (listBox1->SelectedIndex != -1)
		{
			label9->Text = gcnew String(a[t].dane[0].c_str());
			label5->Text = gcnew String(a[t].dane[0].c_str());
			textBox1->Text = gcnew String(a[t].dane[0].c_str());
			textBox2->Text = gcnew String(a[t].dane[1].c_str());
			textBox3->Text = gcnew String(a[t].dane[2].c_str());
			textBox4->Text = gcnew String(a[t].dane[3].c_str());

			if (a[t].dane[0] == "Ilosc treningow")
				szukaj_treningow(t);
			if (a[t].dane[0] == "Dystans")
				szukaj_dystans(t);
			sprawdz_wynik();
		}
		if (listBox1->SelectedIndex ==-1)
			zeruj();

		
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	int x = listBox1->SelectedIndex;
	StreamWriter ^ zap = gcnew StreamWriter("cele.txt");
	for (int i = 0; i <= ilosc - 1; i++)
	{
		if (i != x)
		{
			for (int j = 0; j <= 3; j++)
				zap->WriteLine(gcnew String(a[i].dane[j].c_str()));
		}
	}
	zap->Close();
	ilosc--;
	listBox1->Items->Clear();
	czytaj();
	wypisz();
	
}

		 void szukaj_treningow(int index)
		 {
			 int dzien_min = Convert::ToInt32(Convert::ToDateTime(gcnew String(a[index].dane[2].c_str())).DayOfYear);
			 int dzien_max = Convert::ToInt32(Convert::ToDateTime(gcnew String(a[index].dane[3].c_str())).DayOfYear);
			 int l = 0;
			 for (int i = 0; i <= ilosc_treningow - 1; i++)
			 {
				 if ((dzien_min <= Convert::ToInt32(Convert::ToDateTime(gcnew String(bieg[i].biegi[1].c_str())).DayOfYear) && dzien_max >= Convert::ToInt32(Convert::ToDateTime(gcnew String(bieg[i].biegi[1].c_str())).DayOfYear)))
				 {
					 l++;
				 }
			 }
			 textBox6->Text = Convert::ToString(l);
			 label12->Text = "Pozosta³o treningów";

		 }

		 void szukaj_dystans(int index)
		 {
			 int dzien_min = Convert::ToInt32(Convert::ToDateTime(gcnew String(a[index].dane[2].c_str())).DayOfYear);
			 int dzien_max = Convert::ToInt32(Convert::ToDateTime(gcnew String(a[index].dane[3].c_str())).DayOfYear);
			 double dystans = 0;

			 for (int i = 0; i <= ilosc_treningow - 1; i++)
			 {
				 if ((dzien_min <= Convert::ToInt32(Convert::ToDateTime(gcnew String(bieg[i].biegi[1].c_str())).DayOfYear) && dzien_max >= Convert::ToInt32(Convert::ToDateTime(gcnew String(bieg[i].biegi[1].c_str())).DayOfYear)))
				 {
					 dystans += Convert::ToDouble(gcnew String(bieg[i].biegi[2].c_str()));
				 }
			 }
			 textBox6->Text = Convert::ToString(dystans);
			 label12->Text = "Pozosta³y dystans";
		 }

		 void zeruj()
		 {
			 textBox1->Text = "";
			 textBox2->Text = "";
			 textBox3->Text = "";
			 textBox4->Text = "";
			 label9->Text = "";
			 textBox6->Text = "";
			 textBox7->Text = "";
			 label10->Text = "";
			 label12->Text = "";
			 textBox8->Text = "";
			
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	zeruj();
}
		 void sprawdz_wynik()
		 {
			 DateTime czas = DateTime::Now;
			 if (czas.DayOfYear > Convert::ToDateTime(textBox4->Text).DayOfYear)
			 {
				 if ((Convert::ToInt32(textBox6->Text)) >= (Convert::ToInt32(textBox2->Text)))
				 {
					 label10->Text = "Cel osi¹gniêty!";
					 label10->ForeColor = Color::Lime;
					 textBox7->Text = "Koniec!";
					 textBox8->Text = "0";
				 }
				 else
				 {
					 label10->Text = "Cel nieosi¹gniêty!";
					 label10->ForeColor = Color::Red;
					 textBox7->Text = "Koniec!";

				 }
			 }
			 if (czas.DayOfYear <= Convert::ToDateTime(textBox4->Text).DayOfYear)
			 {
				 if ((Convert::ToDouble(textBox6->Text)) < (Convert::ToDouble(textBox2->Text)))
				 {
					 label10->Text = "W trakcie...";
					 label10->ForeColor = Color::Yellow;

					 int koniec = Convert::ToInt32(Convert::ToDateTime(textBox4->Text).DayOfYear);
					 textBox7->Text = gcnew String(to_string(koniec - Convert::ToInt32(czas.DayOfYear)).c_str());
					 double a = Math::Round((Convert::ToDouble(textBox2->Text) - Convert::ToDouble(textBox6->Text)),3);
					 textBox8->Text = Convert::ToString(a);
				 }
				 if  ((Convert::ToDouble(textBox6->Text)) >= (Convert::ToDouble(textBox2->Text)))
				 {
					 label10->Text = "Cel osi¹gniêty!";
					 label10->ForeColor = Color::Lime;

					 textBox7->Text = "Koniec!";
					 textBox8->Text = "0";


				 }
			 }
			 
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};


}