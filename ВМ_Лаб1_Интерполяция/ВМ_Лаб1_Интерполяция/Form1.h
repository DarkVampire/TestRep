#pragma once
#include "parser.h"
#include <math.h>
#include <string>
#include <vector>


TParser parser;

double **mas2;
double **masss;
int qwe = 0;
int uzl;
double a,b;
int j=0,n=0;
			 
			
namespace ВМ_Лаб1_Интерполяция {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListView^  lv1;

	private: System::Windows::Forms::ColumnHeader^  X;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lv1 = (gcnew System::Windows::Forms::ListView());
			this->X = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(126, 51);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Функция";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"sin(x)";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Location = System::Drawing::Point(2, 59);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(126, 48);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Интервал";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(12, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"/";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(77, 19);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(38, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"10";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(11, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(38, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"0";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Location = System::Drawing::Point(2, 113);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(128, 95);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Узлы";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(5, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(122, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Пользовательские";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(5, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(111, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Равноотстоящие";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(79, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Чебышева";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox4);
			this->groupBox4->Location = System::Drawing::Point(2, 215);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(128, 48);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Количество узлов";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(10, 19);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(108, 20);
			this->textBox4->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(2, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// lv1
			// 
			this->lv1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->X, this->columnHeader2});
			this->lv1->GridLines = true;
			this->lv1->Location = System::Drawing::Point(135, 2);
			this->lv1->Name = L"lv1";
			this->lv1->Size = System::Drawing::Size(160, 414);
			this->lv1->TabIndex = 5;
			this->lv1->UseCompatibleStateImageBehavior = false;
			this->lv1->View = System::Windows::Forms::View::Details;
			// 
			// X
			// 
			this->X->Text = L"X";
			this->X->Width = 76;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Y";
			this->columnHeader2->Width = 80;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button2);
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Location = System::Drawing::Point(2, 298);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(126, 100);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Добавить узел";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(10, 46);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(11, 20);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(105, 20);
			this->textBox5->TabIndex = 0;
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(305, 2);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(608, 261);
			this->chart1->TabIndex = 7;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			this->chart2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(305, 270);
			this->chart2->Name = L"chart2";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(608, 144);
			this->chart2->TabIndex = 8;
			this->chart2->Text = L"chart2";
			title1->Name = L"Title1";
			this->chart2->Titles->Add(title1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(922, 420);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->lv1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->ShowInTaskbar = false;
			this->Text = L"Лабораторная 1 - Интерполяция";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
		    public:
			 void Lagrang(double** masl, int uzl){
             double the = masl[0][0];
             double end = masl[0][uzl-1];
			 double b=0;
	
             if (radioButton1->Checked==1) 
			 {
				 the=masl[0][uzl-1]; end=masl[0][0];
			 }
             else 
			 {
				 the=masl[0][0]; end=masl[0][uzl-1];
			 }
		
             chart2->Series->Clear();
             chart2->Series->Add("Ошибка");
             chart2->Series["Ошибка"]->ChartType = SeriesChartType::Line;
             chart2->ChartAreas[0]->AxisX->Minimum = int(a);
             chart2->ChartAreas[0]->AxisX->Interval = 1;

             for(double h = the; h<end; h+=0.01)
             {
                 double L = 0;
                 for(int i=0; i<uzl; i++)
                 {
                     double li = 1.0;
                     for(int j=0; j<uzl; j++)
                     {
                             if(j!=i) li*=((h-masl[0][j])/(masl[0][i]-masl[0][j]));
                     }
                     L+=masl[1][i]*li;
                 }
				 chart1->Series["Лагранж"]->Points->AddXY(h,L);//лагранж
                 parser.Evaluate(h);
                 chart2->Series["Ошибка"]->Points->AddXY(h,pow((parser.GetResult() - L),2.0));
				 if (L>b) b=L;
             }
             
					  }
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			  //Очистка
			 chart1->ChartAreas->Clear();
             chart1->Series->Clear();
             chart2->Series->Clear();
			 if (radioButton3->Checked!=1)lv1->Items->Clear();
	
			 //Инициализация переменных
			 a = System::Convert::ToDouble(textBox2->Text); 
			 b = System::Convert::ToDouble(textBox3->Text); 
	
             mas2 = new double *[2];
             mas2[0] = new double[uzl];
             mas2[1] = new double[uzl];
	
			 //Преобразование строки для парсера
			  int len = textBox1->Text->Length + 3 + 1;  
			  char *formulka = new char[len];
			  int z=0;
			  for(int i=0; i<textBox1->Text->Length; i++, z++)
			  {
				  if(textBox1->Text[i]=='x')
				  {
					  formulka[z] = textBox1->Text[i];
					  formulka[z+1] = '[';
					  formulka[z+2] = '0';
					  formulka[z+3] = ']';
				      z += 3;
					  continue;
				  }
				  formulka[z] = textBox1->Text[i];
			  }
			  formulka[z] = '\0';
			  parser.Compile(formulka);
	
			  //Рисуем график
			 this->chart1->ChartAreas->Add("1");
             this->chart1->ChartAreas[0]->AxisX->Maximum=int(b);
             this->chart1->ChartAreas[0]->AxisX->Minimum=int(a);
             this->chart1->ChartAreas[0]->AxisX->Interval=1;

             this->chart1->Series->Add("График");
             this->chart1->Series->Add("Узлы");
             this->chart1->Series->Add("Лагранж");

             this->chart1->Series["График"]->ChartType = SeriesChartType::Line;
             this->chart1->Series["Узлы"]->ChartType = SeriesChartType::Point;
             this->chart1->Series["Узлы"]->MarkerBorderColor = Color::Black;
             this->chart1->Series["Узлы"]->MarkerStyle = MarkerStyle::Circle;
             this->chart1->Series["Узлы"]->MarkerSize = 7;
			 this->chart1->Series["Лагранж"]->ChartType = SeriesChartType::Line;
			 
             for (double i=a; i<b; i+=0.1)
             {
                 parser.Evaluate(i);
                 this->chart1->Series["График"]->Points->AddXY(i, parser.GetResult());
                 j++;
			 }
           
			 //Равноотстоящие узлы
             if (radioButton2->Checked==1)
             {
				 uzl = System::Convert::ToDouble(textBox4->Text);
				 chart1->Series["Узлы"]->MarkerColor=Color::LightGreen;
                 chart1->Series["Лагранж"]->Color=Color::Green;
                 double zero= a;
                 double step = (b - a)/(uzl-1);
                 for(int k=0; k<uzl; k++)
                 {
                     mas2[0][k]=zero;
                     parser.Evaluate(zero);
                     mas2[1][k]=parser.GetResult();
                     zero+=step;
                     chart1->Series["Узлы"]->Points->AddXY(mas2[0][k], mas2[1][k]);
					 lv1->Items->Add( mas2[0][k]+"");
					 lv1->Items[k]->SubItems->Add( mas2[1][k]+"");
                 }
                 Lagrang(mas2, uzl);
             }
			
			 //Чебышевские узлы
             else if (radioButton1->Checked==1)
             {
				 uzl = System::Convert::ToDouble(textBox4->Text);
				 chart1->Series["Узлы"]->MarkerColor=Color::Pink;
                 chart1->Series["Лагранж"]->Color=Color::Red;
                 for (int i=0; i<uzl; i++)
                 {
                     mas2[0][i]=((b - a)*cos((double(2*i+1)/(2*uzl))*3.14)+a+b)/2;
                     parser.Evaluate(mas2[0][i]);
                     mas2[1][i]=parser.GetResult();
                     chart1->Series["Узлы"]->Points->AddXY(mas2[0][i], mas2[1][i]);
					 lv1->Items->Add( mas2[0][i]+"");
					 lv1->Items[i]->SubItems->Add( mas2[1][i]+"");
					 
				 }
                Lagrang(mas2, uzl);
             }
			 
			 //Пользовательские
			 else if (radioButton3->Checked==1)
				 {
					 for (int i=0; i<uzl; i++)
                     masss[1][i] = parser.Evaluate(masss[0][i]);
                 chart1->Series["Узлы"]->MarkerColor=Color::LightYellow;
                 chart1->Series["Узлы"]->Color=Color::Yellow;
						
			 for (int i=0; i<uzl; i++)
                     chart1->Series["Узлы"]->Points->AddXY(masss[0][i], masss[1][i]);
					Lagrang(masss, uzl);
				 }
			
			 }
		 
		 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
				 
			
				if( qwe == 0) lv1->Items->Clear();
				  masss[0][qwe] = Convert::ToInt32(textBox5->Text); 
                 lv1->Items->Add(masss[0][qwe]+"");
				 parser.Evaluate(masss[0][qwe]);
					 masss[1][qwe] = parser.GetResult();

				lv1->Items[qwe]->SubItems->Add(masss[1][qwe]+"");
				qwe++;
				textBox5->Text="";
                 
				 
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 masss=new double *[2];
				 masss[0] = new double[uzl];
				 masss[1] = new double[uzl];
		 }
};
}

