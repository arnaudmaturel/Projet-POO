#pragma once

namespace FormsPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormSimValCom
	/// </summary>
	public ref class MyFormSimValCom : public System::Windows::Forms::Form
	{
	public:
		MyFormSimValCom(void)
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
		~MyFormSimValCom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Btn_TVA1;
	private: System::Windows::Forms::Button^ Btn_TVA2;
	private: System::Windows::Forms::Button^ Btn_TVA3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ Commit;

	private: System::Windows::Forms::TextBox^ Display;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;

	protected:

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
			this->Btn_TVA1 = (gcnew System::Windows::Forms::Button());
			this->Btn_TVA2 = (gcnew System::Windows::Forms::Button());
			this->Btn_TVA3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Commit = (gcnew System::Windows::Forms::Button());
			this->Display = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(291, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(431, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Simulateur de valeur commerciale";
			// 
			// Btn_TVA1
			// 
			this->Btn_TVA1->Location = System::Drawing::Point(88, 117);
			this->Btn_TVA1->Name = L"Btn_TVA1";
			this->Btn_TVA1->Size = System::Drawing::Size(77, 29);
			this->Btn_TVA1->TabIndex = 1;
			this->Btn_TVA1->Text = L"TVA 1";
			this->Btn_TVA1->UseVisualStyleBackColor = true;
			// 
			// Btn_TVA2
			// 
			this->Btn_TVA2->Location = System::Drawing::Point(224, 117);
			this->Btn_TVA2->Name = L"Btn_TVA2";
			this->Btn_TVA2->Size = System::Drawing::Size(77, 29);
			this->Btn_TVA2->TabIndex = 2;
			this->Btn_TVA2->Text = L"TVA 2";
			this->Btn_TVA2->UseVisualStyleBackColor = true;
			// 
			// Btn_TVA3
			// 
			this->Btn_TVA3->Location = System::Drawing::Point(364, 117);
			this->Btn_TVA3->Name = L"Btn_TVA3";
			this->Btn_TVA3->Size = System::Drawing::Size(77, 29);
			this->Btn_TVA3->TabIndex = 3;
			this->Btn_TVA3->Text = L"TVA 3";
			this->Btn_TVA3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 189);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(77, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(224, 189);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(77, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(364, 189);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(77, 22);
			this->textBox3->TabIndex = 6;
			// 
			// Commit
			// 
			this->Commit->Location = System::Drawing::Point(166, 304);
			this->Commit->Name = L"Commit";
			this->Commit->Size = System::Drawing::Size(173, 34);
			this->Commit->TabIndex = 7;
			this->Commit->Text = L"Valider les paramètres";
			this->Commit->UseVisualStyleBackColor = true;
			// 
			// Display
			// 
			this->Display->Location = System::Drawing::Point(665, 120);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(210, 22);
			this->Display->TabIndex = 8;
			this->Display->Text = L"*display*";
			// 
			// MyFormSimValCom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 557);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->Commit);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Btn_TVA3);
			this->Controls->Add(this->Btn_TVA2);
			this->Controls->Add(this->Btn_TVA1);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormSimValCom";
			this->Text = L"Simulation de valeur commerciale";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
