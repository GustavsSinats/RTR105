### 5. Laboratorijas darbs - Bubble Sort  
Autors - Gustavs Sināts  
Grupa - RECV0_1
### Mapes saturs  
BubbleSort.c - pabeigts kods.   
BurtuBiezums.gp - gnuplota scripts.  
burtu_statistika.png - funkciju attēlojums gnuplotā.  
grafiks.dat - fails, kurā glabājas cik reizes atkārtojas katrs burts   
readme md - apraksts par laboratorijas darbu. 

  

### Apraksts  

Burbuļu kārtošanas metode ir vienkārša kārtošanas metode, kas darbojas, salīdzinot secīgi blakus esošos elementus un apmaina tos vietām, ja tie ir nepareizā secībā. Kārtošana tiek veikta, līdz visi elementi ir sakārtoti.
Burbuļu kārtošanas metode darbojas šādi:
  
No sākuma, salīdzina katru secīgi blakus esošo elementu.  
Ja kreisais elements ir lielāks par labo elementu, apmaina tos vietām.  
Atkārto 1. un 2. soli, līdz sasniedz rindas beigas.  
Atkārto 1.- 3. soļus, līdz visi elementi ir sakārtoti.  
Piemēram, ja tiek ievadīta šāda skaitļu rinda: [1, 5, 3, 2, 4]  

Burbuļu kārtošanas metode to sakārtos šādi:  
  
Salīdzina pirmos divus elementus: 1 un 5. 1 ir mazāks par 5, tāpēc vietām netiek mainīti.  
Salīdzina otro un trešo elementu: 5 un 3. 5 ir lielāks par 3, tāpēc vietām tiek mainīti. Tagad rinda izskatās šādi:
[1, 3, 5, 2, 4]  
Salīdzina trešo un ceturto elementu: 3 un 2. 3 ir lielāks par 2, tāpēc vietām tiek mainīti. Tagad rinda izskatās šādi:
[1, 2, 3, 5, 4]  
Salīdzina ceturto un piekto elementu: 3 un 4. 3 ir mazāks par 4, tāpēc vietām netiek mainītai. Tagad rinda izskatās šādi:
[1, 2, 3, 4, 5]  
Šajā posmā visi elementi ir sakārtoti, tāpēc metode var pārtraukt darbību.  
Burbuļu kārtošanas metode ir efektīva, ja datu apjoms ir neliels. Tomēr, ja datu apjoms ir liels, metode var būt neefektīva, jo tā veic daudz salīdzinājumu.  


### Programma  
Kods sastāv no 500 saskaitāmajiem, kur katrs nākamais ir mazāks par iepriekšējo, tāpēc jo vairāk saskaitāmo, jo tālāk funkcija pārklāsies ar reālo.
Tā, kā Teilora rindas izmanto faktoriālu, lai iegūtu katra nākamā saskaitāmā vērtību, tad to realizēju ar summas palīdzību, kur
katrs nākamais saskaitāmais tika iegūts iepriekšējam piereizinot rekurences reizinātāju,
tādejādi ievērojami samazinot nepieciešamos datora resursus, lai veiktu nepieciešamos aprēķinus.

Koda attēls ar ASCII zīmējumu:
