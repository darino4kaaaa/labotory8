#pragma once

namespace лаб82 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(77, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Номер літери в алфавіті";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(354, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Літера";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(33) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10 ", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"33"
			});
			this->listBox1->Location = System::Drawing::Point(80, 143);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(180, 116);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(348, 143);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 414);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int n;
		n=listBox1->SelectedIndex;
		switch (n)
		{
		case 0:  textBox1->Text = "а";break;
		case 1:  textBox1->Text = "б";break;
		case 2:  textBox1->Text = "в";break;
		case 3:  textBox1->Text = "г";break;
		case 4:  textBox1->Text = "ґ";break;
		case 5:  textBox1->Text = "д";break;
		case 6:  textBox1->Text = "е";break;
		case 7:  textBox1->Text = "є";break;
		case 8:  textBox1->Text = "ж";break;
		case 9:  textBox1->Text = "з";break;
		case 10:  textBox1->Text = "и";break;
		case 11:  textBox1->Text = "і";break;
		case 12:  textBox1->Text = "й";break;
		case 13:  textBox1->Text = "к";break;
		case 14:  textBox1->Text = "л";break;
		case 15:  textBox1->Text = "м";break;
		case 16:  textBox1->Text = "н";break;
		case 17:  textBox1->Text = "о";break;
		case 18:  textBox1->Text = "п";break;
		case 19:  textBox1->Text = "р";break;
		case 20:  textBox1->Text = "с";break;
		case 21:  textBox1->Text = "т";break;
		case 22:  textBox1->Text = "у";break;
		case 23:  textBox1->Text = "ф";break;
		case 24:  textBox1->Text = "х";break;
		case 25:  textBox1->Text = "ц";break;
		case 26:  textBox1->Text = "ч";break;
		case 27:  textBox1->Text = "ш";break;
		case 28:  textBox1->Text = "щ";break;
		case 29:  textBox1->Text = "ь";break;
		case 30:  textBox1->Text = "ю";break;
		case 31:  textBox1->Text = "я";break;
		case 32:  textBox1->Text = "а";break;
		}
	}
	};
}
