# Problema-combustibil
O mare companie de transport are un parc auto format din mașini de trei tipuri: benzină, diesel și hibrid (benzină + baterie). Fiecare din aceste mașini consumă o anumită cantitate de combustibil la suta de kilometri. Se știe că benzina costă 5.8 RON/l, motorina este 6 RON/L iar energia electrică este 1 RON/KWh. Pentru mașinile pe benzină și diesel se dă consumul mediu în l/100km iar pentru cele hibride se dă consumul mediu de combustibil (în l/100km) precum și consumul mediu de energie electrică în KWh/100km.

Cerințe pentru punctaj maxim
Să se creeze o clasă cu numele Car cu următoarele specificații:
- clasa trebuie să conțină 2 atribute protected numite mType și mConsume, primul de tip string, iar al doilea număr fracționar pe simplă precizie;
- clasa trebuie să fie abstractă. Abstractizarea se va face prin crearea a 2 metode publice pur virtual numite print și calculateConsume. Aceste metode nu vor returna nimic și nu primesc niciun parametru;
- clasa trebuie să conțină o metodă publică fără niciun parametru numită getConsume. Aceasta trebuie să întoarcă valoarea atributului mConsume. Tipul de dată returnat al metodei trebuie să îl deduceți voi.

Să se creeze o clasă cu numele Gas cu următoarele specificații:
- clasa trebuie să fie moștenită din clasa Car;
- clasa trebuie să conțină un atribut private numit mGas, de tip fracționar pe simplă precizie;
- clasa trebuie să conțină un constructor public cu un singur parametru care să inițializeze atributul mGas cu valoarea specificată. De asemenea, se va seta valoarea atributul mType cu textul "benzina";
- clasa trebuie să implementeze metodele pur virtuale din clasa de bază. Astfel, metoda print va afișa datele în conformitate cu spusele din cerință, iar metoda calculateConsume va calcula consumul, iar rezultatul se va stoca în atributul mConsume.

Să se creeze o clasă cu numele Hybrid cu următoarele specificații:
- clasa trebuie să fie moștenită din clasa Car;
- clasa trebuie să conțină 2 atribute private numite mGas și mBattery, ambele de tip fracționar pe simplă precizie;
- clasa trebuie să conțină un constructor public cu 2 parametri care să inițializeze atributele mGas și mBattery cu valoarea specificată. De asemenea, se va seta valoarea atributul mType cu textul "hibrid";
- clasa trebuie să implementeze metodele pur virtuale din clasa de bază. Astfel, metoda print va afișa datele în conformitate cu spusele din cerință, iar metoda calculateConsume va calcula consumul, iar rezultatul se va stoca în atributul mConsume.

Să se creeze o clasă cu numele Diesel cu următoarele specificații:
- clasa trebuie să fie moștenită din clasa Car;
- clasa trebuie să conțină un atribut private numit mDiesel, de tip fracționar pe simplă precizie;
- clasa trebuie să conțină un constructor public cu un singur parametru care să inițializeze atributul mDiesel cu valoarea specificată. De asemenea, se va seta valoarea atributul mType cu textul "diesel";
- clasa trebuie să implementeze metodele pur virtuale din clasa de bază. Astfel, metoda print va afișa datele în conformitate cu spusele din cerință, iar metoda calculateConsume va calcula consumul, iar rezultatul se va stoca în atributul mConsume.

ATENȚIE! Cele 3 clase trebuie să aibă definite și un constructor cu 0 parametrii care să inițializeze toate atributele cu  valoarea 0, iar atributul mType cu textul "nedefinit".

Cerinţă
Dându-se o listă de mașini din cele trei tipuri, să se afișeze aceste mașini ordonate crescător în funcție de consum.

Date de intrare
Se vor citi de la tastatură (fluxul stdin) următoarele date:
o valoare întreagă N reprezentând numărul de mașini, urmată de caracterul newline (tasta Enter); 
N linii, fiecare linie conţinând tipul unei mașini („benzina”, „diesel”, „hibrid”) şi informaţiile despre aceasta (consumul), în următorul format: 
    benzina <consum_benzină>
    diesel <consum_motorină>
    hibrid <consum_benzină> <consum_energie>
Entităţile componente ale liniilor sunt separate printr-un spaţiu, ca în exemplul dat în final. Fiecare dintre cele N linii reprezentând rezultate este urmată de caracterul newline (tasta Enter).

Date de ieşire
Programul va afişa pe ecran (stream-ul standard de ieşire) informaţiile despre mașini,  în acelaşi format în care au fost introduse şi datele de intrare, ordonate după consum, de la cel mai mic la cel mai mare.

Restricţii şi precizări
Numărul de mașini, N, este un număr întreg între 1 şi 10000. 
Valorile de consum sunt numere reale, între 0 şi 50, cu exact 2 zecimale. 
