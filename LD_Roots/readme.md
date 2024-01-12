### 2. Laboratorijas darbs - Roots  
Autors - Gustavs Sināts  
Grupa - RECV0_1
### Mapes saturs  
[Roots.c](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Roots/Roots.c) - pabeigts kods.   
[grafiks.gp](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Roots/grafiks.gp) - gnuplota scripts.  
[Sakne asin(x) +c.png](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Roots/Sakne%20asin(x)%20%2Bc.png) - funkciju attēlojums gnuplotā.  
[Roots.dat](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Roots/Roots.dat) - fails, kurā glabājas koordinātes, kurās jāatrodas saknei.  
[Grafiks.dat](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Roots/Grafiks.dat) - fails, kurā glabājas funkcija, kā jāzīmē asin(x) + c.  
[Roots_izpildits_kods.png](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Roots/Roots_izpildits_kods.png) - attēls, ar izpildītu kodu.  
[readme.md](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Roots/readme.md) - apraksts par laboratorijas darbu. 

  

### Apraksts  
Šajā laboratorijas darbā autors ir izveidojis programmu, kurā tiek aprēķināta un uz ekrāna parādīta pārbīdītas funkcijas asin(x) + c sakne.   

Sakne matemātikā ir kāpināšanai pretējās darbības rezultāts, ja kāpinātājs pieder naturālo skaitļu kopai. Saknes atrašanu sauc par saknes vilkšanu. Šī vērtība parāda, kurā vietā funkcija krusto x asi, y=0.
Matemātiskās saknes tiek plaši izmantotas matemātikā, fizikā, ķīmijā un citās zinātnēs. Piemēram, saknes tiek izmantotas, lai atrisinātu vienādojumus, aprēķinātu laukumu, tilpumu un pētītu funkciju īpašības.
Piemēram:  
Kvadrātvienādojuma saknes nosaka, cik atrisinājumu ir vienādojumam. Piemēram, vienādojumam x^2 + 2x + 1 = 0 saknes ir x = -1 un x = -1.




### Programma  
Programma prasa lietotājam ievadī no kura punkta viņš vēlās sākt meklēt saknes un pie kura beigt, kā arī precizitāti līdz kurai rēķināt x vērtību, kurā grafiks krusto x asi. Tā kā funkcijas bieži tiek pārbīdītas, tad arī šajā prgrammā no lietotāja tiek prasīts par cik vienībām pārbīdīt funkciju uz augšu vai leju pa y asi.   
Kad vērtības ir iegūtas, programma veic aprēķinus un lietotājam uz ekrāna parāda saknes vērtību un cik iterācijas tas prasīja, lai nonāktu pie ievadītās precizitātes. Lai varētu pārbīdīto funkciju attēlot Gnuplotā, tiek izveidots datu fails ar nosaukumu grafiks.dat, savukārt, lai attēlotu sakni, tās koordinātes tiek saglabātas failā Roots.dat.
  
Programmas un grafika attēls: 
  
![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/f3a74393-a7f5-48c3-952a-cdbe0c364945)  

  
![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/cf81bba5-d9aa-42ba-821b-942b00e759d2)


    

