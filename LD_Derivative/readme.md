### 3. Laboratorijas darbs - Derivative  
Autors - Gustavs Sināts  
Grupa - RECV0_1
### Mapes saturs  
[derivative.c](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Derivative/derivative.c) - pabeigts kods.   
[derivative.gp](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Derivative/derivative.gp) - gnuplota scripts.  
[derivative.png](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Derivative/derivative.png) - atvasinājumu attēlojums gnuplotā.  
[derivative2.dat](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Derivative/derivative2.dat) - fails, kurā glabājas dati par atvasinājumiem   
[readme.md](https://github.com/GustavsSinats/RTR105_2023_01/blob/main/LD_Derivative/readme.md) - apraksts par laboratorijas darbu. 

  

### Apraksts  
Šajā laboratorijas darbā tiks apskatīti atvasinājumi un otrās kārtas atvasinājumi.
Funkcijas atvasinājums dotajā punktā ir lielums, kas rāda, cik strauji mainās funkcijas vērtība dotā punkta apkārtnē.  
Otrās kārtas atvasinājumi tiek izmantoti arī, lai pētītu funkcijas ekstrēma punktus. Ja funkcijas otrās kārtas atvasinājums punktā ir nulle, tad šajā punktā funkcijai ir ekstrēma punkts. Lai noteiktu, vai tas ir minimuma vai maksimuma punkts, nepieciešams izpētīt arī funkcijas pirmās kārtas atvasinājumu. Ja pirmās kārtas atvasinājums šajā punktā ir nulle un otrās kārtas atvasinājums ir pozitīvs, tad funkcijai ir minimuma punkts. Ja pirmās kārtas atvasinājums šajā punktā ir nulle un otrās kārtas atvasinājums ir negatīvs, tad funkcijai ir maksimuma punkts.


### Programma  
Programma lietotājam prasa ievadīt intervāla sākuma a un beigu b vērtību, lai zinātu ar kādu precizitāti jāveic aprēķins, tad tiek prasīts ievadīt epsilon vērtību.  
Programma aprēķina funkcijas atvasinājumu ar 2 dažādiem paņēmieniem - skaitlisko un analītisko, šīs vērtības tālāk tiek saglabātas derivative2.dat failā, no kurā tiek veidots attēls ar funkciju asin(x), asin(x) pirmās kārtas atvasinājumu un asin(x) otrās kārtas atvasinājumu. Lai pārliecinātos, ka atvasinājumi ir aprēķināti pareizi ir jāzin to īpašības, piemēram, pirmās kārtas atvasinājums parāda to, cik strauji funkcija izmainās izvēlētajā punktā, bet ar 2. kārtas atvasinājumu var noskaidrot kurā punktā funkcija atrodas zem x ass, un kurā virs.
  

    
![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/6c75a67b-dd72-4382-9fc0-c0daa9b5f3fb)

