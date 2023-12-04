### 1. Laboratorijas darbs - Teilora rindas  
Autors - Gustavs Sināts  
Grupa - RECV0_1  
### Mapes saturs  
arcsin_gala_versija.c - pabeigts kods
arcsin_pabeigts.c - pabeigts kods ar ASCII zīmējumu ar formulu, kā veidojas arcsin funkcija
### Apraksts  


Šajā laboratorijas darbā autors ir izveidojis kodu - Teilora rindas, kurš izpilda summas darbības, lai iegūtu iespējami tuvu rezultātu funkcijai asin(x), kur x ir lietotāja izvēlēta vērtība robežās no [-1;1], tādejādi iespējams uzzīmēt savu grafiku, kurš ir iespējami tuvs oriģinālajam.

Šos rezultātus var izmantot lai:

Aprēķinātu funkciju vērtības punktos, kas atrodas netālu no punkta, kur ir zināmi tās atvasinājumi.
Aprēķinātu funkciju vērtību robežas.
Atrisinātu diferenciālvienādojumus.
Izpētītu funkciju īpašības.

Tā, kā Teilora rindas izmanto faktoriālu, lai iegūtu katra nākamā saskaitāmā vērtību, tad to realizēju ar summas palīdzību, kur
katrs nākamais saskaitāmais tika iegūts iepriekšējam piereizinot rekurences reizinātāju,
tādejādi ievērojami samazinot nepieciešamos datora resursus, lai veiktu konkrētās darbības. 
### Programma  
