## 4. Laboratorijas darbs - Integrēšana
Autors - Gustavs Sināts  
Grupa - RECV0_1
### Mapes saturs  
integresana.c - pabeigts kods.   
integresana.gp - gnuplota scripts.  
integralis.png - funkciju attēlojums gnuplotā.
WolframAlpha.png - noteiktā integrāļa aprēķina ar programmu WolframAlpha.  
readme md - apraksts par laboratorijas darbu. 

  

## Apraksts  

Integrēšana ir matemātiskā operācija, kas atbilst funkcijas vērtības summai intervālā. Integrēšanas simbols ir ∫.
Integrēšana tiek izmantota, lai aprēķinātu dažādas funkcijas vērtības, piemēram:  
  
Funkcijas vērtību intervālā;
Funkcijas vērtību ierobežotā intervālā;
Funkcijas vērtību bezgalībā;
Integrēšana tiek izmantota arī, lai atrisinātu diferenciālvienādojumus, aprēķinātu kinētisko enerģiju un daudz ko citu.

Ir daudz dažādu integrēšanas metožu. Šajā laboratorijas darbā tika pielietotas 3:

### Taisnstūru metode  
Taisnstūru metode ir viena no vienkāršākajām skaitliskajām metodēm noteiktā integrāļa aprēķināšanai. Tā sadala integrēšanas intervālu daudzos mazos intervālos un aprēķina funkcijas vērtību katrā intervālā. Pēc tam šo vērtību summu reizina ar intervālu platumu.Taisnstūru metode ir vienkārša un viegli izpildāma, taču tā nav ļoti precīza. Precīzitāti var uzlabot, palielinot intervālu skaitu. Tomēr intervālu skaita palielināšana palielina arī aprēķinu laiku.

### Trapeču metode
Trapeču metodes pamatideja ir sadalīt integrēšanas intervālu daudzos mazos intervālos un aprēķināt funkcijas vērtību katrā intervālā. Pēc tam šo vērtību summu reizinām ar intervālu platumu, bet katram intervālam pieskaitām arī funkcijas vērtību vidējo vērtību.Trapeces metode ir precīzāka nekā taisnstūru metode, taču tā ir arī sarežģītāka. Precīzitāti var uzlabot, palielinot intervālu skaitu. Tomēr intervālu skaita palielināšana palielina arī aprēķinu laiku.

### Simpsonu metode
Trapeču metodē  integrēšanas intervāls tiek sadalīts daudzos mazos intervālos, lai pēc tam aprēķinātu funkcijas vērtību katrā intervālā. Pēc tam šo vērtību summu reizinām ar intervālu platumu, bet katram intervālam pieskaita arī funkcijas vērtību vidējo vērtību un vēlreiz funkcijas vērtību vidējo vērtību, kas atrodas starp katriem diviem intervāliem. Simpsona metode ir precīzāka nekā trapeces metode, taču tā ir vēl sarežģītāka. Kļūdas robeža ir atkarīga no funkcijas ātruma pieaugšanas. Ja funkcija pieaug samērā lēni, tad kļūda būs maza, pat ja intervālu skaits ir mazs. Ja funkcija pieaug samērā ātri, tad kļūda būs liela, pat ja intervālu skaits ir liels.




### Programma  
Šī programma aprēķina noteiktā integrāļa vērtību, izmantojot taisnstūra, trapeces un Simpsona metodes. Lietotājam ir jāievada a, b un epsilon vērtības. a ir intervāla sākumpunkts, b ir intervāla beigu punkts, no kura tiks rēķināts noteiktais integrālis. epsilon ir vērtība, kura nosaka, līdz kādai precizitātei tiks veikti aprēķini. Ja precizitāte nav ļoti būtiska, tad sarežģītām funkcijām var ietaupīt datora resursus un samazināt programmas izpildes laiku. Kad vērtības ir iegūtas, noteiktais integrālis tiek aprēķināts ar tasinstūra, trapeču un Simpsona metodēm un rezultāti tiek izprintēti uz ekrāna. Pēc tam noteiktais integrālis izvēlētajā intervālā tiek uzzīmēts ar Gnuplot palīdzību.
   
Koda un rezultātu attēls attēls:  
![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/b416a1ec-2070-43d2-8185-f967232b9912)  

![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/616a65b3-2c9e-44ba-ba24-105d4f840846)



    
