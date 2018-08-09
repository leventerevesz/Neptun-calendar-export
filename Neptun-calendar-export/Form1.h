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
/// Summary for Form1
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(398, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Tall�z�s";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(398, 62);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Tall�z�s";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"P�ratlan heti forr�s";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"P�ros heti forr�s";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(398, 146);
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
			this->label3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label3->Location = System::Drawing::Point(12, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"info";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
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
			this->label6->Location = System::Drawing::Point(12, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"F�l�vi adatok f�jl";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label7->Location = System::Drawing::Point(165, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"label7";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(398, 93);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Tall�z�s";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 194);
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
		public:
			DateTime ^ kezdes, ^ veg;
			int nap;
			String ^ nev, ^ terem, ^ oktato, ^ targykod, ^ kurzuskod;
		};
		ref class DatePair {
		public:
			DateTime ^ datum, ^ helyett;
			DatePair(DateTime _datum, DateTime _helyettesitett) {
				datum = _datum; helyett = _helyettesitett;
			};
		};
		
		List<Tanora^> ^ paroshet, ^ paratlanhet;
		DateTime ^ elsonap;
		List<DateTime> ^ szunetek = gcnew List<DateTime>();
		List<DatePair^> ^ szombatok = gcnew List<DatePair^>();
		int szunethete = 0;
		bool idoszakok_megvan = false;
		bool paratlanforras_megvan = false;
		bool parosforras_megvan = false;
		CultureInfo ^ CIprovider = gcnew CultureInfo("hu-HU");

		List<Tanora^> ^parseSourceFile(System::Windows::Forms::Label ^pathLabel) {
			// A forr�sf�jlb�l csin�l egy List<Tanora^> list�t.

			System::Windows::Forms::DialogResult dr;
			String ^ idoformat = "yyyy.MM.dd. H:mm (dddd)";
			String ^ sor;
			//array<Tanora^> ^ oralista = gcnew array<Tanora^>(0);
			List<Tanora^> ^ oralista = gcnew List<Tanora^>();
			array<String^> ^ cellak, ^ idok, ^ infok;
			StreamReader ^ sreader;
			array<String^> ^separators = gcnew array<String^>{ " - " };
			openFileDialog1->FileName = "";
			openFileDialog1->Filter = "Sz�vegf�jlok (*.txt)|*.txt|Minden f�jl (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			dr = openFileDialog1->ShowDialog();
			if (dr == System::Windows::Forms::DialogResult::OK) {
				sreader = gcnew StreamReader(openFileDialog1->FileName);
				pathLabel->Text = System::IO::Path::GetFileName(openFileDialog1->FileName);
				while (!sreader->EndOfStream) {
					sor = sreader->ReadLine();
					if (sor->Length > 0) {
						Tanora ^ tan = gcnew Tanora();
						cellak = sor->Split('\t');
						// terem
						tan->terem = cellak[3];
						// id�k
						idok = cellak[0]->Split('-');
						tan->kezdes = DateTime::ParseExact(idok[0]->Trim(' '), idoformat, CIprovider);
						tan->veg = DateTime::ParseExact(idok[1]->Trim(' '), idoformat, CIprovider);
						tan->nap = (int)tan->kezdes->DayOfWeek;
						// egy�b inf�k
						// n�v (t�rgyk�d), kurzusk�d, (V�ltoz�..) Minden h�t (oktat�) (terem)
						infok = cellak[2]->Split(separators, StringSplitOptions::RemoveEmptyEntries);
						int poz1 = infok[0]->LastIndexOf('(');
						tan->nev = infok[0]->Substring(0, poz1)->Trim(' ');
						if (tan->nev->Contains(","))
							tan->nev = "\"" + tan->nev + "\"";
						tan->targykod = infok[0]->Substring(poz1 + 1)->Trim(')');
						tan->kurzuskod = infok[1];
						int poz2 = infok[2]->LastIndexOf(" h�t ");
						int poz3 = infok[2]->IndexOf("(", poz2);
						int poz4 = infok[2]->IndexOf(")", poz2);
						tan->oktato = infok[2]->Substring(poz3 + 1, poz4 - poz3 - 1);

						oralista->Add(tan);
					}
				}
				sreader->Close();
				return oralista;
			}
			else {
				pathLabel->Text = "";
				return nullptr;
			}
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		paratlanhet = parseSourceFile(label4);
		if (paratlanhet != nullptr)
			paratlanforras_megvan = true;
		else
			paratlanforras_megvan = false;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		paroshet = parseSourceFile(label5);
		if (paroshet != nullptr)
			parosforras_megvan = true;
		else
			parosforras_megvan = false;
	}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		this->Text = "Neptun Calendar Export v1.0";
		label3->Text = "";
		label4->Text = "";
		label5->Text = "";
		label7->Text = "";
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		// Az id�szakok f�jlt olvassa be.

		System::Windows::Forms::DialogResult dr;
		StreamReader ^ sreader;
		String ^ key, ^ value, ^ sor;
		Dictionary<String^, String^> ^ idoszakokDict = gcnew Dictionary<String^, String^>();
		openFileDialog1->FileName = "";
		openFileDialog1->Filter = "Sz�vegf�jlok (*.txt)|*.txt|Minden f�jl (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		dr = openFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK) {
			sreader = gcnew StreamReader(openFileDialog1->FileName);
			label7->ForeColor = System::Drawing::SystemColors::GrayText;
			label7->Text = System::IO::Path::GetFileName(openFileDialog1->FileName);
			while (!sreader->EndOfStream) {
				sor = sreader->ReadLine();
				if (!sor->StartsWith("//") && sor != "") { // komment �s �res sorokat nem olvas
					key = sor->Trim('#', ' ');
					value = sreader->ReadLine();
					idoszakokDict->Add(key, value);
				}
			}
			sreader->Close();
			try {
				elsonap = DateTime::ParseExact(idoszakokDict["elso nap"], "yyyy-MM-dd", CIprovider);
				szunethete = System::Convert::ToInt32(idoszakokDict["szunet hete"]);
				array<String^> ^ szunetekStrArr = idoszakokDict["munkaszuneti napok"]->Split(',');
				for (int i = 0; i < szunetekStrArr->Length; i++)
					szunetek->Add(DateTime::ParseExact(szunetekStrArr[i], "yyyy-MM-dd", CIprovider));
				array<String^> ^ szombatokStrArr = idoszakokDict["szombati munkanapok"]->Split(',');
				for (int i = 0; i < szombatokStrArr->Length; i++) {
					array<String^> ^ dpArr = szombatokStrArr[i]->Split('/');
					DatePair ^ dp = gcnew DatePair(DateTime::ParseExact(dpArr[0], "yyyy-MM-dd", CIprovider),
						DateTime::ParseExact(dpArr[1], "yyyy-MM-dd", CIprovider));
					szombatok->Add(dp);
				}
				idoszakok_megvan = true;
			}
			catch (KeyNotFoundException ^ e1) {
				label7->ForeColor= System::Drawing::Color::Red;
				label7->Text = "[!] " + label7->Text;
			}
		}
		else { // Dial�gusban M�GSE
			label7->Text = "";
			idoszakok_megvan = false;
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		// Export

		StreamWriter ^ swriter;
		List<Tanora^> ^ akthet;
		Tanora ^ tan;
		int hetOffset = 0;
		System::Windows::Forms::DialogResult dr;
		saveFileDialog1->Filter = "CSV f�jlok (*.csv)|*.csv";
		saveFileDialog1->RestoreDirectory = true;
		if (idoszakok_megvan && paratlanforras_megvan && parosforras_megvan) {
			dr = saveFileDialog1->ShowDialog();
			if (dr == System::Windows::Forms::DialogResult::OK)
			{
				swriter = gcnew StreamWriter(saveFileDialog1->FileName);
				swriter->AutoFlush = true;
				swriter->WriteLine("Subject,Start Date,Start Time,End Date,End Time,Description,Location");
				for (int het = 0; het < 14; het++) {
					if (het % 2 == 1)
						akthet = paroshet;
					else
						akthet = paratlanhet;
					if (het+1 == szunethete) // +1 mert a het 0-val kezd�dik
						hetOffset = 1;
					for (int i = 0; i < akthet->Count; i++) {
						tan = akthet[i];
						DateTime ^datum = elsonap->AddDays((het+hetOffset) * 7 + tan->nap - 1);
						if (szunetek->Contains(*datum)) {
							for (int i = 0; i < szombatok->Count; i++) {
								if (datum->Equals(szombatok[i]->helyett)) {
									datum = szombatok[i]->datum;
									break;
								}
							}
						}
						String ^ sor = String::Join(",",
							tan->nev, datum->ToString("dd.MM.yyyy"),
							tan->kezdes->ToString("H:mm"),
							datum->ToString("dd.MM.yyyy"),
							tan->veg->ToString("H:mm"),
							tan->kurzuskod + " | " + tan->targykod + " | " + tan->oktato, tan->terem);
						if (!szunetek->Contains(*datum))
							swriter->WriteLine(sor);
					}
				}
				label3->Text = "K�sz.";
			}
		}
	}

};
}
