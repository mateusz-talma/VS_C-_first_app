#pragma once
#include "Buty.h"
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
	/// Summary for Dodanie
	/// </summary>
	 


	public ref class Dodanie : public System::Windows::Forms::Form
		
	{

		String^ buty;
	public:
		Dodanie(void)
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
		~Dodanie()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	public: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox8;

	private: System::Windows::Forms::ErrorProvider^  errorProvider2;
	private: System::Windows::Forms::ErrorProvider^  errorProvider3;
	private: System::Windows::Forms::ErrorProvider^  errorProvider4;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::ComponentModel::IContainer^  components;




	public:
	private:



	private:



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Dodanie::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider3 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->errorProvider4 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(34, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 51);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Data";
			this->label1->Click += gcnew System::EventHandler(this, &Dodanie::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(170, 61);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 25);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Click += gcnew System::EventHandler(this, &Dodanie::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Dodanie::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Location = System::Drawing::Point(119, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(32, 32);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Dodanie::button1_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->monthCalendar1->Location = System::Drawing::Point(350, 10);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 5;
			this->monthCalendar1->Visible = false;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Dodanie::monthCalendar1_DateChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(34, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 51);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Dystans";
			this->label2->Click += gcnew System::EventHandler(this, &Dodanie::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(170, 103);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 25);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->Click += gcnew System::EventHandler(this, &Dodanie::textBox2_Click);
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Dodanie::MyForm_Load);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Dodanie::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(326, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"(km)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(37, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 51);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Czas";
			this->label4->Click += gcnew System::EventHandler(this, &Dodanie::label1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox3->Location = System::Drawing::Point(170, 143);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(32, 32);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->Click += gcnew System::EventHandler(this, &Dodanie::del);
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Dodanie::MyForm_Load);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox4->Location = System::Drawing::Point(227, 142);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(32, 32);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->Click += gcnew System::EventHandler(this, &Dodanie::textBox4_Click);
			this->textBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Dodanie::MyForm_Load);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox5->Location = System::Drawing::Point(288, 143);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(32, 32);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->Click += gcnew System::EventHandler(this, &Dodanie::del);
			this->textBox5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Dodanie::MyForm_Load);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(208, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"h";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(265, 158);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"m";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(326, 158);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(12, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"s";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(37, 172);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 51);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Buty";
			this->label8->Click += gcnew System::EventHandler(this, &Dodanie::label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Wheat;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Utwórz nowe" });
			this->comboBox1->Location = System::Drawing::Point(170, 195);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Dodanie::comboBox1_SelectedIndexChanged);
			this->comboBox1->Click += gcnew System::EventHandler(this, &Dodanie::comboBox1_Click);
			this->comboBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Dodanie::Odczyt);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button2->Location = System::Drawing::Point(76, 387);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Dodaj";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Dodanie::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(43, 267);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 21);
			this->label9->TabIndex = 11;
			this->label9->Text = L"HR avg";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(43, 307);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 21);
			this->label10->TabIndex = 11;
			this->label10->Text = L"HR max";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(170, 264);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 12;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Dodanie::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(170, 304);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 12;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox1->Location = System::Drawing::Point(43, 236);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(89, 25);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"Pulsometr";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Dodanie::checkBox1_CheckedChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe Print", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(34, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(120, 51);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Nazwa";
			this->label11->Click += gcnew System::EventHandler(this, &Dodanie::label1_Click);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox8->Location = System::Drawing::Point(170, 12);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(150, 25);
			this->textBox8->TabIndex = 3;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Dodanie::MyForm_Load);
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Dodanie::textBox1_TextChanged);
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
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(46, 337);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 23);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Calorie";
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(170, 340);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 15;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(288, 387);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 29);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Anuluj";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Dodanie::button3_Click);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Dodanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(518, 438);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(534, 476);
			this->MinimumSize = System::Drawing::Size(534, 476);
			this->Name = L"Dodanie";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Nowy Trening";
			this->Load += gcnew System::EventHandler(this, &Dodanie::Dodanie_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (monthCalendar1->Visible)
		monthCalendar1->Visible = false;
		else
			monthCalendar1->Visible = true;
	}
		
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 
	
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	textBox1->Text = monthCalendar1->SelectionRange->End.Date.ToShortDateString();
	//monthCalendar1->Visible = false;
}
private: System::Void Dodanie_Load(System::Object^  sender, System::EventArgs^  e) {
	monthCalendar1->Visible = false;
	Odczyt_buty();
	
	
}

		 public: System::Void Odczyt_buty()
		 {
			 comboBox1->Items->Clear();
			 StreamReader ^ odczyt = gcnew StreamReader("buty.txt");
			 String ^ dane;
			 String ^ temp;
			 
			 while (dane = odczyt->ReadLine())
			 {
				 if (dane != "")
				 comboBox1->Items->Add(dane);
				
			 }
			 odczyt->Close();
			 comboBox1->Items->Add("Utwórz nowe");
		 }

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->Text == "Utwórz nowe")
	{
		Buty^ nowe_okno = gcnew Buty;
		nowe_okno->ShowDialog();

	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "")
		errorProvider2->SetError(this->label1,"Podaj date treningu");
	else if (textBox2->Text == "")
		errorProvider3->SetError(this->label2, "Podaj dystans");
	else 	if ((textBox4->Text == "") || (textBox5->Text == "") )
		errorProvider4->SetError(this->label4, "Podaj czas");
	else if (comboBox1->Text == "")
		errorProvider1->SetError(this->comboBox1, "WprowadŸ buty"); 
	else
	{
		if (textBox3->Text == "")
			textBox3->Text = "0";
		StreamWriter ^zapisz = gcnew StreamWriter("plik.txt", true);
		zapisz->WriteLine(textBox8->Text);
		zapisz->WriteLine(textBox1->Text);
		zapisz->WriteLine(textBox2->Text);
		zapisz->WriteLine(textBox3->Text);
		zapisz->WriteLine(textBox4->Text);
		zapisz->WriteLine(textBox5->Text);
		zapisz->WriteLine(comboBox1->Text);
		zapisz->WriteLine(textBox6->Text);
		zapisz->WriteLine(textBox7->Text);
		zapisz->WriteLine(textBox9->Text);
		zapisz->Close();
		String^ przebieg = buty_dystans();
		StreamWriter ^but1 = gcnew StreamWriter(comboBox1->Text+ "d.txt");
		but1->WriteLine(przebieg);
		but1->Close();
		this->Close();
	}
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
	


private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox1->Checked)
	{
		textBox6->Enabled = true;
		textBox7->Enabled = true;
		textBox9->Enabled = true;
	}
	else
	{
		textBox6->Enabled = false;
		textBox6->Text = "";
		//textBox6->Text = "Brak danych";
		textBox7->Enabled = false;
		textBox7->Text = "";
		//textBox7->Text = "Brak danych";
		textBox9->Enabled = false;
		textBox9->Text = "";
	}
}
		
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void MyForm_Load(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	monthCalendar1->Visible = false;
}
private: System::Void textBox3_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}

private: System::Void Odczyt(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Odczyt_buty();
}
		 String^ buty_dystans()
		 {
			
			 StreamReader ^ czytaj = gcnew StreamReader( comboBox1->Text+"d.txt");
			 String^ dystans;
			 String^ linia;
			 dystans = czytaj->ReadLine();
			 czytaj->Close();
			 double d = Convert::ToDouble(dystans);
			 double d_act = Convert::ToDouble(textBox2->Text);
			 int wynik = round(d + d_act);
			 String^ ret = gcnew String(to_string(wynik).c_str());
			 return ret;
		 }
private: System::Void textBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox3->Text == "")
		textBox3->Text = "0";
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	errorProvider2->Clear();
}
private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	errorProvider3->Clear();
}
private: System::Void del(System::Object^  sender, System::EventArgs^  e) {
	errorProvider4->Clear();
}
private: System::Void comboBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	errorProvider1->Clear();
}
};
}
