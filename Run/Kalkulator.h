#pragma once
#include <cstdlib>
#include <string>
namespace Run {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Kalkulator
	/// </summary>
	public ref class Kalkulator : public System::Windows::Forms::Form
	{
	public:
		Kalkulator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::Button^  button3;

	public:
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Kalkulator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButton1;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Kalkulator::typeid));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton1->Location = System::Drawing::Point(13, 23);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(54, 19);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"czas";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Kalkulator::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioButton2->Location = System::Drawing::Point(80, 23);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(65, 19);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"tempo";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(7, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Dystans";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(66, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(217, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Prognozowane czasy";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(205, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Maraton";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(205, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Pó³maraton";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(205, 132);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 15);
			this->label5->TabIndex = 8;
			this->label5->Text = L"10 km";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(205, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 15);
			this->label6->TabIndex = 9;
			this->label6->Text = L"5 km";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(7, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 15);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Czas";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(66, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(20, 20);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(105, 107);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(20, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Kalkulator::auto_uzupelnienie);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(205, 188);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 15);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Podany dys";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(294, 80);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(70, 20);
			this->textBox4->TabIndex = 14;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(294, 106);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(70, 20);
			this->textBox5->TabIndex = 14;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(294, 131);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(70, 20);
			this->textBox6->TabIndex = 14;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(294, 158);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(70, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(294, 187);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(70, 20);
			this->textBox8->TabIndex = 14;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(11, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Oblicz";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Kalkulator::button1_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(146, 107);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(20, 20);
			this->textBox9->TabIndex = 16;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(105, 185);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Wyczyœæ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Kalkulator::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Goldenrod;
			this->button3->Location = System::Drawing::Point(13, 263);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Zakoñcz";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Kalkulator::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(173, 74);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"[km]";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(85, 113);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 12);
			this->label10->TabIndex = 20;
			this->label10->Text = L"[h]";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(125, 113);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(22, 12);
			this->label11->TabIndex = 21;
			this->label11->Text = L"[m]";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(165, 113);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 12);
			this->label12->TabIndex = 22;
			this->label12->Text = L"[s]";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Kalkulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(376, 307);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(392, 345);
			this->MinimumSize = System::Drawing::Size(392, 345);
			this->Name = L"Kalkulator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kalkulator";
			this->Activated += gcnew System::EventHandler(this, &Kalkulator::radioButton1_CheckedChanged);
			this->Load += gcnew System::EventHandler(this, &Kalkulator::Kalkulator_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton1->Checked)
		{
			label1->Visible = true;
			textBox1->Visible = true;
			label7->Visible = true;
			label7->Text = "Czas";
			textBox2->Visible = true;
			textBox3->Visible = true;
			label8->Text = "Tempo";
			textBox9->Visible = true;
		    label12->Visible= true;
			label10->Text = "[h]";
			label11->Text = "[m]";

			
		}
		else
		{
			label1->Visible = true;
			textBox1->Visible = true;
			label7->Visible = true;
			label7->Text = "Tempo";
			textBox2->Visible = true;
			textBox3->Visible = true;
			label8->Text = "";
			textBox9->Visible = false;
			label12->Visible = false;
			label10->Text = "[m]";
			label11->Text = "[s]";

		}
		wyczysc();
	}
private: System::Void Kalkulator_Load(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox9->Text != "" || (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && radioButton2->Checked))
	{
		errorProvider1->Clear();
		if (radioButton1->Checked)
		{
			textBox4->Text = maraton(textBox2->Text, textBox3->Text, textBox9->Text, textBox1->Text, 42.195);
			textBox5->Text = maraton(textBox2->Text, textBox3->Text, textBox9->Text, textBox1->Text, 21.097);
			textBox6->Text = maraton(textBox2->Text, textBox3->Text, textBox9->Text, textBox1->Text, 10);
			textBox7->Text = maraton(textBox2->Text, textBox3->Text, textBox9->Text, textBox1->Text, 5);
			textBox8->Text = tempo(textBox2->Text, textBox3->Text, textBox9->Text, textBox1->Text);
		}
		else
		{
			textBox4->Text = czas_na_dystansie(tempo_na_czas(textBox2->Text, textBox3->Text), 42.195);
			textBox5->Text = czas_na_dystansie(tempo_na_czas(textBox2->Text, textBox3->Text), 21.097);
			textBox6->Text = czas_na_dystansie(tempo_na_czas(textBox2->Text, textBox3->Text), 10);
			textBox7->Text = czas_na_dystansie(tempo_na_czas(textBox2->Text, textBox3->Text), 5);
			textBox8->Text = czas_na_dystansie(tempo_na_czas(textBox2->Text, textBox3->Text), Convert::ToDouble(textBox1->Text));
			label8->Text = textBox1->Text + " " + "km";
		}
	}
	else
	{
		errorProvider1->SetError(this->button1, "WprowadŸ wymagane dane");
	}
}
		String^ maraton(String^ time_h,String ^ time_m, String^ time_s,String ^ l, double km)
		 {
			 string m_m, h_m, s_m;
			 double h = Convert::ToDouble(time_h);
			 double m = Convert::ToDouble(time_m);
			 double s = Convert::ToDouble(time_s);
			 double czas = (h * 3600 + m * 60 + s);
			 double dystans = Convert::ToDouble(l);
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
			 String^ wynik = gcnew String((h_m + ":" + m_m + ":" + s_m).c_str());
			 return wynik;
		 }
		String ^ tempo(String^ time_h, String ^ time_m, String^ time_s,String ^ l)
		{
			string sekunda;
			double h = Convert::ToDouble(time_h);
			double m = Convert::ToDouble(time_m);
			double s = Convert::ToDouble(time_s);
			float czas = h * 3600 + m * 60 + s;
			int tempo = czas / Convert::ToDouble(l);
			int tempo_min = tempo / 60;
			int tempo_sek = tempo % 60;
			if (tempo_sek < 10)
				sekunda = "0" + to_string(tempo_sek);
			else
				sekunda = to_string(tempo_sek);

			string minuta = to_string(tempo_min);
			String ^ wynik = gcnew String((minuta + ":" + sekunda).c_str());
			return wynik;
		}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	wyczysc();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
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
			 textBox8->Text = "";
			 textBox9->Text = "";

		 }
		 double tempo_na_czas(String ^ min, String ^ sek)
		 {
			 int m = Convert::ToInt32(min);
			 int s = Convert::ToInt32(sek);
			 double czas = (m * 60 + s);
			 return czas;
		 }
		 String^ czas_na_dystansie(double oczas , double dyst)
		 {
			 string h_m, m_m, s_m;
			 double czas_maratonu = oczas*dyst;
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
			 String^ wynik = gcnew String((h_m + ":" + m_m + ":" + s_m).c_str());
			 return wynik;
		 }
private: System::Void auto_uzupelnienie(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (radioButton1->Checked && textBox2->Text == "")
	
			textBox2->Text = "0";
	
}
};
}
