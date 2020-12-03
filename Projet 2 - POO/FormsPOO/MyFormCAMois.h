#pragma once

namespace FormsPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de MyFormCAMois
	/// </summary>
	public ref class MyFormCAMois : public System::Windows::Forms::Form
	{
	public:
		MyFormCAMois(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormCAMois()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(351, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Chiffre d\'affaire du mois";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(166, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mois: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(166, 227);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Année: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(352, 237);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 22);
			this->textBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(249, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 32);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Calculer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCAMois::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(352, 91);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(75, 21);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Janvier";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(352, 130);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(73, 21);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Février";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(352, 167);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(60, 21);
			this->radioButton3->TabIndex = 9;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Mars";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(495, 91);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(56, 21);
			this->radioButton4->TabIndex = 10;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Avril";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(495, 130);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(51, 21);
			this->radioButton5->TabIndex = 11;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Mai";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(495, 167);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(55, 21);
			this->radioButton6->TabIndex = 12;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Juin";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton6_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(636, 91);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(65, 21);
			this->radioButton7->TabIndex = 13;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Juillet";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(636, 130);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(58, 21);
			this->radioButton8->TabIndex = 14;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Août";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton8_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(636, 167);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(98, 21);
			this->radioButton9->TabIndex = 15;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Septembre";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton9_CheckedChanged);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(786, 91);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(80, 21);
			this->radioButton10->TabIndex = 18;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Octobre";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton10_CheckedChanged);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(786, 130);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(94, 21);
			this->radioButton11->TabIndex = 17;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"Novembre";
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton11_CheckedChanged);
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(786, 167);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(94, 21);
			this->radioButton12->TabIndex = 16;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"Décembre";
			this->radioButton12->UseVisualStyleBackColor = true;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &MyFormCAMois::radioButton12_CheckedChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(563, 274);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(412, 150);
			this->dataGridView1->TabIndex = 19;
			// 
			// MyFormCAMois
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1034, 557);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->radioButton10);
			this->Controls->Add(this->radioButton11);
			this->Controls->Add(this->radioButton12);
			this->Controls->Add(this->radioButton9);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormCAMois";
			this->Text = L"MyFormCAMois";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	static String^ Month;
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "01";
}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "02";
}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "03";
}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "04";
}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "05";
}
	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "06";
}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "07";
}
	private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "08";
}
	private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "09";
}
	private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "10";
}
	private: System::Void radioButton11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "11";
}
	private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Month = "12";
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int Year = Int32::Parse(textBox1->Text);
			int DayE;
			//requête: 
			if (Month == "04" || Month == "06" || Month == "09" || Month == "11") {
				DayE = 30;
			}
			else if (Month == "02") {
				DayE = 28;
			}
			else {
				DayE = 31;
			}

			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT SUM(paiement.MONTANT_PAIEMENT) AS ChiffeDAffaire FROM paiement WHERE paiement.DATE_PAIEMENT BETWEEN " + Year + "-" + Month + "-01 AND " + Year + "-" + Month + "-" + DayE, con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
}
