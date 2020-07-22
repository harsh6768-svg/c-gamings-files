#include <graphics.h>
#include <conio.h>
#include<iostream.h>
#include<dos.h>

void main()
{
   int gd = DETECT, gm,i;

   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   //---curve-1
    line(26,192,39,198);delay(70);line(39,198,49,203);delay(70);line(49,203,61,210);delay(70);
    line(61,210,73,218);delay(70);line(73,218,83,225);delay(70);line(83,225,91,233);delay(70);
    line(91,233,99,244);delay(70);line(99,244,106,256);delay(70);line(106,256,111,267);delay(70);
    line(111,267,113,276);delay(70);line(113,276,113,285);delay(70);line(113,285,112,294);delay(70);
    line(112,294,111,301);delay(70);line(111,301,110,308);delay(70);

    //--------------curve 2--
    line(110,308,122,308);delay(70);line(122,308,144,307);delay(70);line(144,307,165,307);delay(70);
    line(165,307,184,308);delay(70);line(184,308,200,310);delay(70);line(200,310,218,312);delay(70);
    line(218,312,232,316);delay(70);line(232,316,246,321);delay(70);line(246,321,256,327);delay(70);
    line(256,327,269,332);delay(70);line(269,332,279,339);delay(70);line(279,339,289,347);delay(70);
    line(289,347,298,356);delay(70);line(298,356,305,366);delay(70);line(305,366,310,374);delay(70);
    line(310,374,314,384);delay(70);line(314,384,320,397);delay(70);

    //-------------curve-4------
    line(613,192,604,196);delay(70);line(604,196,592,202);delay(70);line(592,202,579,208);delay(70);
    line(579,208,569,215);delay(70);line(569,215,559,223);delay(70);line(559,223,550,230);delay(70);
    line(550,230,542,240);delay(70);line(542,240,537,248);delay(70);line(537,248,531,258);delay(70);
    line(531,258,529,268);delay(70);line(529,268,526,279);delay(70);line(526,279,526,286);delay(70);
    line(526,286,526,297);delay(70);line(526,297,529,308);delay(70);

   //-------------curve-3------
   line(529,308,517,308);delay(70);line(517,308,497,307);delay(70);line(497,307,478,308);delay(70);
   line(478,308,459,309);delay(70);line(459,309,443,310);delay(70);
   line(443,310,427,312);delay(70);line(427,312,417,314);delay(70);line(417,314,400,319);delay(70);
   line(400,319,389,323);delay(70);line(389,323,378,328);delay(70);line(378,328,368,333);delay(70);
   line(368,333,360,339);delay(70);line(360,339,351,346);delay(70);line(351,346,343,353);delay(70);
   line(343,353,334,367);delay(70);line(334,367,326,379);delay(70);line(326,379,320,397);delay(70);

    //------------line 1
    line(26,192,220,192);delay(70);

    //-------curve 6
    line(220,192,222,200);delay(70);line(222,200,225,209);delay(70);line(225,209,229,216);delay(70);
    line(229,216,233,223);delay(70);line(233,223,240,228);delay(70);line(240,228,252,234);delay(70);
    line(252,234,269,237);delay(70);line(269,237,293,239);delay(70);line(293,239,297,235);delay(70);

    //------------line 7
    line(613,192,419,192);delay(70);

    //----------curve 5
    line(419,192,417,200);delay(70);line(417,200,415,208);delay(70);line(415,208,410,216);delay(70);
    line(410,216,404,224);delay(70);line(404,224,397,230);delay(70);line(397,230,386,234);delay(70);
    line(386,234,369,237);delay(70);line(369,237,346,239);delay(70);line(346,239,343,235);delay(70);

   //-line2
   line(297,235,301,200);delay(70);
   //--------line 3
   line(301,200,307,221);delay(70);
   //--------line3.1
   line(307,221,317,220);delay(70);
   //-----------line 4
    line(317,220,321,220);delay(70);
    ////-------line 4.1
    line(321,220,331,221);delay(70);
    //=-----------line 5
   line(331,221,338,200);delay(70);
   ///----------line 6
   line(338,200,342,235);delay(70);

   //------------for fill color
   for(i=0;i<140;i++){
   setcolor(15);
	 //---curve-1
    line(26+i,192,39+i,198);delay(1);line(39+i,198,49+i,203);delay(1);line(49+i,203,61+i,210);delay(1);
    line(61+i,210,73+i,218);delay(1);line(73+i,218,83+i,225);delay(1);line(83+i,225,91+i,233);delay(1);
    line(91+i,233,99+i,244);delay(1);line(99+i,244,106+i,256);delay(1);line(106+i,256,111+i,267);delay(1);
    line(111+i,267,113+i,276);delay(1);line(113+i,276,113+i,285);delay(1);line(113+i,285,112+i,294);delay(1);
    line(112+i,294,111+i,301);delay(1);line(111+i,301,110+i,308);delay(1);

      //-------------curve-4------
    line(613-i,192,604-i,196);delay(1);line(604-i,196,592-i,202);delay(1);line(592-i,202,579-i,208);delay(1);
    line(579-i,208,569-i,215);delay(1);line(569-i,215,559-i,223);delay(1);line(559-i,223,550-i,230);delay(1);
    line(550-i,230,542-i,240);delay(1);line(542-i,240,537-i,248);delay(1);line(537-i,248,531-i,258);delay(1);
    line(531-i,258,529-i,268);delay(1);line(529-i,268,526-i,279);delay(1);line(526-i,279,526-i,286);delay(1);
    line(526-i,286,526-i,297);delay(1);line(526-i,297,529-i,308);delay(1);

	       }

   for(i=0;i<75;i++){      setcolor(15);
   line(140,192+i,220,192+i);delay(1);
   line(419,192+i,500,192+i);delay(1);
   }
    for(i=0;i<80;i++){
    //-------curve 6
	       setcolor(15);
    line(220,192+i,222,200+i);delay(1);line(222,200+i,225,209+i);delay(1);line(225,209+i,229,216+i);delay(1);
    line(229,216+i,233,223+i);delay(1);line(233,223+i,240,228+i);delay(1);line(240,228+i,252,234+i);delay(1);
    line(252,234+i,269,237+i);delay(1);line(269,237+i,293,239+i);delay(1);line(293,239+i,297,235+i);delay(1);

    //----------curve 5
    line(419,192+i,417,200+i);delay(1);line(417,200+i,415,208+i);delay(1);line(415,208+i,410,216+i);delay(1);
    line(410,216+i,404,224+i);delay(1);line(404,224+i,397,230+i);delay(1);line(397,230+i,386,234+i);delay(1);
    line(386,234+i,369,237+i);delay(1);line(369,237+i,346,239+i);delay(1);line(346,239+i,343,235+i);delay(1);
   //-line2
   line(297,235+i,301,200+i);delay(1);
   //--------line 3
   line(301,200+i,307,221+i);delay(1);
   //-----------line 4
    line(307,221+i,331,221+i);delay(1);
    //=-----------line 5
   line(331,221+i,338,200+i);delay(1);
   ///----------line 6
   line(338,200+i,342,235+i);delay(1);
			  }
       for(i=0;i<89;i++){            setcolor(15);
		line(307,221+i,331,221+i);delay(1);
      ////--------------curve 2--
      line(122,308-i,144,307-i);delay(1);line(144,307-i,165,307-i);delay(1);
    line(165,307-i,184,308-i);delay(1);line(184,308-i,200,310-i);delay(1);line(200,310-i,218,312-i);delay(1);
    line(218,312-i,232,316-i);delay(1);
    line(232,316-i,246,321-i);delay(1);line(246,321-i,256,327-i);delay(1);
    line(256,327-i,269,332-i);delay(1);line(269,332-i,279,339-i);delay(1);line(279,339-i,289,347-i);delay(1);
    line(289,347-i,298,356-i);delay(1);line(298,356-i,305,366-i);delay(1);line(305,366-i,310,374-i);delay(1);
    line(310,374-i,314,384-i);delay(1);line(314,384-i,320,397-i);delay(1);
       //-------------curve-3------

       line(517,308-i,497,307-i);delay(1);line(497,307-i,478,308-i);delay(1);
   line(478,308-i,459,309-i);delay(1);line(459,309-i,443,310-i);delay(1);
   line(443,310-i,427,312-i);delay(1);line(427,312-i,417,314-i);delay(1);
   line(417,314-i,400,319-i);delay(1);
   line(400,319-i,389,323-i);delay(1);line(389,323-i,378,328-i);delay(1);line(378,328-i,368,333-i);delay(1);
   line(368,333-i,360,339-i);delay(1);line(360,339-i,351,346-i);delay(1);line(351,346-i,343,353-i);delay(1);
   line(343,353-i,334,367-i);delay(1);line(334,367-i,326,379-i);delay(1);line(326,379-i,320,397-i);delay(1);

       }

      getch();
   closegraph();
  }