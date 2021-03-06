#pragma once
#include"faculty.h"

namespace faculty {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label11;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(222, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add new lector:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Maroon;
			this->textBox1->Location = System::Drawing::Point(386, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 35);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(774, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(385, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 28);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Name:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Maroon;
			this->textBox2->Location = System::Drawing::Point(573, 72);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(172, 35);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(568, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 28);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Surname:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(208, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 28);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Add new student:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Maroon;
			this->textBox3->Location = System::Drawing::Point(386, 121);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(162, 35);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::Maroon;
			this->textBox4->Location = System::Drawing::Point(573, 121);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(172, 35);
			this->textBox4->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(774, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Maroon;
			this->label5->Location = System::Drawing::Point(37, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 28);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Choose lector:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::Maroon;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(189, 233);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(359, 36);
			this->comboBox1->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(560, 233);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 28);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Course name:";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Maroon;
			this->textBox5->Location = System::Drawing::Point(700, 234);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(180, 35);
			this->textBox5->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(884, 233);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 36);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Add course:";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::Maroon;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(189, 345);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(359, 36);
			this->comboBox2->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Maroon;
			this->label7->Location = System::Drawing::Point(25, 353);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(160, 28);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Choose student:";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::Maroon;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(713, 340);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(180, 36);
			this->comboBox3->TabIndex = 17;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(897, 340);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 36);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Sign";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Maroon;
			this->label8->Location = System::Drawing::Point(25, 450);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(153, 28);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Choose course:";
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::Color::Maroon;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(184, 448);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(179, 36);
			this->comboBox4->TabIndex = 20;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Maroon;
			this->label9->Location = System::Drawing::Point(371, 450);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(160, 28);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Choose student:";
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->ForeColor = System::Drawing::Color::Maroon;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(537, 448);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(319, 36);
			this->comboBox5->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Maroon;
			this->label10->Location = System::Drawing::Point(857, 416);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 28);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Point:";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::Maroon;
			this->textBox6->Location = System::Drawing::Point(862, 447);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 35);
			this->textBox6->TabIndex = 24;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Maroon;
			this->button5->Location = System::Drawing::Point(968, 445);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 37);
			this->button5->TabIndex = 25;
			this->button5->Text = L"Set point";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Maroon;
			this->button6->Location = System::Drawing::Point(417, 536);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(277, 53);
			this->button6->TabIndex = 26;
			this->button6->Text = L"Write data to archive";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Maroon;
			this->label11->Location = System::Drawing::Point(554, 348);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(153, 28);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Choose course:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1131, 601);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		vector<lector*> *lectors;
		vector<student*> *students;
		vector<course*> *courses;

	private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ n_ = textBox1->Text;
	String^ s_ = textBox2->Text;
	String^ n_l = n_ + " " + s_;
	comboBox1->Items->Add(n_l);
	string n = "";
	string s="";
	for (int i = 0; i < n_->Length; i++) { n += n_[i]; }
	for (int i = 0; i < s_->Length; i++) { s += s_[i]; }
	lector* lec = new lector(n, s); lectors->push_back(lec);
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
{
	lectors = new vector<lector*>();
	students = new vector<student*>();
	courses = new vector<course*>();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ n_ = textBox3->Text;
	String^ s_ = textBox4->Text;
	String^ n_l = n_ + " " + s_;
	comboBox2->Items->Add(n_l);
	string n = "";
	string s = "";
	for (int i = 0; i < n_->Length; i++) { n += n_[i]; }
	for (int i = 0; i < s_->Length; i++) { s += s_[i]; }
	student* st = new student(n, s); students->push_back(st);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int l = comboBox1->SelectedIndex;
	String^ c_ = textBox5->Text;
	comboBox3->Items->Add(c_); comboBox4->Items->Add(c_);
	string c = "";
	for (int i = 0; i < c_->Length; i++) { c += c_[i]; }
	course* c_n = new course(c, lectors->at(l));
	courses->push_back(c_n);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int st = comboBox2->SelectedIndex; int cr = comboBox3->SelectedIndex;
	students->at(st)->add_course(courses->at(cr));
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
	vector<string> sts = courses->at(comboBox4->SelectedIndex)->get_students();
	comboBox5->Items->Clear();
	for (int i = 0; i < sts.size(); i++)
	{
		String^ n = gcnew String(sts.at(i).c_str());
		comboBox5->Items->Add(n);
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String^ pt = textBox6->Text;
	string pt_ = ""; for (int i = 0; i < pt->Length; i++) { pt_ += pt[i]; }
	int point = atoi(pt_.c_str());
	int crs = comboBox4->SelectedIndex; int st = comboBox5->SelectedIndex;
	courses->at(crs)->set_point(st, point);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	for (int i = 0; i < courses->size(); i++)
	{
		courses->at(i)->write_archive();
	}
}
};
}
