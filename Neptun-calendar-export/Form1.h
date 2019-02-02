#pragma once

namespace WindowsForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;	// streamreader
	using namespace System::Globalization;		// cultureinfo

												/// <summary>
												/// Az alkalmazás fõ ablaka.
												/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::CheckBox^  checkBox1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			//
			// button1
			//
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(398, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Tallózás";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			//
			// button2
			//
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Location = System::Drawing::Point(398, 62);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Tallózás";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Páratlan heti forrás";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Location = System::Drawing::Point(12, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Páros heti forrás";
			//
			// button3
			//
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Location = System::Drawing::Point(398, 169);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Export";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			//
			// openFileDialog1
			//
			this->openFileDialog1->FileName = L"openFileDialog1";
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(12, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"info";
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label4->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label4->Location = System::Drawing::Point(165, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"label4";
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label5->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label5->Location = System::Drawing::Point(165, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"label5";
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label6->Location = System::Drawing::Point(12, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Félévi adatok fájl";
			//
			// label7
			//
			this->label7->AutoSize = true;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label7->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label7->Location = System::Drawing::Point(165, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"label7";
			//
			// button4
			//
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Location = System::Drawing::Point(398, 93);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Tallózás";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			//
			// checkBox1
			//
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBox1->Location = System::Drawing::Point(15, 132);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(186, 22);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Jelezze a hét sorszámát";
			this->checkBox1->UseVisualStyleBackColor = true;
			//
			// Form1
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 204);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ref class Tanora {
			// A parse során tárolja az adott tanórához tartozó adatokat, majd az export során ebbõl olvasom ki a tanórák adatait
		public:
			DateTime ^ kezdes, ^ veg;
			int nap;
			String ^ nev, ^ terem, ^ oktato, ^ targykod, ^ kurzuskod;
		};
		ref class DatePair {
			// Két összetartozó dátumot tárol
			// A szombati munkanapokhoz használom. Kicsit túl van bonyolítva, de maradhat.
		public:
			DateTime ^ datum, ^ helyett;
			DatePair(DateTime _datum, DateTime _helyettesitett) {
				datum = _datum; helyett = _helyettesitett;
			};
		};

		// Forrásfájlok elérési helyei
		String ^paratlanhet_filename, ^paroshet_filename;

		// Forrásokból nyert adatok
		List<Tanora^> ^ paroshet, ^ paratlanhet; // Ez a feldolgozott változata a két neptunos táblázatnak

												 // Idõszakok fájlból nyert adatok
		DateTime ^ elsonap;
		List<DateTime> ^ szunetek = gcnew List<DateTime>();
		List<DatePair^> ^ szombatok = gcnew List<DatePair^>();
		int szunethete = 0;

		// Flagek amik jelzik, hogy mehet-e az export gomb
		bool idoszakok_megvan = false;
		bool paratlanforras_megvan = false;
		bool parosforras_megvan = false;

		// magyar kultúrinfó
		CultureInfo ^ CIproviderHU = gcnew CultureInfo("hu-HU");

		List<Tanora^> ^parseSourceFile(String ^filename) {
			// A forrásfájlból csinál egy List<Tanora^> listát.
			//
			//	filename: a kiválasztott fájl teljes elérési útja

			// A Neptun kétféle idõformátum közt váltogat
			String ^ idoformat1 = "yyyy.MM.dd. H:mm (dddd)";
			String ^ idoformat2 = "M/d/yyyy h:mm tt (dddd)";
			// Az oralista lesz a visszaadott érték, egy hétnyi órarend
			List<Tanora^> ^ oralista = gcnew List<Tanora^>();
			// változók a daraboláshoz
			array<String^> ^ cellak, ^ idok, ^ infok;
			String ^ sor;
			int poz_targyvege, poz_targykodvege, poz_kurzusvege, poz_oktatoeleje, poz_oktatovege;
			//
			StreamReader ^ sreader;
			// Dialog init

			sreader = gcnew StreamReader(filename);
			while (!sreader->EndOfStream) {
				sor = sreader->ReadLine();
				if (sor->Length == 0) {	// Üres sort átugorjuk
					continue;
				}
				if (System::Char::IsDigit(sor[0]) == false) { // Az érvényes sorok számmal kezdõdnek
					continue;
				}
				if (sor->Length > 0) { 
					Tanora ^ tan = gcnew Tanora();	// ide gyûjtünk adatokat
					cellak = sor->Split('\t');	// négy cella: idõk, "óra", egyéb infók, terem

												// TEREM
					tan->terem = cellak[3];

					// IDÕK
					idok = cellak[0]->Split('-');
					idok[0] = idok[0]->Trim(' ');
					idok[1] = idok[1]->Trim(' ');
					if (idok[0]->Contains("/")) {	// Ha az idõk US formátumúak
						tan->kezdes = DateTime::ParseExact(idok[0]->Replace("AM", "DE.")->Replace("PM", "DU."), idoformat2, CIproviderHU);
						tan->veg = DateTime::ParseExact(idok[1]->Replace("AM", "DE.")->Replace("PM", "DU."), idoformat2, CIproviderHU);
					}
					else {	// Ha az idõk magyar formátumúak
						tan->kezdes = DateTime::ParseExact(idok[0], idoformat1, CIproviderHU);
						tan->veg = DateTime::ParseExact(idok[1], idoformat1, CIproviderHU);
					}
					tan->nap = (int)tan->kezdes->DayOfWeek;	// hét napja számként, 1 = hétfõ

															// EGYÉB INFÓK
															// név (tárgykód) - kurzuskód - (Változó..) Minden hét (oktató) (terem)
															// fontos indexek:
					poz_targykodvege = cellak[2]->IndexOf(") - ");
					poz_targyvege = cellak[2]->LastIndexOf("(", poz_targykodvege, poz_targykodvege - 1);
					poz_kurzusvege = cellak[2]->IndexOf(" - ", poz_targykodvege + 4, 20);
					poz_oktatoeleje = cellak[2]->IndexOf("hét (", poz_kurzusvege) + 5;
					poz_oktatovege = cellak[2]->IndexOf(") ", poz_oktatoeleje);
					// indexek szerint darabolás
					tan->nev = cellak[2]->Substring(0, poz_targyvege)->Trim(' ');
					tan->targykod = cellak[2]->Substring(poz_targyvege + 1, poz_targykodvege - poz_targyvege - 1);
					tan->kurzuskod = cellak[2]->Substring(poz_targykodvege + 4, poz_kurzusvege - poz_targykodvege - 4);
					try { tan->oktato = cellak[2]->Substring(poz_oktatoeleje, poz_oktatovege - poz_oktatoeleje)->Replace(";", ", "); }
					catch (...) { tan->oktato = ""; }	// oktató nem mindig van
														// Néha az oktató helyére a terem kerül (a Neptun táblázat miatt), de ez nem zavaró

														// Ha a tárgy nevében van vesszõ, azt a csv formátum miatt kommentelni kell
					if (tan->nev->Contains(",")) tan->nev = "\"" + tan->nev + "\"";

					//System::Diagnostics::Debug::WriteLine("ora kész");
					oralista->Add(tan);
				}
			} // fájl vége
			sreader->Close();
			return oralista;
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// Páratlan heti forrásfájl gomb, beállítja a fájl elérési útját
		System::Windows::Forms::DialogResult dr;
		openFileDialog1->FileName = "";
		openFileDialog1->Filter = "Szövegfájlok (*.txt)|*.txt|Minden fájl (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		dr = openFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK) { // Ha fájl kiválasztva
			paratlanhet_filename = openFileDialog1->FileName;
			label4->Text = System::IO::Path::GetFileName(paratlanhet_filename);
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		// Páros heti forrásfájl gomb, beállítja a fájl elérési útját
		System::Windows::Forms::DialogResult dr;
		openFileDialog1->FileName = "";
		openFileDialog1->Filter = "Szövegfájlok (*.txt)|*.txt|Minden fájl (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		dr = openFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK) { // Ha fájl kiválasztva
			paroshet_filename = openFileDialog1->FileName;
			label5->Text = System::IO::Path::GetFileName(paroshet_filename);
		}
	}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Text = "Neptun Calendar Export v1.1";
		label3->Text = "";
		label4->Text = "";
		label5->Text = "";
		label7->Text = "";
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		// Az idõszakok fájlt olvassa be, beállítja a hozzá tartozó változókat

		// A fájl key = value formátumú, a komment sorok #-vel jelöltek.
		// újabb értékekkel gond nélkül bõvíthetõ.

		StreamReader ^ sreader;
		String ^ key, ^ value, ^ sor;

		// key-value párok tárolására
		Dictionary<String^, String^> ^ idoszakokDict = gcnew Dictionary<String^, String^>();

		// Dialógus init
		System::Windows::Forms::DialogResult dr;
		openFileDialog1->FileName = "";
		openFileDialog1->Filter = "Szövegfájlok (*.txt)|*.txt|Minden fájl (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		dr = openFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK) { // ha megvan a fájl
															  // BEOLVASÁS
			sreader = gcnew StreamReader(openFileDialog1->FileName);
			label7->ForeColor = System::Drawing::SystemColors::GrayText; // hiba esetén piros volt
			label7->Text = System::IO::Path::GetFileName(openFileDialog1->FileName);
			while (!sreader->EndOfStream) {
				sor = sreader->ReadLine();
				if (!sor->StartsWith("#") && sor != "") { // komment és üres sorokat nem olvas
					key = sor->Split('=')[0]->Trim(' ');
					value = sor->Split('=')[1]->Trim(' ');
					idoszakokDict->Add(key, value);
				}
			} // fájl vége
			sreader->Close();
			System::Diagnostics::Debug::WriteLine("munkaszuneti_napok :");
			System::Diagnostics::Debug::WriteLine(System::Convert::ToString(idoszakokDict["szombati_munkanapok"]->Length));
			System::Diagnostics::Debug::WriteLine("["+ idoszakokDict["szombati_munkanapok"] + "]");
			// FELDOLGOZÁS
			try {
				elsonap = DateTime::ParseExact(idoszakokDict["elso_nap"], "yyyy-MM-dd", CIproviderHU);
				szunethete = System::Convert::ToInt32(idoszakokDict["szunet_hete"]);
				// szünetek
				if (idoszakokDict["munkaszuneti_napok"] != "") {
					array<String^> ^ szunetekStrArr = idoszakokDict["munkaszuneti_napok"]->Split(',');
					for (int i = 0; i < szunetekStrArr->Length; i++) {
						szunetek->Add(DateTime::ParseExact(szunetekStrArr[i], "yyyy-MM-dd", CIproviderHU));
					}
				}
				// szombatok
				if (idoszakokDict["szombati_munkanapok"] != "") {
					array<String^> ^ szombatokStrArr = idoszakokDict["szombati_munkanapok"]->Split(',');
					for (int i = 0; i < szombatokStrArr->Length; i++) {
						array<String^> ^ dpArr = szombatokStrArr[i]->Split('/');
						DatePair ^ dp = gcnew DatePair(DateTime::ParseExact(dpArr[0], "yyyy-MM-dd", CIproviderHU),
							DateTime::ParseExact(dpArr[1], "yyyy-MM-dd", CIproviderHU));
						szombatok->Add(dp);
					}
				}
				idoszakok_megvan = true;
			}
			catch (KeyNotFoundException ^ e1) {
				label7->ForeColor = System::Drawing::Color::Red;
				label7->Text = "[Hiba] " + label7->Text;
				idoszakok_megvan = false;
			}
		}
		else { // Dialógusban MÉGSE
			label7->Text = "";
			idoszakok_megvan = false;
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		// Páratlan heti forrásfájl beolvasása
		if (label4->Text != "") paratlanhet = parseSourceFile(paratlanhet_filename);
		if (paratlanhet != nullptr)	paratlanforras_megvan = true;
		else {
			paratlanforras_megvan = false;
			label3->Text = "Nem találom a páratlan heti forrást.";
		}
		// Páros heti forrásfájl beolvasása
		if (label5->Text != "") paroshet = parseSourceFile(paroshet_filename);
		if (paroshet != nullptr) parosforras_megvan = true;
		else {
			parosforras_megvan = false;
			label3->Text = "Nem találom a páros heti forrást.";
		}
		if (!(parosforras_megvan || paratlanforras_megvan)) { // mindkettõ hiányzik
			label3->Text = "Nem találom a forrásfájlokat.";
		}

		// CSV Export
		StreamWriter ^ swriter;
		List<Tanora^> ^ akthet; // a paroshet vagy a paratlanhet listára mutat
		Tanora ^ tan;
		int hetOffset = 0; // a tavaszi szünethez kell

						   // Dialog init
		saveFileDialog1->Filter = "CSV fájlok (*.csv)|*.csv";
		saveFileDialog1->RestoreDirectory = true;
		System::Windows::Forms::DialogResult dr;
		if (idoszakok_megvan && paratlanforras_megvan && parosforras_megvan) {
			dr = saveFileDialog1->ShowDialog();
			if (dr == System::Windows::Forms::DialogResult::OK) { // fájl kiválasztva
				swriter = gcnew StreamWriter(saveFileDialog1->FileName);
				swriter->AutoFlush = true;
				// fejléc
				swriter->WriteLine("Subject,Start Date,Start Time,End Date,End Time,Description,Location, All Day Event");
				for (int het = 1; het <= 14; het++) {
					if (het % 2 == 0) { akthet = paroshet; }
					else { akthet = paratlanhet; }
					if (het == szunethete) hetOffset = 1;
					// hét sorszáma hétfõi egész napos eseményként
					if (checkBox1->Checked == true) {
						String ^nev = Convert::ToString(het) + ". hét";
						DateTime ^datum = elsonap->AddDays((het - 1 + hetOffset) * 7);
						String ^ sor = String::Join(",",
							nev, datum->ToString("dd.MM.yyyy"), "8:00",
							datum->ToString("dd.MM.yyyy"), "8:01", "", "", "True");
						swriter->WriteLine(sor);
					}
					// Hét óráinak elkészítése
					for (int i = 0; i < akthet->Count; i++) {
						tan = akthet[i]; // Tanóra ^ tan
						DateTime ^ datum = elsonap->AddDays((het - 1 + hetOffset) * 7 + tan->nap - 1);
						if (szunetek->Contains(*datum)) { // Ha az adott nap szünet
							for (int i = 0; i < szombatok->Count; i++) { // Ha van szombati pótlása, rakja át az órát oda
								if (datum->Equals(szombatok[i]->helyett)) {
									datum = szombatok[i]->datum;
									break;
								}
							}
						}
						// írás
						String ^ sor = String::Join(",",
							tan->nev,
							datum->ToString("dd.MM.yyyy"),
							tan->kezdes->ToString("H:mm"),
							datum->ToString("dd.MM.yyyy"),
							tan->veg->ToString("H:mm"),
							"\"" + tan->kurzuskod + " | " + tan->targykod + " | " + tan->oktato + "\"",
							tan->terem,
							"False");
						if (!szunetek->Contains(*datum)) // Ha a nap nem szünet, akkor írja
							swriter->WriteLine(sor); 
					} // óra (rekord) kész
				}
				label3->Text = "Az órarend elkészült. Bezárhatod a programot.";
				swriter->Close();
			}
		}
	}
	};
}
