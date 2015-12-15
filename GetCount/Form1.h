#pragma once


namespace GetCount {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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
	private: System::Windows::Forms::ColumnHeader^  账号;
	private: System::Windows::Forms::ColumnHeader^  姓名;
	private: System::Windows::Forms::ColumnHeader^  密码;
	private: System::Windows::Forms::ColumnHeader^  银行;
	private: System::Windows::Forms::ColumnHeader^  卡号;
	private: System::Windows::Forms::ColumnHeader^  入金;
	private: System::Windows::Forms::ColumnHeader^  出金;
	private: System::Windows::Forms::ColumnHeader^  结余;
	private: System::Windows::Forms::ColumnHeader^  损失;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->账号 = (gcnew System::Windows::Forms::ColumnHeader());
			this->密码 = (gcnew System::Windows::Forms::ColumnHeader());
			this->姓名 = (gcnew System::Windows::Forms::ColumnHeader());
			this->银行 = (gcnew System::Windows::Forms::ColumnHeader());
			this->卡号 = (gcnew System::Windows::Forms::ColumnHeader());
			this->入金 = (gcnew System::Windows::Forms::ColumnHeader());
			this->出金 = (gcnew System::Windows::Forms::ColumnHeader());
			this->结余 = (gcnew System::Windows::Forms::ColumnHeader());
			this->损失 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"账号";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(264, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 26);
			this->button1->TabIndex = 1;
			this->button1->Text = L"搜索";
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
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {this->账号, this->姓名, this->密码, 
				this->银行, this->卡号, this->入金, this->出金, this->结余, this->损失});
			this->listView1->Location = System::Drawing::Point(23, 194);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(584, 240);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// 密码
			// 
			this->密码->DisplayIndex = 1;
			// 
			// 姓名
			// 
			this->姓名->DisplayIndex = 2;
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

