/*********************************************************************************************************
##                        1 - BOMBA FORT.c
##                    -------------------
##
##          $Id:          1 - BOMBA FORT.c, v 1.0 2017/9/13 4:15:11
##
##
**********************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

void main()
{
	setlocale (LC_ALL,"spanish");
	system (" MODE 200 , 200" );
	
	int num, ban,i;
	char continua;
	
	inicio:
	do
	{ 
		ban = 0;
		printf ("\nInserte un número del 1 al 5 > ");
		scanf ("%d",&num);
		fflush (stdin);
		
		switch (num)
		{
			case 1: 
				printf ("\nMAIIAAMEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE!!!!");
				printf ("\n\nDesea seguir intentandolo? s=si, n=no:> ");
				fflush (stdin);
				break;
			case 2:
				printf ("\nCOMO ESTÁ ESTA CHOCOLOCAAAA!!!\n\n");
				printf ("\n\nDesea seguir intentandolo? s=si, n=no:> ");
				fflush (stdin);
				break;
			case 3:
				printf ("\nMAMÁ CORTATE TODA LA LOOOOZZ!!");
				printf ("\n\nDesea seguir intentandolo? s=si, n=no:> ");
				fflush (stdin);
				break;
			case 4:
				printf ("\nHOLA MEPES!! SOY RICARDO FORT, Y ESTO FUE LA BOMBA FORT! by: AGUS!\n\n");        
				printf ("\n\nDesea seguir intentandolo? s=si, n=no:> ");
				fflush (stdin);
				break;
			case 5:
				printf("                                                                         .`                                                                           \n                                                                        `ds+                                                                          \n                                                   `.               :s-:hdhhy` `                                                                      \n                                     .      +`  `/-ys`.ydos+       yhdydhdhhhd.+o.                                                                    \n                                 ` ..--` . :m/ .hddhdhhdmmd+`//   sdhhhdhhhhhddhdho.                                                                  \n                                `:.`  `.odhdhd/dhhhhhhddhhhyhhds odhhhmhhhhhhhdmhhhdo`                                                                \n                             `.:-`   `hddhhdhdNhhhhhhhhhhhhhhhhdyhhhhhNhhhhhhhhdhhhhdd.                                                               \n                          `.-.. `:-  /NhhhhdhhhhhhhhhhhhhhhhhhhhhhhhhhNhhdhhhhhhhhhhhdd.                                                              \n                          :-.  //ymy-omhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhNhhmhhhhhhhhhhhhhd`                                                             \n                       ..-``` :hhdhhhddhhhhhhhhhhhhhhhhhhhhhhhhmhhhhhhmhhdmhhhdhhhhhhhhhh`                                                            \n                    .`--`  .y/smhhhhhhhhhhhhhhhhhhhhhdddhhhhhhhhmhhhhhhdhhddhhmhhhdhhhhhh/`  `                                                        \n                    `:-`  /oohddhhhhhhhhhhhhhhhhhhhhhhhhdddhhhhhddhhhhhdhhhdhhdhhhddhhhhhs`..`                                                        \n                       ++ ddhhhhhhhhhhhhhhhhhhhhhdddhhhhhhdmdhhhhhhhhhhhdhhhdhhdhhhdhhhhhhy-                                                          \n                      .-oshhhhhhhhhhhhhhhhhhhhhhhhhhddddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh                                                           \n                      `s++mhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhdy`                                                         \n                   .-`.:ohdhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhs                                                          \n                   omddmyhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhdhhhdhyyhhddddddhhhhddhhhhhhhhhhhhhy/.                                                        \n                   `omdhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhds++ssoo+oo++osyys+++osooysosdhhhhs.++.                                                      \n                    ./ydhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhho//+++/:-----:///:-:///+o+++oohso::y-                                                     \n                   .mhyydhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhyo/:---://:-------------:////://sy+soyd                                                     \n                 `  shhhhhhhhhhhhhhhhhhhhdhhddhhhhhhhhhhdd//------------------------/:/--:/od.--m/.                                                   \n                 -so+dhhhhhhhhhhhhhhhhhdy:.`.ymhhhhhhhhhNs/:-`.---------------------::-/---/yy `h`..                                                  \n                  `+yhhhhhhhhhhhhhhhhds-     /Ndhhhhhhdmy+/-. -----------------------:-::---/m- s                                                     \n                   .yhhhhhhhdssyyhdhd-     `-+Nhhhhhhhyo//:--.--------------------------:---/ys /                                                     \n                 `sodmhhhhhm/`````/m-`--:::/+dmhhyhyyo+///:---------------------------------:om`-                                                     \n                 `ymddhhhhms      .hs.::/oyyhs/-..``-/sysso+:-:+osyyhdddhyo+/:---------------/do.                                                     \n                  `smhhhhhN:     `/yh    `.:y`  -/:`   `-:/hs//o+oyddddddddmddhyo/:--------::+om-                                                     \n                    smhhhhm:  `-:+sho`    `ss   -/++.      -No++oddhhhhhhhhhhhhhdddy/oo+/syhdmddho+:-`                                                \n                   ``+hhhhd:  -++/-`o+   -sy..```-/sh+-.```smhddhdhhhhhhhhyoooyhhhhdNhddhhdddhhhhhhdhs/                                               \n                  .yhoodhhds       .om`-/oy-`+sysooyoyhyyyhysddddmhhhhhhhhho/-+yhhhdm+o+omdhhhhhhssoyhm/                                              \n                   `-ymdhhhm.     `/yd//++yo :+dooo+//++osysomhddhhhhhhhhhhy+oyhhhhNs+o/shhhhhhhho+/shdy                                              \n                     :yhhhhh+  `:+yys++:..oh``sy////////hhoohmhhhhhhhhhhhhhhyhhhhdms///shhhhhhhhhhsshhms        .:///-                                \n                       `odhhy  `--.`.-+y. -s- yo///////+N+.`/dmhhhhhhhhhhhhhhhhhmdo/:--dhhhhhhhhhhhhhhm.       -h:../yy-                              \n                        ohhhd/ `      -oh``/: /++////ss+do` -+dhhhhhhhhhhhhhhhdmy+/--.-omhhhhhhhhhhhhm/        h/    -om.                             \n                         .+yhm:/`      :ho .:``-/so+om+/-o:` :oshhdhhhhhhhdddds+/:---`.-hdhhhhhhhhhhm+        .m`   ./om-                             \n                           `+m/.       .+N ://:   ...oo/    `os++syhhdddhhhso/::-----..-:Nhhhhhhhhhh:         +s  ./oyys-                             \n                            yy:        `+M-/so`       ..   -hs///:::::::+yyys--/y/-------+syhdddddo`          y+  -:::++d                             \n                            No.         +N`/h.          ``+ho/---------oyo+N----/o/-:oo+/--o+o+o+h/          `m.     -+yy                             \n                           .M+          /h :/.      `.-+yys/:--.``----/+///hh//syyo++//+oo+h//-/+m-          /h    ./sss+:                            \n                           -N/         `/+ ``   ``-+shhy+//++/::----/////+sdhhhhhhddhhhdy/o+y/:/yy           oo   -:-. .+h`                           \n                           -N/         `+/````-:+yhys+/:--//+oo+++oyy++shhmhhhhhhhhhhhhhh+ho+sood`           y/ :-`   ``:so                           \n                           .N/.        `++///+yhyo+//----:y+////yhsosyhdhhhhhhhhhhhhhhhhhyom/:/m:           .d` .//:+ooo+-+.-::-..`                   \n                           .h+/:.`     .+o++yds+//:------:hs///om+ydhhhhs+++ossssssosyhhhdoyh:/M`           y:   -yy/.`   `  `.-:/oo-                 \n                           h-:oo++/:-. .++sdy+/:---------:+m+///msso+++o+/s/+dssyhyyyss+ooooh:od          .-h   `od-://            -so                \n                           oo::/+osso+``/+s+//:-----------/sd+/::y++/+yy::/``+`.+:.:s++y+//o:/m:         /s/s   -om:++h/           :.d:               \n                            .:++oo++///-`:///:-------------/sy//--:os+/osssssso+/+////+m+///+d+          m.oy   `/d//++h+        `-+/h/               \n                                  `.---oy////:----::--------/++/----/o+////////++/:/sshy/+/od/          -d-+m   .+ss-+soo: `/////+++/m-               \n                                        +yo///----:/:-------:///:-----::++/+ooyhhydddh+//d+y-           /y/+N`  +h/.:/://:. -:/+++/:-ss               \n                                         .oyo+/:::///-------:/y+:--------:/smddhdhddds//+m`             /y/sh  -ho :+++/.            `ss              \n                                           `/sys+/////------//m+:---------:/sdmmddyoo//:sy              :h/ho  :yy./++++s:         .//`d:             \n                                              `:++++//:-----//mo:-----------:/+os+////--y+              `m:+m:../sh+:///hs.       `:+/-m.             \n                                                  `y+//-..--:/yy--------------::/::---`.h/               :y:od+//++/`/o/:o:///////+oosy-              \n                                                   .ho//..---/+m+/::------------------.-m-                 ...o/sy-:..`.``.-:/++o+mo:.                \n                                                    `sy+/:---:/smo/o/+///:///::://:-::/om`                     -N`:++/         ./-oy                  \n                                                      -syo/:///ohdydhhshosssoo+oo++//+sd-                       m.:h+/     `...-+/.N                  \n                                                        `/syyo++smmhddhddhdddhdhdhdsys/`                        :/ sho::::-...:/:/y+                  \n                                                            ./oo/smmdhhhhhhhhhdhhddN/                               .----:/+oooo+:`                   \n                                                                 `.+dhmmddmddhmddhd/                                                                  \n                                                                    `:ohddhdmmNNds`                                                                   \n                                                                        .../:///:                                                                     \n                                                                           `   `                                                                      \n");
				break;
			default:  
				printf ("\nTE DIJE DEL 1 AL 5 SORETE! SIEMPRE HACEN LO QUE SE LES CANTA ESTOS USERS...\n");
				break;                                                                                                                                 
		}    
		scanf ("%c", &continua);
		if (continua == 's') goto inicio;
		else if (continua != 'n') ban=1;                                                                                                                                 
	} while (ban == 1);
	
	getch ();	
}
