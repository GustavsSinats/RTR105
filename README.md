<p align="center">
  RTR105

  <p align="center">
Studiju kursa Datormācība klade
<p align="center">

Šī lapa tika uzprgrammēta izmantojot [Github](https://github.com/)

Github mājaslapā pieejamas dažādas pamācības kā formatēt tekstu[^1].
[^1]: Manuprāt diezgan pārskatāma, taču paiet laiks, lai pie tās pierastu

![b_RTU_2022 2](https://github.com/GustavsSinats/RTR105/assets/144107004/b840a568-77c7-48d7-a51e-546dba7a23fd)


- [X] 1. Nodarbības "Atziņas"

### Manas Linux pirmās komandas:  
+ **uname**  
+ **unname**  
+ **unname -a**  
+ **man unname**  
+ **history**
+ **pwd**

- [X] 2. Nodarbība darbības ar Linux

### Sākuma komandas:
1. whoami (kas es esmu)  
2. pwd (kur es atrodos)  
3. man (instrukcija)  
4. history (visu darbību vēsture)  
5. ls -l (kas man ir pieejams)  
6. ls -lt (kas man ir pieejams, sakārtots pēc laika)  
7. cd (atgriezties home/user)  
8. cd ..(atpakaļ)  
9. ~ (atgriezties home)
10. Ctrl C (atgriezties uz pozīciju, kurā var rakstīt komandas)
### Darbības ar mapītēm un tekstu:
+ mkdir (izveidot jaunu mapīti)  
+ rmdir (dzēst mapīti)  
+ mv (move)  
+ rm a*c.d* (izdzēst visas mapītes, kuras sākas ar a, beidzas ar c un aiz punkta sākas ar d)
+ cp (copy) 
+ echo (atkārtot uzrakstīto)  
+ hexdump -C (parāda no kā sastāv uzraksītais)  
+ history > history_20230912_Class_02.txt (kopēt vēsturi un izveidot dokumentu ar tādu nosaukumu)
+ lai izveidotu tekstu izmanto echo [teksts] > saglabātās apakšmapītes nosaukums (kursors tiks pārbīdīts uz sākumu)
+ echo > esošajā tekstā pārbīdīs kursoru uz sākumu un esošajam tekstam rakstīsies pāri
+ lai papildinātu jau uzrakstītu tekstu izmanto >> (uzrakstītais tiks attēlots jaunā rindā)
+ -e (atslēga lai izmantotu \n\t, kas tekstu
  ### Dokumentu augšupielādēšana izmantojot komandas
- [X] 4. Nodarbība
Lai augšupielādēdu saglabātu teksta dokumentu no Linux termināļa uz Github repozitoriju no sākuma ar komandu nano jāizveido teksta dokuments, komandas, lai to izdarītu:  
#!/bin/bash  
git add .  
git config --global user.name GustavsSinats  
git config --global user.email sinats.gustavs@gmail.com  
git commit -m "Class_4a"  
git push origin main
Dators prasīs paroli, lai varētu pievinot teksta dokumentu repozitorijam, šo paroli, jeb private key var atrast pie profila iestatījumiem -developer settings, -personal access tokens
Šādi dokuments Class_4a tiks pievienots tavam izvēlētajam repozitorijam.
   ### C valodas pirmie soļi
  - [X] 5. Nodarbība
Ar komandu nano first.c -o first.out izveidojam teksta redaktoru ar nosaukumu first.out
Sajā dokumentā ir instrukcija kā lietot piezīmes un kā nomainīt skaitli, kuru rāda, kad sistēmai nav kļūdu.
Lai šo teksta redaktoru aktivizētu izmanto komantu gc first.c -o first.out
ar komandu ./(aktivizējamās komandas nosaukums) varam izpildīt komandu

$? komanda norāda kāda veida kļūda ir radusies pēc komandas izpildes (noklusējumā skaitlis 0 nozīmē to, ka kļūdu nav)



