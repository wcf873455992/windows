#pragma once


namespace GetCount {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ժҪ
	///
	/// ����: ������Ĵ�������ƣ�����Ҫ����
	///          ����������������� .resx �ļ��������й���Դ���������ߵ�
	///          ����Դ�ļ��������ԡ�����
	///          �������������˴���Ĺ���
	///          ���ػ���Դ��ȷ������
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  �˺�;
	private: System::Windows::Forms::ColumnHeader^  ����;
	private: System::Windows::Forms::ColumnHeader^  ����;
	private: System::Windows::Forms::ColumnHeader^  ����;
	private: System::Windows::Forms::ColumnHeader^  ����;
	private: System::Windows::Forms::ColumnHeader^  ���;
	private: System::Windows::Forms::ColumnHeader^  ����;
	private: System::Windows::Forms::ColumnHeader^  ����;
	private: System::Windows::Forms::ColumnHeader^  ��ʧ;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->�˺� = (gcnew System::Windows::Forms::ColumnHeader());
			this->���� = (gcnew System::Windows::Forms::ColumnHeader());
			this->���� = (gcnew System::Windows::Forms::ColumnHeader());
			this->���� = (gcnew System::Windows::Forms::ColumnHeader());
			this->���� = (gcnew System::Windows::Forms::ColumnHeader());
			this->��� = (gcnew System::Windows::Forms::ColumnHeader());
			this->���� = (gcnew System::Windows::Forms::ColumnHeader());
			this->���� = (gcnew System::Windows::Forms::ColumnHeader());
			this->��ʧ = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�˺�";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(264, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 26);
			this->button1->TabIndex = 1;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 21);
			this->textBox1->TabIndex = 2;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {this->�˺�, this->����, this->����, 
				this->����, this->����, this->���, this->����, this->����, this->��ʧ});
			this->listView1->Location = System::Drawing::Point(23, 194);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(584, 240);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// ����
			// 
			this->����->DisplayIndex = 1;
			// 
			// ����
			// 
			this->����->DisplayIndex = 2;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(629, 459);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

