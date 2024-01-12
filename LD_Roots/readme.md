### 3. Laboratorijas darbs - Roots  
Autors - Gustavs Sināts  
Grupa - RECV0_1
### Mapes saturs  
Roots.c - pabeigts kods.   
grafiks.gp - gnuplota scripts.  
Sakne asin(x) +c.png - funkciju attēlojums gnuplotā.  
Roots.dat - fails, kurā glabājas koordinātes, kurās jāatrodas saknei.  
grafiks.dat - fails, kurā glabājas funkcija, kā jāzīmē asin(x) + c.     
readme md - apraksts par laboratorijas darbu. 

  

### Apraksts  
Šajā laboratorijas darbā autors ir izveidojis programmu, kurā tiek aprēķināta un uz ekrāna parādīta pārbīdītas funkcijas asin(x) + c sakne.   

Sakne matemātikā ir kāpināšanai pretējās darbības rezultāts, ja kāpinātājs pieder naturālo skaitļu kopai. Saknes atrašanu sauc par saknes vilkšanu. Šī vērtība parāda, kurā vietā funkcija krusto x asi, y=0.
Matemātiskās saknes tiek plaši izmantotas matemātikā, fizikā, ķīmijā un citās zinātnēs. Piemēram, saknes tiek izmantotas, lai atrisinātu vienādojumus, aprēķinātu laukumu, tilpumu un pētītu funkciju īpašības.
Piemēram:  
Kvadrātvienādojuma saknes nosaka, cik atrisinājumu ir vienādojumam. Piemēram, vienādojumam x^2 + 2x + 1 = 0 saknes ir x = -1 un x = -1.




### Programma  
Programma prasa lietotājam ievadī no kura punkta viņš vēlās sākt meklēt saknes un pie kura beigt, kā arī precizitāti līdz kurai rēķināt x vērtību, kurā grafiks krusto x asi. Tā kā funkcijas bieži tiek pārbīdītas, tad arī šajā prgrammā no lietotāja tiek prasīts par cik vienībām pārbīdīt funkciju uz augšu vai leju pa y asi.   
Kad vērtības ir iegūtas, programma veic aprēķinus un lietotājam uz ekrāna parāda saknes vērtību un cik iterācijas tas prasīja, lai nonāktu pie ievadītās precizitātes. Lai varētu pārbīdīto funkciju attēlot Gnuplotā, tiek izveidots datu fails ar nosaukumu grafiks.dat, savukārt, lai attēlotu sakni, tās koordinātes tiek saglabātas failā Roots.dat.
  
Koda attēls:  

    
![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/18bc9cf2-ad7d-4c08-811a-dae3d9c26621)  

    
![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/fdb8b8ba-926d-46c8-97f2-b2946be785f5)
