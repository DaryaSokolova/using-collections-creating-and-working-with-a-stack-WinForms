#pragma once
#include <climits>

namespace Project23 {

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
	private: System::Windows::Forms::Button^ btnRemoveSt;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::TextBox^ txtIn;
	private: System::Windows::Forms::TextBox^ txtOut;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnFind;
	private: System::Windows::Forms::TextBox^ txtMax;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtNew;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnRemove;


	private: System::Windows::Forms::TextBox^ txtNumber;

	private: System::Windows::Forms::Button^ btnNewSt;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Button^ btnClearIn;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ErrorProvider^ errorProvider2;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnRemoveSt = (gcnew System::Windows::Forms::Button());
			this->txtIn = (gcnew System::Windows::Forms::TextBox());
			this->txtOut = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnFind = (gcnew System::Windows::Forms::Button());
			this->txtMax = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtNew = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->txtNumber = (gcnew System::Windows::Forms::TextBox());
			this->btnNewSt = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->btnClearIn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->errorProvider2 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRemoveSt
			// 
			this->btnRemoveSt->Location = System::Drawing::Point(363, 19);
			this->btnRemoveSt->Name = L"btnRemoveSt";
			this->btnRemoveSt->Size = System::Drawing::Size(81, 51);
			this->btnRemoveSt->TabIndex = 1;
			this->btnRemoveSt->Text = L"Удалить стек";
			this->btnRemoveSt->UseVisualStyleBackColor = true;
			this->btnRemoveSt->Click += gcnew System::EventHandler(this, &MyForm::btnRemoveSt_Click);
			// 
			// txtIn
			// 
			this->txtIn->Location = System::Drawing::Point(85, 57);
			this->txtIn->Name = L"txtIn";
			this->txtIn->Size = System::Drawing::Size(100, 20);
			this->txtIn->TabIndex = 2;
			// 
			// txtOut
			// 
			this->txtOut->Location = System::Drawing::Point(85, 93);
			this->txtOut->Name = L"txtOut";
			this->txtOut->ReadOnly = true;
			this->txtOut->Size = System::Drawing::Size(100, 20);
			this->txtOut->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Ввод";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Результат";
			// 
			// btnFind
			// 
			this->btnFind->Location = System::Drawing::Point(500, 122);
			this->btnFind->Name = L"btnFind";
			this->btnFind->Size = System::Drawing::Size(100, 20);
			this->btnFind->TabIndex = 6;
			this->btnFind->Text = L"Найти";
			this->btnFind->UseVisualStyleBackColor = true;
			this->btnFind->Click += gcnew System::EventHandler(this, &MyForm::btnFind_Click);
			// 
			// txtMax
			// 
			this->txtMax->Location = System::Drawing::Point(394, 122);
			this->txtMax->Name = L"txtMax";
			this->txtMax->ReadOnly = true;
			this->txtMax->Size = System::Drawing::Size(100, 20);
			this->txtMax->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(205, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Максимальный нечетный элемент";
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(500, 156);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(100, 20);
			this->btnDelete->TabIndex = 9;
			this->btnDelete->Text = L"Выполнить";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(228, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Стек без нечетных элементов";
			// 
			// txtNew
			// 
			this->txtNew->Location = System::Drawing::Point(394, 156);
			this->txtNew->Name = L"txtNew";
			this->txtNew->ReadOnly = true;
			this->txtNew->Size = System::Drawing::Size(100, 20);
			this->txtNew->TabIndex = 11;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(12, 220);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(121, 23);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"Добавить элемент";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(139, 220);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(118, 23);
			this->btnRemove->TabIndex = 13;
			this->btnRemove->Text = L"Удалить элемент";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::btnRemove_Click);
			// 
			// txtNumber
			// 
			this->txtNumber->Location = System::Drawing::Point(85, 258);
			this->txtNumber->Name = L"txtNumber";
			this->txtNumber->Size = System::Drawing::Size(100, 20);
			this->txtNumber->TabIndex = 14;
			// 
			// btnNewSt
			// 
			this->btnNewSt->Location = System::Drawing::Point(249, 20);
			this->btnNewSt->Name = L"btnNewSt";
			this->btnNewSt->Size = System::Drawing::Size(81, 50);
			this->btnNewSt->TabIndex = 15;
			this->btnNewSt->Text = L"Создать стек";
			this->btnNewSt->UseVisualStyleBackColor = true;
			this->btnNewSt->Click += gcnew System::EventHandler(this, &MyForm::btnNewSt_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(284, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(333, 104);
			this->label5->TabIndex = 16;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// btnClearIn
			// 
			this->btnClearIn->Location = System::Drawing::Point(474, 20);
			this->btnClearIn->Name = L"btnClearIn";
			this->btnClearIn->Size = System::Drawing::Size(85, 50);
			this->btnClearIn->TabIndex = 17;
			this->btnClearIn->Text = L"Очистить все";
			this->btnClearIn->UseVisualStyleBackColor = true;
			this->btnClearIn->Click += gcnew System::EventHandler(this, &MyForm::btnClearIn_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 261);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Элемент:";
			// 
			// errorProvider2
			// 
			this->errorProvider2->ContainerControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 360);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnClearIn);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnNewSt);
			this->Controls->Add(this->txtNumber);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtNew);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtMax);
			this->Controls->Add(this->btnFind);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtOut);
			this->Controls->Add(this->txtIn);
			this->Controls->Add(this->btnRemoveSt);
			this->Name = L"MyForm";
			this->Text = L"Использование коллекций";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//очистить все поля, кроме поля вывода, где лежит стек
		void ClearAll() {//очистка полей
			errorProvider1->SetError(txtIn, String::Empty);     //обнулить про поле ввода стека
			errorProvider2->SetError(txtNumber, String::Empty); //обнулить про поле ввода числа
			this->txtNumber->Text = ""; //поле ввода числа
			this->txtIn->Text = ""; //поле ввода
			this->txtMax->Text = ""; //поле поиска максимума
			this->txtNew->Text = ""; //поле стека четных значений
		}

		//вывести значение стека
		void Print()
		{
			System::Collections::Generic::Stack<int> buf; //вспомогательный стек
			System::String^ str2 = "";
			while (stk.Count)
			{//пока стек не пуст
				buf.Push(stk.Peek()); //записываем во вспомонательный стек первый элемент
				str2 += System::Convert::ToString(stk.Peek()) + " "; //записываем первый элемент в строку
				stk.Pop(); //удаляем первый элемент из стека
			}

			while (buf.Count)
			{ //пока вспосогательный стек не пуст
				stk.Push(buf.Peek()); //записываем в основной стек первый элемент вспомонательного стека 
				buf.Pop(); //удаляем из стека первый элемент
			}

			this->txtOut->Text = str2; //записываем результат в строку
		}

		//стек
	private: System::Collections::Generic::Stack<int> stk;
		   //создать стек
	private: System::Void btnNewSt_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//предварительно очищаем все ненужные поля
		this->txtMax->Text = "";
		this->txtNumber->Text = "";
		stk.Clear(); //стек пустой
		this->txtOut->Text = "";
		System::String^ str = System::Convert::ToString(this->txtIn->Text); //считываем строку из текстового поля
		str += " ";
		int X, at, pos = 0;
		bool fl = true;
		at = str->IndexOf(" "); //позиция первого пробела

		while (at != -1) 
		{ //пока находим пробел
			System::String^ str1 = str->Substring(pos, at - pos); //считываем число
			pos = at + 1;
			bool res = Int32::TryParse(str1, X);

			if (!res) //если что-то неверно введено
			{
				fl = false; //ставим флаг
			}

			stk.Push(X); //записываем в стек
			at = str->IndexOf(" ", pos); //ищем следующий пробел
		}

		//если все введено верно - цифры
		if (fl)
		{
		errorProvider1->SetError(txtIn, String::Empty); //чтобы не светилась ошибка
		Print(); //вывести стек
		}
		//если неверные значения
		else
		{
			errorProvider1->SetError(txtIn, "Введено не целое число");
			stk.Clear(); //очищаем стек
		}
	}

		   //удалить стек
	private: System::Void btnRemoveSt_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		stk.Clear(); //очищаем стек
		this->txtOut->Text = ""; //очищаем поле вывода
		ClearAll(); //очищаем все поля
	}

		   //добавить элемент
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//предварительно очищаем все ненужные поля
		this->txtMax->Text = "";
		this->txtIn->Text = "";
		this->txtNew->Text = "";
		long long InputNumber;
		bool result = Int64::TryParse(this->txtNumber->Text, InputNumber); //переводим строку из TextBox в число
		if (!result) //ввели не число
		{
			errorProvider2->SetError(txtNumber, "Введено не целое число");
		}
		else 
		{//число
			errorProvider2->SetError(txtNumber, String::Empty);
			stk.Push(InputNumber);
			Print();
		}

		this->txtNumber->Text = ""; //очищаем поле
	}

		   //очистить все
	private: System::Void btnClearIn_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ClearAll(); //очищаем все текстовые поля
		stk.Clear(); //очищаем стек
		this->txtOut->Text = ""; //очищаем поле вывода
	}

		   //удалить элемент
	private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ClearAll();
		if (stk.Count)
		{
			stk.Pop();
			Print();
		}
		else
		{
			MessageBox::Show("Нельзя удалить из пустого стека!");
		}
	}

		   //найти максимальный нечетный
	private: System::Void btnFind_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Print(); //выведем стек в текстовое поле
		ClearAll(); //очистим все ненужные поля
		System::String^ str = System::Convert::ToString(this->txtOut->Text); //считываем строку из текстового поля
		str += " ";
		int X, at, pos = 0;
		bool fl = true;
		int max = INT_MIN; //ставим минимум
		at = str->IndexOf(" "); //позиция первого пробела

		while (at != -1)
		{ //пока находим пробел
			System::String^ str1 = str->Substring(pos, at - pos); //считываем число
			pos = at + 1;
			bool res = Int32::TryParse(str1, X);
			if (!res)
			{
				fl = false;
			}
			if (X % 2 != 0 && X > max  && res) //если нечетное и больше максимума
			{
				max = X; //новый максимум
			}
			at = str->IndexOf(" ", pos); //ищем следующий пробел
		}

		if (this->txtOut->Text == "")
		{
			MessageBox::Show("Стек не создан!");
		}
		else
		{

		if (max % 2 != 0) //если нашли хоть одно нечетное
		{
			this->txtMax->Text = System::Convert::ToString(max); //записываем результат в строку
		}
		else
		{
			this->txtMax->Text = System::Convert::ToString("нечетных чисел нет");
		}

		}
	}

		   //создание стека без нечетных чисел
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Collections::Generic::Stack<int> stk1; //новый стек
		Print(); //выводим в поле вывода стек
		ClearAll(); //очищаем ненужные поля
		System::String^ str = System::Convert::ToString(this->txtOut->Text); //считываем строку из текстового поля
		str += " ";
		int X, at, pos = 0;
		bool fl = true;
		at = str->IndexOf(" "); //позиция первого пробела
		System::String^ str2 = "";

		while (at != -1)
		{ //пока находим пробел
			System::String^ str1 = str->Substring(pos, at - pos); //считываем число
			pos = at + 1;
			bool res = Int32::TryParse(str1, X);
			if (X % 2 == 0 && res) //если четное, то добавляем в новый стек
			{
				stk1.Push(X); //записываем в стек
				str2 += System::Convert::ToString(stk1.Peek()) + " "; //записываем элемент в строку вывода
			}
			at = str->IndexOf(" ", pos); //ищем следующий пробел
		}
		
		if (this->txtOut->Text == "")
		{
			MessageBox::Show("Нельзя создать новый стек!");
		}
		else
		{
			if (str2 == "")
			{
				this->txtNew->Text = System::Convert::ToString("стек пуст");; //записываем результат в строку
			}
			else
			{
				this->txtNew->Text = str2; //записываем результат в строку
			}
		}
	}
};
}
