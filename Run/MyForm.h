#pragma once
#include"Dodanie.h"
#include"Buty.h"
#include"Ustawienia.h"
#include"Historia.h"
#include"Cele.h"
#include"Statystyki.h"
#include"Kalkulator.h"
#include <time.h>
// ******
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>


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
	/// Summary for MyForm
	/// </summary>
	///*
	
	//*/
	 ref class MyForm;
	//    void aktualizacja();

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;





	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton7;



























	public:



	public:
		int liczba;
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
		
			if (components)
					delete components;
			
		
			
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::SplitContainer^  splitContainer1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(12, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Wprowadz trening";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->toolStrip1->BackColor = System::Drawing::Color::Transparent;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripButton1, this->toolStripButton3,
					this->toolStripButton5, this->toolStripButton6, this->toolStripButton7, this->toolStripButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(574, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"Nowy trening";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"Historia treningów";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(23, 22);
			this->toolStripButton5->Text = L"Cele treningowe";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"Statystyki";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(23, 22);
			this->toolStripButton7->Text = L"Kalkulator";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"Ustawienia";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(13, 334);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Zamknij";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Location = System::Drawing::Point(13, 104);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Historia treningów";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->splitContainer1->Location = System::Drawing::Point(658, 39);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::splitContainer1_Panel1_Paint);
			this->splitContainer1->Size = System::Drawing::Size(150, 100);
			this->splitContainer1->TabIndex = 4;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(297, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 6;
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->Location = System::Drawing::Point(12, 220);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Ustawienia";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(446, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 23);
			this->label4->TabIndex = 13;
			this->label4->Text = L"label4";
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(357, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 23);
			this->label2->TabIndex = 14;
			this->label2->Text = L"label2";
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(357, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 23);
			this->label5->TabIndex = 15;
			this->label5->Text = L"label5";
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(446, 72);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 23);
			this->label8->TabIndex = 16;
			this->label8->Text = L"label8";
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Location = System::Drawing::Point(12, 133);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 23);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Cele treningowe";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->Location = System::Drawing::Point(12, 162);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(109, 23);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Statystyki";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(13, 191);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(109, 23);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Kalkulator";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(12, 48);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 16);
			this->label9->TabIndex = 20;
			this->label9->Text = L"label9";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(574, 410);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->splitContainer1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(590, 448);
			this->MinimumSize = System::Drawing::Size(590, 448);
			this->Name = L"MyForm";
			this->Text = L"Dzienniczek Biegowy";
			this->Activated += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		czytaj();
		label2->Text = "Treningi:";
		label5->Text = "Dystans:";

		aktualizacja();
	
		
		
	}
	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Dodanie^ nowe = gcnew Dodanie;
		nowe->ShowDialog();
	}
	private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		Dodanie^ nowe = gcnew Dodanie;
		nowe->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		zamknij();
		}
	
	public: System::Void zamknij()
	{
		System::Windows::Forms::DialogResult odp = MessageBox::Show("Chcesz zamkn¹æ aplikacje", "PYTANIE", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button2);
		switch (odp)
		{
		case System::Windows::Forms::DialogResult::Yes:
			Close();
		case System::Windows::Forms::DialogResult::No:
			break;
		}
	}
	private: System::Void przycisk2_Click(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Historia ^ nowe = gcnew Historia();
	//nowe->ilosc = liczba;
	nowe->ShowDialog();

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Ustawienia^ nowe_okno1 = gcnew Ustawienia();
	nowe_okno1->ShowDialog();
	
}
		 
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		
		
	
	}
			 void czytaj()
			 {
				 StreamReader ^ wczytuj = gcnew StreamReader("plik.txt");
				 String ^ zawartosc;
					 liczba = 0;
					 while (zawartosc = wczytuj->ReadLine())
						 liczba++;
					 wczytuj->Close();
				 
				// listBox1->Items->Add(liczba / 9);
			 }
			 String^ odczytaj()
			 {
				 double a = 0;
				 ifstream odczyt("plik.txt");
				 if (odczyt)
				 {
					 string linia;

					 for (int i = 0; i <= liczba / 10 - 1; i++)
					 {
						 for (int j = 0; j <= 9; j++)
						 {
							 getline(odczyt, linia);
							 if (j == 2)
								 a += Convert::ToDouble(gcnew String(linia.c_str()));

						 }
					 }
					 odczyt.close();
				 }
				 else
					 a = 0;
				 a = Math::Round(a, 1);    
				 return a.ToString();
			 }


		 void aktualizacja()
		 {
			 DateTime czas = DateTime::Now;
			 label4->Text = gcnew String(to_string(liczba / 10).c_str());
			 label8->Text = odczytaj()+ " " + "km";
			 String^ dzien = Convert::ToString(czas.DayOfWeek);
			 label9->Text = "Dziœ jest "+dzien_tygodnia(dzien) +" " + Convert::ToString(czas.Day) + "." + Convert::ToString(czas.Month) + "."+ Convert::ToString(czas.Year);
			 
			 

			  
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Cele^ okno2 = gcnew Cele;
	okno2->ShowDialog();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Statystyki ^ nowe = gcnew Statystyki;
	nowe->ShowDialog();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Kalkulator ^ okno3 = gcnew Kalkulator;
	okno3->ShowDialog();
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 String^ dzien_tygodnia(String^ t)
		 {
			 string d[7] = { "poniedzia³ek", "wtorek", "œroda", "czwartek", "pi¹tek", "sobota", "niedziela" };
			 if (t == "Monday")
				 return "poniedzia³ek";
			 if (t == "Tuesday")
				 return "wtorek";
			 if (t == "Wednesday")
				 return "œroda";
			 if (t == "Thursday")
				 return "czwartek";
			 if (t == "Friday")
				 return "pi¹tek";
			 if (t == "Saturday")
				 return "sobota";
			 if (t == "Sunday")
				 return "niedziela";
		 }


};


}
