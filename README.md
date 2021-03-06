Neptun Calendar Export
======================
Ez a program a Neptun órarend felületéről egyszerűen kimásolható 
adatokból készít a Google Calendarba importálható .csv fájlt. 
Segít, hogy a valóságnak jobban megfelelő órarended lehessen a naptárban.

Motiváció
---------
A Neptun rendszer órarend exportáló funkciója nem mindig működik, 
sok szemetet helyez az órarendedbe, rosszul tördeli az információt, 
valamint az órák adatai a valóságban gyakran különböznek a Neptunban 
szereplőktől - elég csak a munkaszüneti napokra gondolni.

Mit tud a program
-----------------
- Páros / páratlan hét támogatás
- Munkaszüneti napok
- Szombati munkanapok
- Tavaszi szünet
- Hét sorszámának kijelzése

A Neptun webcalhoz képest ez az órarend
- Szerkeszthető: órák törölhetők, hozzáadhatók, módosíthatók
- Tartalmazza a szüneteket
- Tartalmazza a szombati munkanapokat
- Az események adatait sokkal szebben tördeli

Időigény: nagyjából 3 perc + a szerkesztés ideje

Követelmények
-------------
- Windows 10, vagy Windows 7 + .NET 4.6.1
- Chrome / Firefox / Opera / Safari

Letöltés
--------
- [**Neptun Calendar Export.exe**](https://github.com/leventerevesz/Neptun-calendar-export/raw/master/Let%C3%B6lt%C3%A9sek/Neptun-calendar-export-v1.1.exe)
- [**időszakok fájlok**](https://github.com/leventerevesz/Neptun-calendar-export/raw/master/Let%C3%B6lt%C3%A9sek/idoszakok.zip) (.zip)

Használat
---------
[Gyors használati útmutató képekkel](Hasznalati-utmutato.md)

#### Adatok lementése a Neptunból
1. A Neptun rendszer *Órarend* felületét nyisd meg
2. Válaszd a *"Heti nézetet"*
3. Jelölj ki egy "páratlan hetet"
4. A kék kereten, jobb felül nyomj rá a *"Listás nyomtatás"* gombra
5. Jelöld ki az egérrel az egész táblázatot (Ctrl-A), majd másold ki és mentsd egy .txt fájlba.  Pl. *szemeszter4-páratlan.txt*  
   Jegyzettömb használatakor mentésnél a kódolást **UTF-8**-ra állítsd!
6. Végezd el az eddigieket egy 'páros hétre' is. Ha nincs páros/páratlan hét közti különbség, ezt a lépést kihagyhatod.

#### Program használata
1. Indítsd el a programot
2. Módosíthatod a forrásfájlokat, de a formátumot őrizd meg 
   (csak konkrét időpontokon, neveken változtass). 
   Új órákat is beszúrhatsz. Ha másik napra akarsz átrakni egy órát, 
   a dátumot írd át az adott hét másik napjára. 
3. Tallózd a két forrásfájlt. Ha csak 1 van, használd azt mindkét helyre.
4. Tallózd a félév *"időszakok"* fájlját, amit itt a Letöltés pont alatt 
   találsz
5. Az "Export" gomb létrehozza az importálható .csv fájlt, add meg a 
   kívánt nevet.

#### Google import
1. Nyisd meg a https://calendar.google.com címen
2. Beállítások > Naptár felvétele > Új naptár (pl. *4. félév*)
3. Importálás és exportálás > Importálás > az **új naptárba**, és töltsd fel az elkészült csv fájlt.

Extrák
------
#### Órák alatti némítás
Néhány gyártó (pl. Samsung) naptár alkalmazása tudja ezt a funkciót.  
Ha a te eszközöd gyárilag nem képes erre, a [Calendar Mute](https://play.google.com/store/apps/details?id=com.PKH.calendarmute&hl=en_US)
 app pont erre való. Ingyenes és reklámmentes, akkut nem fogyaszt.

#### Óra sablon a forrásfájlba
*kezdés_idő* - *vég_idő*<\t>Óra<\t>*Tárgy* (*tárgykód*) - *kurzuskód* - Minden hét (*oktatók*)<\t>*terem*

- A <\t> tabulátort jelent.
- A *dőlt betűs* szavak helyettesítendők
- Az összes többi karakternek (szóközöket is beleértve) stimmelnie kell
- Az időformátum YYYY.MM.DD h:mm (Nap)  
  - példa: 2018.09.03 8:05 (Hétfő)  
  - A hónap, nap és perc mindenképp kétjegyű legyen, de az óra ne.

Névjegy
-------
Révész Levente  
2018

Visszajelzés: levente.revesz@gmail.com

Special Thanks to JOE & TP
