### 3. Laboratorijas darbs - Derivative  
Autors - Gustavs Sināts  
Grupa - RECV0_1
### Mapes saturs  
derivative.c - pabeigts kods.   
derivative.gp - gnuplota scripts.  
derivative.png - atvasinājumu attēlojums gnuplotā.  
derivative2.dat - fails, kurā glabājas dati par atvasinājumiem   
readme.md - apraksts par laboratorijas darbu. 

  

### Apraksts  
Šajā laboratorijas darbā tiks apskatīti atvasinājumi un otrās kārtas atvasinājumi.
Funkcijas atvasinājums dotajā punktā ir lielums, kas rāda, cik strauji mainās funkcijas vērtība dotā punkta apkārtnē.  
Otrās kārtas atvasinājumi tiek izmantoti arī, lai pētītu funkcijas ekstrēma punktus. Ja funkcijas otrās kārtas atvasinājums punktā ir nulle, tad šajā punktā funkcijai ir ekstrēma punkts. Lai noteiktu, vai tas ir minimuma vai maksimuma punkts, nepieciešams izpētīt arī funkcijas pirmās kārtas atvasinājumu. Ja pirmās kārtas atvasinājums šajā punktā ir nulle un otrās kārtas atvasinājums ir pozitīvs, tad funkcijai ir minimuma punkts. Ja pirmās kārtas atvasinājums šajā punktā ir nulle un otrās kārtas atvasinājums ir negatīvs, tad funkcijai ir maksimuma punkts.


### Programma  
Programma lietotājam prasa ievadīt intervāla sākuma a un beigu b vērtību, lai zinātu ar kādu precizitāti jāveic aprēķins, tad tiek prasīts ievadīt epsilon vērtību.  
Programma aprēķina funkcijas atvasinājumu ar 2 dažādiem paņēmieniem - skaitlisko un analītisko, šīs vērtības tālāk tiek saglabātas derivative2.dat failā, no kurā tiek veidots attēls ar funkciju asin(x), asin(x) pirmās kārtas atvasinājumu un asin(x) otrās kārtas atvasinājumu. Lai pārliecinātos, ka atvasinājumi ir aprēķināti pareizi ir jāzin to īpašības, piemēram, pirmās kārtas atvasinājums parāda to, cik strauji funkcija izmainās izvēlētajā punktā, bet ar 2. kārtas atvasinājumu var noskaidrot kurā punktā funkcija atrodas zem x ass, un kurā virs.
  

    
![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/18bc9cf2-ad7d-4c08-811a-dae3d9c26621)  

    
![image](https://github.com/GustavsSinats/RTR105_2023_01/assets/144107004/fdb8b8ba-926d-46c8-97f2-b2946be785f5)
