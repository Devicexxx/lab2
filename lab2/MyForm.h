#pragma once
#include "Drob.h"
#include <stdlib.h>

namespace lab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	Drob* a[6];
	int m_p[8];
	int m_n[8];

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			for (int i = 0; i < 6; i++)
			{
				a[i] = new Drob();
			}

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(438, 360);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Drob";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(179, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Результат";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(6, 202);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(130, 20);
			this->textBox11->TabIndex = 40;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(6, 152);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(130, 44);
			this->button10->TabIndex = 39;
			this->button10->Text = L"Ввод строкой";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Location = System::Drawing::Point(190, 162);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(223, 176);
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(309, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 13);
			this->label10->TabIndex = 37;
			this->label10->Text = L"Результат";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(312, 107);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(72, 20);
			this->textBox10->TabIndex = 36;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(384, 65);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(51, 20);
			this->button9->TabIndex = 35;
			this->button9->Text = L">";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(190, 37);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(96, 20);
			this->textBox9->TabIndex = 29;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(327, 65);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(51, 20);
			this->button8->TabIndex = 34;
			this->button8->Text = L"==";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(292, 37);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(96, 20);
			this->textBox8->TabIndex = 30;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(270, 65);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(51, 20);
			this->button7->TabIndex = 33;
			this->button7->Text = L"<";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(187, 21);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 13);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Первый эелемент";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(289, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 13);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Второй элемент";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(208, 89);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(51, 20);
			this->button6->TabIndex = 17;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(151, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(51, 20);
			this->button5->TabIndex = 16;
			this->button5->Text = L"/";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(176, 126);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(62, 20);
			this->textBox7->TabIndex = 15;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(151, 65);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(51, 20);
			this->button4->TabIndex = 14;
			this->button4->Text = L"*";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(208, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(51, 20);
			this->button3->TabIndex = 13;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Номер элемента";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(6, 37);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(130, 20);
			this->textBox6->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(6, 318);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(130, 20);
			this->textBox5->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(71, 276);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Знаменатель";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 276);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Числитель";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(74, 292);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(62, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 292);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(62, 20);
			this->textBox4->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 228);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 44);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Вывод";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Знаменатель";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Числитель";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(74, 126);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(62, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 126);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(62, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ввод";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 377);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
{
	StringFormat^ drawFormat = gcnew StringFormat;
	drawFormat->FormatFlags = StringFormatFlags::DirectionRightToLeft;
	System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 16);
	SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
	
	e->Graphics->DrawString(Convert::ToString(m_n[0]), Font, drawBrush, 15, 88, drawFormat);
	e->Graphics->DrawString(Convert::ToString(m_n[1]), Font, drawBrush, 15, 101, drawFormat);
	e->Graphics->DrawString(Convert::ToString(m_n[2]), Font, drawBrush, 75, 88, drawFormat);
	e->Graphics->DrawString(Convert::ToString(m_n[3]), Font, drawBrush, 75, 101, drawFormat);
	e->Graphics->DrawString(Convert::ToString(m_n[4]), Font, drawBrush, 140, 88, drawFormat);
	e->Graphics->DrawString(Convert::ToString(m_n[5]), Font, drawBrush, 140, 101, drawFormat);

	e->Graphics->DrawString("+", Font, drawBrush, m_p[0], m_p[1], drawFormat);
	e->Graphics->DrawString("-", Font, drawBrush, m_p[2], m_p[3], drawFormat);
	e->Graphics->DrawString("*", Font, drawBrush, m_p[4], m_p[5], drawFormat);
	e->Graphics->DrawString("/", Font, drawBrush, m_p[6], m_p[7], drawFormat);




	e->Graphics->DrawLine(System::Drawing::Pens::Black, 0, 100, 20, 100);
	e->Graphics->DrawLine(System::Drawing::Pens::Black, 60, 100, 80, 100);
	e->Graphics->DrawLine(System::Drawing::Pens::Black, 90, 105, 110, 105);
	e->Graphics->DrawLine(System::Drawing::Pens::Black, 90, 95, 110, 95);
	e->Graphics->DrawLine(System::Drawing::Pens::Black, 120, 100, 150, 100);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBox6->Text->Length == 0) || (textBox1->Text->Length == 0) || (textBox2->Text->Length == 0))
		return;
	a[Convert::ToInt32(textBox6->Text)]->setall(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox6->Text->Length == 0)
		return;
	int i = Convert::ToInt32(textBox6->Text);
	textBox4->Text = Convert::ToString(a[i]->getchis());
	textBox3->Text = Convert::ToString(a[i]->getznam());
	textBox5->Text = Convert::ToString(a[i]->getchis()) + "/" + Convert::ToString(a[i]->getznam());
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if ((textBox6->Text->Length == 0) || (textBox11->Text->Length == 0))
		return;

	int i = Convert::ToInt32(textBox6->Text);
	a[i]->setstring(textBox11->Text);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if ((textBox6->Text->Length == 0) || (textBox9->Text->Length == 0) || (textBox8->Text->Length == 0))
		return;

	int i = Convert::ToInt32(textBox9->Text);
	int j = Convert::ToInt32(textBox8->Text);
	textBox7->Text = Convert::ToString(*a[i] * *a[j]);
	String^ s1 = Convert::ToString(*a[i] * *a[j]);

	m_n[0] = a[i]->getchis();
	m_n[1] = a[i]->getznam();
	m_n[2] = a[j]->getchis();
	m_n[3] = a[j]->getznam();
	m_n[4] = Convert::ToInt32(s1->Split('/')[0]);
	m_n[5] = Convert::ToInt32(s1->Split('/')[1]);

	m_p[0] = 200;
	m_p[1] = 200;
	m_p[2] = 200;
	m_p[3] = 200;
	m_p[4] = 45;
	m_p[5] = 96;
	m_p[6] = 200;
	m_p[7] = 200;
	pictureBox1->Refresh();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if ((textBox6->Text->Length == 0) || (textBox9->Text->Length == 0) || (textBox8->Text->Length == 0))
		return;

	int i = Convert::ToInt32(textBox9->Text);
	int j = Convert::ToInt32(textBox8->Text);
	textBox7->Text = Convert::ToString(*a[i] - *a[j]);
	String^ s1 = Convert::ToString(*a[i] - *a[j]);

	m_n[0] = a[i]->getchis();
	m_n[1] = a[i]->getznam();
	m_n[2] = a[j]->getchis();
	m_n[3] = a[j]->getznam();
	m_n[4] = Convert::ToInt32(s1->Split('/')[0]);
	m_n[5] = Convert::ToInt32(s1->Split('/')[1]);

	m_p[0] = 200;
	m_p[1] = 200;
	m_p[2] = 45;
	m_p[3] = 96;
	m_p[4] = 200;
	m_p[5] = 200;
	m_p[6] = 200;
	m_p[7] = 200;
	pictureBox1->Refresh();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if ((textBox6->Text->Length == 0) || (textBox9->Text->Length == 0) || (textBox8->Text->Length == 0))
		return;

	int i = Convert::ToInt32(textBox9->Text);
	int j = Convert::ToInt32(textBox8->Text);
	textBox7->Text = Convert::ToString(*a[i] / *a[j]);
	String^ s1 = Convert::ToString(*a[i] / *a[j]);

	m_n[0] = a[i]->getchis();
	m_n[1] = a[i]->getznam();
	m_n[2] = a[j]->getchis();
	m_n[3] = a[j]->getznam();
	m_n[4] = Convert::ToInt32(s1->Split('/')[0]);
	m_n[5] = Convert::ToInt32(s1->Split('/')[1]);

	m_p[0] = 200;
	m_p[1] = 200;
	m_p[2] = 200;
	m_p[3] = 200;
	m_p[4] = 200;
	m_p[5] = 200;
	m_p[6] = 45;
	m_p[7] = 96;

	pictureBox1->ResetText();

	pictureBox1->Refresh();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if ((textBox9->Text->Length == 0) || (textBox8->Text->Length == 0))
		return;

	int i = Convert::ToInt32(textBox9->Text);
	int j = Convert::ToInt32(textBox8->Text);
	textBox7->Text = Convert::ToString(*a[i] + *a[j]);
	String^ s1 = Convert::ToString(*a[i] + *a[j]);

	m_n[0] = a[i]->getchis();
	m_n[1] = a[i]->getznam();
	m_n[2] = a[j]->getchis();
	m_n[3] = a[j]->getznam();
	m_n[4] = Convert::ToInt32(s1->Split('/')[0]);
	m_n[5] = Convert::ToInt32(s1->Split('/')[1]);

	m_p[0] = 45;
	m_p[1] = 96;
	m_p[2] = 200;
	m_p[3] = 200;
	m_p[4] = 200;
	m_p[5] = 200;
	m_p[6] = 200;
	m_p[7] = 200;
	pictureBox1->Refresh();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if ((textBox9->Text->Length == 0) || (textBox8->Text->Length == 0))
		return;

	int i = Convert::ToInt32(textBox9->Text);
	int j = Convert::ToInt32(textBox8->Text);
	textBox10->Text = Convert::ToString(*a[i] < *a[j]);

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{


	if ((textBox9->Text->Length == 0) || (textBox8->Text->Length == 0))
		return;

	int i = Convert::ToInt32(textBox9->Text);
	int j = Convert::ToInt32(textBox8->Text);
	textBox10->Text = Convert::ToString(*a[i] == *a[j]);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{


	if ((textBox9->Text->Length == 0) || (textBox8->Text->Length == 0))
		return;

	int i = Convert::ToInt32(textBox9->Text);
	int j = Convert::ToInt32(textBox8->Text);
	textBox10->Text = Convert::ToString(*a[i] > *a[j]);
}
};
}
