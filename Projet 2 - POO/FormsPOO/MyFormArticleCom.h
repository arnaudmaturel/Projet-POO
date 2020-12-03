#pragma once

namespace FormsPOOarticleCom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de MyFormArticleCom
	/// </summary>
	public ref class MyFormArticleCom : public System::Windows::Forms::Form
	{
	public:
		MyFormArticleCom(void)
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
		~MyFormArticleCom()
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
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(81, 126);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Référence article :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(355, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Référence commande :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(105, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(259, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Quantité article :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(370, 126);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(301, 33);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(370, 165);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(301, 33);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(370, 204);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(301, 33);
			this->textBox3->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(691, 126);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(434, 291);
			this->dataGridView1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 382);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 35);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormArticleCom::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(163, 382);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 35);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormArticleCom::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(314, 382);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 35);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormArticleCom::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(691, 72);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(171, 35);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Chercher";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormArticleCom::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(868, 72);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(171, 35);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Tout afficher";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormArticleCom::button5_Click);
			// 
			// MyFormArticleCom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1137, 429);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormArticleCom";
			this->Text = L"MyFormArticleCom";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Go
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int ref_art= Int32::Parse(textBox1->Text);

			MySqlCommand^ cmd = gcnew MySqlCommand("select * from integrer where id_commande=" + ref_art + "", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				textBox2->Text = dr->GetString(1);
				textBox3->Text = dr->GetString(2);
			}
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Fetch
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select integrer.reference_article, integrer.id_commande, integrer.quantite_article_commande, article.designation from integrer inner join article on integrer.reference_article = article.reference_article", con);
			DataTable^ dt = gcnew DataTable();

			sda->Fill(dt);

			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Insert
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int ref_art = Int32::Parse(textBox1->Text);
			int id_com = Int32::Parse(textBox2->Text);
			int quantite_art = Int32::Parse(textBox3->Text);

			MySqlCommand^ cmd1 = gcnew MySqlCommand("insert into integrer values(" + ref_art + "," + id_com + "," + quantite_art + ")", con);
			MySqlDataReader^ dr1;

			con->Open();
			dr1 = cmd1->ExecuteReader();
			con->Close();

			MySqlCommand^ cmd2 = gcnew MySqlCommand("INSERT INTO prix_commande(ID_COMMANDE,ID_ARTICLE) VALUES(" + id_com + "," + ref_art + ")", con);
			MySqlDataReader^ dr2;

			con->Open();
			dr2 = cmd2->ExecuteReader();
			con->Close();

			// Update nombre articles
			MySqlCommand^ cmd3 = gcnew MySqlCommand("UPDATE prix_commande SET NOMBRE_ARTICLE=(SELECT integrer.QUANTITE_ARTICLE_COMMANDE FROM integrer INNER JOIN commande ON integrer.ID_COMMANDE = commande.ID_COMMANDE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + ") WHERE ID_COMMANDE = " + id_com + " AND ID_ARTICLE = " + ref_art + "", con);
			MySqlDataReader^ dr3;

			con->Open();
			dr3 = cmd3->ExecuteReader();
			con->Close();

			// Update du calcul des prix
			MySqlCommand^ cmd4 = gcnew MySqlCommand("UPDATE prix_commande SET PRIX_HT=(SELECT article.PRIX_HT * integrer.QUANTITE_ARTICLE_COMMANDE FROM article INNER JOIN integrer ON article.REFERENCE_ARTICLE = integrer.REFERENCE_ARTICLE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + "), COUT_TVA=(SELECT (((article.TAUX_TVA / " + 100 + ") * article.PRIX_HT) * integrer.QUANTITE_ARTICLE_COMMANDE) FROM article INNER JOIN integrer ON article.REFERENCE_ARTICLE = integrer.REFERENCE_ARTICLE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + "),PRIX_TTC=(SELECT article.PRIX_TTC * integrer.QUANTITE_ARTICLE_COMMANDE FROM article INNER JOIN integrer ON article.REFERENCE_ARTICLE = integrer.REFERENCE_ARTICLE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + ") WHERE ID_COMMANDE = " + id_com + " AND ID_ARTICLE = " + ref_art + "", con);
			MySqlDataReader^ dr4;

			con->Open();
			dr4 = cmd4->ExecuteReader();
			con->Close();

			// Update du calcul des prix
			MySqlCommand^ cmd5 = gcnew MySqlCommand("UPDATE commande SET commande.PRIX_TOTAL_HT=(SELECT SUM(PRIX_HT) FROM prix_commande INNER JOIN integrer ON prix_commande.ID_COMMANDE = integrer.ID_COMMANDE),commande.PRIX_TOTAL_TTC=(SELECT SUM(PRIX_TTC) FROM prix_commande INNER JOIN integrer ON prix_commande.ID_COMMANDE = integrer.ID_COMMANDE),commande.COUT_TOTAL_TVA=(SELECT SUM(COUT_TVA) FROM prix_commande INNER JOIN integrer ON prix_commande.ID_COMMANDE = integrer.ID_COMMANDE) WHERE commande.ID_COMMANDE = " + id_com + "", con);
			MySqlDataReader^ dr5;

			con->Open();
			dr5 = cmd5->ExecuteReader();
			MessageBox::Show("Les articles de la commande ont été enregistrés");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Update
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int ref_art = Int32::Parse(textBox1->Text);
			int id_com = Int32::Parse(textBox2->Text);
			int quantite_art = Int32::Parse(textBox3->Text);

			MySqlCommand^ cmd = gcnew MySqlCommand("update integrer set id_commande=" + id_com + ", quantite_article_commande" + quantite_art + " where reference_article=" + ref_art + "", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			// Update nombre articles
			MySqlCommand^ cmd3 = gcnew MySqlCommand("UPDATE prix_commande SET NOMBRE_ARTICLE=(SELECT integrer.QUANTITE_ARTICLE_COMMANDE FROM integrer INNER JOIN commande ON integrer.ID_COMMANDE = commande.ID_COMMANDE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + ") WHERE ID_COMMANDE = " + id_com + " AND ID_ARTICLE = " + ref_art + "", con);
			MySqlDataReader^ dr3;

			con->Open();
			dr3 = cmd3->ExecuteReader();
			con->Close();

			// Update du calcul des prix
			MySqlCommand^ cmd4 = gcnew MySqlCommand("UPDATE prix_commande SET PRIX_HT=(SELECT article.PRIX_HT * integrer.QUANTITE_ARTICLE_COMMANDE FROM article INNER JOIN integrer ON article.REFERENCE_ARTICLE = integrer.REFERENCE_ARTICLE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + "), COUT_TVA=(SELECT (((article.TAUX_TVA / " + 100 + ") * article.PRIX_HT) * integrer.QUANTITE_ARTICLE_COMMANDE) FROM article INNER JOIN integrer ON article.REFERENCE_ARTICLE = integrer.REFERENCE_ARTICLE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + "),PRIX_TTC=(SELECT article.PRIX_TTC * integrer.QUANTITE_ARTICLE_COMMANDE FROM article INNER JOIN integrer ON article.REFERENCE_ARTICLE = integrer.REFERENCE_ARTICLE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + ") WHERE ID_COMMANDE = " + id_com + " AND ID_ARTICLE = " + ref_art + "", con);
			MySqlDataReader^ dr4;

			con->Open();
			dr4 = cmd4->ExecuteReader();
			con->Close();

			// Update du calcul des prix
			MySqlCommand^ cmd5 = gcnew MySqlCommand("UPDATE commande SET commande.PRIX_TOTAL_HT=(SELECT SUM(PRIX_HT) FROM prix_commande INNER JOIN integrer ON prix_commande.ID_COMMANDE = integrer.ID_COMMANDE),commande.PRIX_TOTAL_TTC=(SELECT SUM(PRIX_TTC) FROM prix_commande INNER JOIN integrer ON prix_commande.ID_COMMANDE = integrer.ID_COMMANDE),commande.COUT_TOTAL_TVA=(SELECT SUM(COUT_TVA) FROM prix_commande INNER JOIN integrer ON prix_commande.ID_COMMANDE = integrer.ID_COMMANDE) WHERE commande.ID_COMMANDE = " + id_com + "", con);
			MySqlDataReader^ dr5;

			con->Open();
			dr5 = cmd5->ExecuteReader();
			MessageBox::Show("Les articles de la commande ont été modifiés");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Delete
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int ref_art = Int32::Parse(textBox1->Text);
			int id_com = Int32::Parse(textBox2->Text);
			int quantite_art = Int32::Parse(textBox3->Text);

			MySqlCommand^ cmd = gcnew MySqlCommand("delete from integrer where reference_article=" + ref_art + "", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			// Update nombre articles
			MySqlCommand^ cmd3 = gcnew MySqlCommand("UPDATE prix_commande SET NOMBRE_ARTICLE=(SELECT integrer.QUANTITE_ARTICLE_COMMANDE FROM integrer INNER JOIN commande ON integrer.ID_COMMANDE = commande.ID_COMMANDE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + ") WHERE ID_COMMANDE = " + id_com + " AND ID_ARTICLE = " + ref_art + "", con);
			MySqlDataReader^ dr3;

			con->Open();
			dr3 = cmd3->ExecuteReader();
			con->Close();

			// Update du calcul des prix
			MySqlCommand^ cmd4 = gcnew MySqlCommand("UPDATE prix_commande SET PRIX_HT=(SELECT article.PRIX_HT * integrer.QUANTITE_ARTICLE_COMMANDE FROM article INNER JOIN integrer ON article.REFERENCE_ARTICLE = integrer.REFERENCE_ARTICLE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + "), COUT_TVA=(SELECT (((article.TAUX_TVA / " + 100 + ") * article.PRIX_HT) * integrer.QUANTITE_ARTICLE_COMMANDE) FROM article INNER JOIN integrer ON article.REFERENCE_ARTICLE = integrer.REFERENCE_ARTICLE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + "),PRIX_TTC=(SELECT article.PRIX_TTC * integrer.QUANTITE_ARTICLE_COMMANDE FROM article INNER JOIN integrer ON article.REFERENCE_ARTICLE = integrer.REFERENCE_ARTICLE WHERE integrer.REFERENCE_ARTICLE = " + ref_art + " AND integrer.ID_COMMANDE = " + id_com + ") WHERE ID_COMMANDE = " + id_com + " AND ID_ARTICLE = " + ref_art + "", con);
			MySqlDataReader^ dr4;

			con->Open();
			dr4 = cmd4->ExecuteReader();
			con->Close();

			// Update du calcul des prix
			MySqlCommand^ cmd5 = gcnew MySqlCommand("UPDATE commande SET commande.PRIX_TOTAL_HT=(SELECT SUM(PRIX_HT) FROM prix_commande INNER JOIN integrer ON prix_commande.ID_COMMANDE = integrer.ID_COMMANDE),commande.PRIX_TOTAL_TTC=(SELECT SUM(PRIX_TTC) FROM prix_commande INNER JOIN integrer ON prix_commande.ID_COMMANDE = integrer.ID_COMMANDE),commande.COUT_TOTAL_TVA=(SELECT SUM(COUT_TVA) FROM prix_commande INNER JOIN integrer ON prix_commande.ID_COMMANDE = integrer.ID_COMMANDE) WHERE commande.ID_COMMANDE = " + id_com + "", con);
			MySqlDataReader^ dr5;

			con->Open();
			dr5 = cmd5->ExecuteReader();
			MessageBox::Show("Les articles de la commande ont été supprimés");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
