#pragma once	
namespace KURSSP {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Security::Permissions;
	
	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;


	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 72);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(463, 55);
			this->label1->TabIndex = 3;
			this->label1->Text = L"[NON]";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->AcceptsTab = true;
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(12, 212);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ShortcutsEnabled = false;
			this->textBox1->Size = System::Drawing::Size(460, 240);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->WordWrap = false;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBox1_KeyDown);
			this->textBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::textBox1_MouseDown);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripMenuItem1, 
				this->toolStripMenuItem2, this->toolStripMenuItem3});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(484, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->ShowShortcutKeys = false;
			this->toolStripMenuItem1->Size = System::Drawing::Size(98, 20);
			this->toolStripMenuItem1->Text = L"Начать запись";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->ShowShortcutKeys = false;
			this->toolStripMenuItem2->Size = System::Drawing::Size(120, 20);
			this->toolStripMenuItem2->Text = L"Завершить запись";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->ShowShortcutKeys = false;
			this->toolStripMenuItem3->Size = System::Drawing::Size(54, 20);
			this->toolStripMenuItem3->Text = L"Выход";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(500, 500);
			this->MinimumSize = System::Drawing::Size(500, 500);
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"Фиксатор нажатий клавиш";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: StreamWriter^ file;
	
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				toolStripMenuItem2->Enabled=false;	 
			 }

private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 label1->Text=Convert::ToString(e->KeyValue);
			 if(!toolStripMenuItem1->Enabled)
			 {
				DateTime c = DateTime::Now;
				file->WriteLine("Time: "+Convert::ToString(c)+" KeyID: "+Convert::ToString(e->KeyValue)+"\n");
			 }
		 }

private: System::Void textBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			label1->Text=Convert::ToString(e->Button);
			if(!toolStripMenuItem1->Enabled)
			{
				DateTime c = DateTime::Now;
				file->WriteLine("Time: "+Convert::ToString(c)+" KeyID: "+Convert::ToString(e->Button)+"\n");
			}
		 }

private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			toolStripMenuItem1->Enabled=false;
			toolStripMenuItem2->Enabled=true;
			file = gcnew StreamWriter("LOG.txt", true);

		 }

private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
			toolStripMenuItem1->Enabled=true;
			toolStripMenuItem2->Enabled=false;
			file->Close();
		 }

private: System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(toolStripMenuItem2->Enabled)
			 {
				MessageBox::Show("Завершите запись нажатий!");
			 }
			 else
			 {
				 Close();
			 }
		 }
};
}

