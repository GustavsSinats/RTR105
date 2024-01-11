### 1. Laboratorijas darbs - Teilora rindas  
Autors - Gustavs Sināts  
Grupa - RECV0_1
### Mapes saturs  
arcsin_gala_versija.c - pabeigts kods.  
arcsin_pabeigts.c - pabeigts kods ar ASCII zīmējumu ar formulu, kā veidojas arcsin funkcija.  
grafiks.gp - gnuplota scripts.  
grafiks.png - funkciju attēlojums gnuplotā.  
readme.md - apraksts par laboratorijas darbu.  
### Apraksts  
![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/b3ebb5b0-d9a6-4eaa-8a1c-4914a81e6742)


Šajā laboratorijas darbā autors ir izveidojis kodu - Teilora rindas, kurš izpilda summas darbības, lai iegūtu iespējami tuvu rezultātu funkcijai asin(x), kur x ir lietotāja izvēlēta vērtība robežās no [-1;1], tādejādi iespējams uzzīmēt savu grafiku, kurš ir iespējami tuvs oriģinālajam.


### Programma  
Kods sastāv no 500 saskaitāmajiem, kur katrs nākamais ir mazāks par iepriekšējo, tāpēc jo vairāk saskaitāmo, jo tālāk funkcija pārklāsies ar reālo.
Tā, kā Teilora rindas izmanto faktoriālu, lai iegūtu katra nākamā saskaitāmā vērtību, tad to realizēju ar summas palīdzību, kur
katrs nākamais saskaitāmais tika iegūts iepriekšējam piereizinot rekurences reizinātāju,
tādejādi ievērojami samazinot nepieciešamos datora resursus, lai veiktu nepieciešamos aprēķinus.

Koda attēls:
![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/58785aab-b5ac-49ed-8ed1-055e4c97ecf9)


