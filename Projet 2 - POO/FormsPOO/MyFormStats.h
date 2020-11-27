#pragma once

namespace FormsPOOstats {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyFormStats : public System::Windows::Forms::Form
	{
	public:
		MyFormStats(void)
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
		~MyFormStats()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;








	protected:

	protected:




	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::Label^ label3;
			System::Windows::Forms::Label^ label4;
			System::Windows::Forms::Label^ label5;
			System::Windows::Forms::Label^ label6;
			System::Windows::Forms::Label^ label7;
			System::Windows::Forms::Label^ label8;
			System::Windows::Forms::Label^ label9;
			System::Windows::Forms::Label^ label10;
			System::Windows::Forms::Label^ label11;
			System::Windows::Forms::Label^ label12;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormStats::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			label1 = (gcnew System::Windows::Forms::Label());
			label2 = (gcnew System::Windows::Forms::Label());
			label3 = (gcnew System::Windows::Forms::Label());
			label4 = (gcnew System::Windows::Forms::Label());
			label5 = (gcnew System::Windows::Forms::Label());
			label6 = (gcnew System::Windows::Forms::Label());
			label7 = (gcnew System::Windows::Forms::Label());
			label8 = (gcnew System::Windows::Forms::Label());
			label9 = (gcnew System::Windows::Forms::Label());
			label10 = (gcnew System::Windows::Forms::Label());
			label11 = (gcnew System::Windows::Forms::Label());
			label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->Location = System::Drawing::Point(17, 19);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(325, 32);
			label1->TabIndex = 0;
			label1->Text = L"Prix moyen d\'un panier";
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->Location = System::Drawing::Point(866, 19);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(280, 32);
			label2->TabIndex = 1;
			label2->Text = L"Montant des achats";
			label2->Click += gcnew System::EventHandler(this, &MyFormStats::label2_Click);
			// 
			// label3
			// 
			label3->AutoSize = true;
			label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label3->Location = System::Drawing::Point(9, 198);
			label3->Name = L"label3";
			label3->Size = System::Drawing::Size(413, 32);
			label3->TabIndex = 2;
			label3->Text = L"Top 10 des meilleures ventes";
			// 
			// label4
			// 
			label4->AutoSize = true;
			label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label4->Location = System::Drawing::Point(1342, 268);
			label4->Name = L"label4";
			label4->Size = System::Drawing::Size(325, 32);
			label4->TabIndex = 3;
			label4->Text = L"Prix moyen d\'un panier";
			// 
			// label5
			// 
			label5->AutoSize = true;
			label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label5->Location = System::Drawing::Point(1667, 318);
			label5->Name = L"label5";
			label5->Size = System::Drawing::Size(325, 32);
			label5->TabIndex = 4;
			label5->Text = L"Prix moyen d\'un panier";
			// 
			// label6
			// 
			label6->AutoSize = true;
			label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label6->Location = System::Drawing::Point(1992, 118);
			label6->Name = L"label6";
			label6->Size = System::Drawing::Size(325, 32);
			label6->TabIndex = 5;
			label6->Text = L"Prix moyen d\'un panier";
			// 
			// label7
			// 
			label7->AutoSize = true;
			label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label7->Location = System::Drawing::Point(459, 412);
			label7->Name = L"label7";
			label7->Size = System::Drawing::Size(361, 32);
			label7->TabIndex = 6;
			label7->Text = L"Chiffre d\'affaire d\'un mois";
			// 
			// label8
			// 
			label8->AutoSize = true;
			label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label8->Location = System::Drawing::Point(-8, 412);
			label8->Name = L"label8";
			label8->Size = System::Drawing::Size(464, 32);
			label8->TabIndex = 7;
			label8->Text = L"Produit à commander en urgence";
			label8->Click += gcnew System::EventHandler(this, &MyFormStats::label8_Click);
			// 
			// label9
			// 
			label9->AutoSize = true;
			label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label9->Location = System::Drawing::Point(428, 198);
			label9->Name = L"label9";
			label9->Size = System::Drawing::Size(339, 32);
			label9->TabIndex = 8;
			label9->Text = L"Top 10 des pires ventes";
			label9->Click += gcnew System::EventHandler(this, &MyFormStats::label9_Click);
			// 
			// label10
			// 
			label10->AutoSize = true;
			label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label10->Location = System::Drawing::Point(773, 198);
			label10->Name = L"label10";
			label10->Size = System::Drawing::Size(405, 32);
			label10->TabIndex = 9;
			label10->Text = L"Valeur commerciale du stock";
			label10->Click += gcnew System::EventHandler(this, &MyFormStats::label10_Click);
			// 
			// label11
			// 
			label11->AutoSize = true;
			label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label11->Location = System::Drawing::Point(826, 412);
			label11->Name = L"label11";
			label11->Size = System::Drawing::Size(331, 32);
			label11->TabIndex = 10;
			label11->Text = L"Valeur d\'achat du stock";
			// 
			// label12
			// 
			label12->AutoSize = true;
			label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label12->Location = System::Drawing::Point(348, 19);
			label12->Name = L"label12";
			label12->Size = System::Drawing::Size(474, 32);
			label12->TabIndex = 11;
			label12->Text = L"Simulation de valeur commerciale";
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(98, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 131);
			this->button1->TabIndex = 12;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(534, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 131);
			this->button2->TabIndex = 13;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(954, 64);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 131);
			this->button3->TabIndex = 14;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(98, 267);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(131, 131);
			this->button4->TabIndex = 15;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(534, 267);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(131, 131);
			this->button5->TabIndex = 16;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(954, 267);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(131, 131);
			this->button6->TabIndex = 17;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(98, 459);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(131, 131);
			this->button7->TabIndex = 18;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(534, 459);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(131, 131);
			this->button8->TabIndex = 19;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(954, 459);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(131, 131);
			this->button9->TabIndex = 20;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// MyFormStats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 602);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(label12);
			this->Controls->Add(label11);
			this->Controls->Add(label10);
			this->Controls->Add(label9);
			this->Controls->Add(label8);
			this->Controls->Add(label7);
			this->Controls->Add(label6);
			this->Controls->Add(label5);
			this->Controls->Add(label4);
			this->Controls->Add(label3);
			this->Controls->Add(label2);
			this->Controls->Add(label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormStats";
			this->Text = L"Statistique de l\'entreprise";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
