### 1. Laboratorijas darbs - Teilora rindas  
Autors - Gustavs Sināts  
Grupa - RECV0_1
### Mapes saturs  
arcsin_gala_versija.c - pabeigts kods.   
grafiks.gp - gnuplota scripts.  
grafiks.png - funkciju attēlojums gnuplotā.  
asin_grafiks.png - izpildīta koda attēls   
readme md - apraksts par laboratorijas darbu. 
  

### Apraksts  
![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/b3ebb5b0-d9a6-4eaa-8a1c-4914a81e6742)


Šajā laboratorijas darbā autors ir izveidojis kodu - Teilora rindas, tas ir bezgalīgas trigonometriskas rindas veids, kas var tikt izmantots, lai tuvinātu jebkuru funkciju. Tā  ir nosaukta pēc tās izgudrotāja, angļu matemātiķa Džona Teilora.  
Teilora rindas vispārīgā forma ir šāda:  
  
f(x) = a0 + a1(x - a) + a2(x - a)^2 + a3(x - a)^3 + ... 
  
kur:  
  
f(x) ir funkcija, kuru vēlamies tuvināt  
a0 ir funkcijas vērtība punktā a  
a1, a2, a3 utt. ir funkcijas atvasinājumi punktā a  
(x - a) ir attālums no punkta x līdz punktam a  
  
Šīs rindas var tikt izmantotas, lai aprēķinātu funkcijas vērtības, atvasinājumus un citus īpašumus, kā arī, lai tuvinātu funkcijas grafiku.
Teilora rindas ir īpaši noderīgas, lai tuvinātu funkcijas, kurām nav atvasinājumu visos punktos. Piemēram, lai tuvinātu trigonometriskās, eksponenciālās un citas sarežģītas funkcijas.
Šajā darbā ar Teilora rindu palīdzību tiek izpildītas summas darbības, lai iegūtu iespējami tuvu rezultātu funkcijai asin(x), kur x ir lietotāja izvēlēta vērtība robežās no [-1;1], tādejādi iespējams uzzīmēt savu grafiku, kurš ir iespējami tuvs oriģinālajam.
Grafika bildē var redzēt, kā katra nākamā grafika līkne aizvien tālāk sakrīt ar oriģinālo funkciju.


### Programma  
Kods sastāv no 500 saskaitāmajiem, kur katrs nākamais ir mazāks par iepriekšējo, tāpēc jo vairāk saskaitāmo, jo tālāk funkcija pārklāsies ar reālo.
Tā, kā Teilora rindas izmanto faktoriālu, lai iegūtu katra nākamā saskaitāmā vērtību, tad to realizēju ar summas palīdzību, kur
katrs nākamais saskaitāmais tika iegūts iepriekšējam piereizinot rekurences reizinātāju,
tādejādi ievērojami samazinot nepieciešamos datora resursus, lai veiktu nepieciešamos aprēķinus.
Lietotājam tiek prasīts ievadīt vērtību, kādā vēlās uzzināt funkcijas asin(x) lielumu, tas tiek aprēķināts izmanotjot teilora rindas, kur katram nākošajam saskaitāmajam tiek pieskaitīts ar vien mazāks lielums, lai pēc iespējas aprēķinu rezultātu tuvinātu īstajam. Uz ekrāna tiek izprintēti starprezultāti, lai varētu redzēt, kā šī summa veidojas.

Koda attēls ar ASCII zīmējumu:



![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/58785aab-b5ac-49ed-8ed1-055e4c97ecf9)



