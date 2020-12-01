#pragma once

namespace FormsPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormPanier_moy
	/// </summary>
	public ref class MyFormPanier_moy : public System::Windows::Forms::Form
	{
	public:
		MyFormPanier_moy(void)
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
		~MyFormPanier_moy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label_text;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->Label_text = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Label_text
			// 
			this->Label_text->AutoSize = true;
			this->Label_text->BackColor = System::Drawing::SystemColors::Control;
			this->Label_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_text->Location = System::Drawing::Point(273, 62);
			this->Label_text->Name = L"Label_text";
			this->Label_text->Size = System::Drawing::Size(472, 32);
			this->Label_text->TabIndex = 0;
			this->Label_text->Text = L"Le prix moyen d\'un panier est de: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(320, 241);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(405, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"*display*";
			// 
			// MyFormPanier_moy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1015, 571);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Label_text);
			this->Name = L"MyFormPanier_moy";
			this->Text = L"Prix moyen d\'un panier";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
