# Neptun-calendar-export

Ez a program a Neptun órarend felületéről egyszerűen kimásolható adatokból készít a Google Calendarba importálható .csv fájlt.

## Motiváció
A Neptun rendszer órarend exportáló funkciója nem működik, valamint az órák adatai a valóságban gyakran különböznek a Neptunban szereplőktől.

Célszerű a Google Calendarba importálni az órarendet, mert
- ingyenes
- jól használható
- órák alatt tudja némítani az eszközt
- minden eszközödön szinkronizál
- könnyen megosztható az órarend

## Követelmények
- Windows 10 (?)

## Használat
#### Adatok lementése a Neptunból
1. A Neptun felület *Órarend* felületét nyisd meg
2. Válaszd a *"Heti nézetet"*
3. Jelölj ki egy "páratlan hetet"
4. A kék kereten, jobb felül nyomj rá a *"Listás nyomtatás"* gombra
5. Jelöld ki az egérrel az egész táblázatot **fejléc nélkül**, majd másold ki és mentsd egy .txt fájlba.  Pl. *szemeszter4-páratlan.txt*
6. Végezd el az eddigieket egy 'páros hétre' is

#### Program használata
1. Indítsd el a programot
2. Módosíthatod a forrásfájlokat, de a formátumot őrizd meg (csak konkrét időpontokon, neveken változtass). Új órákat is beszúrhatsz
3. Tallózd a két forrásfájlt
4. Tallózd a félév *"időszakok"* fájlját, amit a githubon találsz
5. Az "Export" gomb létrehozza az importálható .csv fájlt, add meg a kívánt nevet

#### Google import
1. Nyisd meg a https://calendar.google.com címen
2. Beállítások > Naptár felvétele > Új naptár (pl. *4. félév*)
3. Importálás és exportálás > Importálás > az **új naptárba**.

## Készítette
Révész Levente, 2018  
Special Thanks to JOE & TP
