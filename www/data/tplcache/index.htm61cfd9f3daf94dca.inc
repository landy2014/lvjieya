<?php
$z[0]=Array("global","",233,261);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("global","",273,299);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("global","",342,372);
$z[2][4]['name']="cfg_description";
$z[3]=Array("global","",408,435);
$z[3][4]['name']="cfg_keywords";
$z[4]=Array("global","",452,484);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("global","",613,641);
$z[5][4]['name']="cfg_mobileurl";
$z[6]=Array("global","",1119,1147);
$z[6][4]['name']="cfg_mobileurl";
$z[7]=Array("global","",1292,1317);
$z[7][4]['name']="cfg_cmsurl";
$z[8]=Array("global","",1408,1434);
$z[8][4]['name']="cfg_cmspath";
$z[9]=Array("global","",1520,1552);
$z[9][4]['name']="cfg_templets_skin";
$z[10]=Array("global","",2118,2144);
$z[10][4]['name']="cfg_cmspath";
$z[11]=Array("include","",2240,2275);
$z[11][4]['filename']="head.htm";
$z[12]=Array("arclist","\n    <h2><a href=\"[field:arcurl/]\">[field:title/]</a></h2>\n    <p>[field:info/]...<a href=\"[field:arcurl/]\">[查看全文]</a></p>\n    ",2416,2615);
$z[12][4]['flag']="h";
$z[12][4]['limit']="0,1";
$z[12][4]['infolen']="230";
$z[13]=Array("arclist","\n    <div class='d1arc'><a href=\"[field:arcurl/]\">[field:title/]</a></div>\n    ",2664,2793);
$z[13][4]['flag']="h";
$z[13][4]['limit']="1,4";
$z[14]=Array("arclist","\n    <li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\n    ",2917,3039);
$z[14][4]['row']="14";
$z[14][4]['titlelen']="32";
$z[14][4]['noflag']="h";
$z[15]=Array("arclist","\nlinkarr[[field:global.autoindex/]] = \"[field:arcurl/]\";\npicarr[[field:global.autoindex/]]  = \"[field:litpic/]\";\ntextarr[[field:global.autoindex/]] = \"[field:title function='html2text(@me)'/]\";\n",3652,3892);
$z[15][4]['flag']="f";
$z[15][4]['row']="5";
$z[16]=Array("global","",4452,4482);
$z[16][4]['name']="cfg_templeturl";
$z[17]=Array("global","",4810,4840);
$z[17][4]['name']="cfg_templeturl";
$z[18]=Array("arclist","\n      <li><span>[field:pubdate function=\"MyDate('m-d',@me)\"/]</span><a href=\"[field:arcurl/]\">[field:title/]</a></li>\n      ",5404,5593);
$z[18][4]['flag']="a";
$z[18][4]['row']="6";
$z[18][4]['orderby']="pubdate";
$z[19]=Array("arclist","\n        <li><a href=\"[field:arcurl/]\">[field:image/]<span class=\"title\">[field:title/]</span></a></li>\n        ",5886,6095);
$z[19][4]['row']="10";
$z[19][4]['orderby']="pubdate";
$z[19][4]['type']="image.";
$z[19][4]['imgwidth']="143";
$z[19][4]['imgheight']="106";
$z[20]=Array("mda","",6207,6232);
$z[20][4]['name']="700x90";
$z[21]=Array("channelartlist","\n   <dl class=\"tbox\">\n    <dt><strong><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a></strong><span class=\"more\"><a href=\"{dede:field name='typeurl'/}\">更多...</a></span></dt>\n    <dd>\n     <ul class=\"d1 ico3\">\n      {dede:arclist titlelen='60' row='8'}\n      <li><span>[field:pubdate function=\"MyDate('m-d',@me)\"/]</span><a href=\"[field:arcurl /]\">[field:title /]</a></li>\n      {/dede:arclist}\n     </ul>\n    </dd>\n   </dl>\n   ",6283,6782);
$z[22]=Array("arclist","\n      <li> <a href=\"[field:arcurl/]\">[field:title/]</a> <span><small>点击:</small>[field:click/]</span> <span><small>评价:</small>[field:scores/]</span></li>\n      ",7221,7470);
$z[22][4]['orderby']="scores";
$z[22][4]['row']="8";
$z[22][4]['subday']="30";
$z[22][4]['titlelen']="42";
$z[23]=Array("feedback","\n      <li> <small><a href=\"#\" class=\"username\">[field:username function=\"(@me=='guest' ? '游客' : @me)\"/]</a> 评论 <a href=\"[field:global.cfg_phpurl/]/feedback.php?aid=[field:aid/]\" class=\"title\">[field:title/]</a></small>\n       <p>[field:msg/]</p>\n      </li>\n      ",7566,7905);
$z[23][4]['row']="5";
$z[23][4]['titlelen']="24";
$z[23][4]['infolen']="80";
$z[24]=Array("global","",8072,8100);
$z[24][4]['name']="cfg_memberurl";
$z[25]=Array("php","\n        if(preg_match(\"#2#\", \$safe_gdopen))\n        {\n        echo '\n        <div class=\"fb\"><span>验证码:</span>\n         <input type=\"text\" name=\"vdcode\" size=\"8\" class=\"ipt-txt\" />\n         <img id=\"vdimgck\" align=\"absmiddle\" onClick=\"this.src=this.src+\\'?\\'\" style=\"cursor:pointer;margin-left:0px;text-transform:uppercase;\" alt=\"看不清？点击更换\" src=\"'.\$cfg_cmspath.'/include/vdimgck.php\"/></div>\n        ';\n        }\n        ",8585,9049);
$z[26]=Array("global","",9158,9186);
$z[26][4]['name']="cfg_memberurl";
$z[27]=Array("global","",9252,9280);
$z[27][4]['name']="cfg_memberurl";
$z[28]=Array("memberlist","\n       <li><a href=\"[field:spaceurl/]\" target=\"_blank\"><img src=\"[field:face/]\" alt='[field:spacename/]' width=\"52\" height=\"52\" />[field:uname/]</a></li>\n       ",9570,9784);
$z[28][4]['row']="6";
$z[28][4]['signlen']="30";
$z[29]=Array("mda","",9957,9987);
$z[29][4]['name']="250x250_SSP";
$z[30]=Array("arclist","\n      <li class='dotline'><a href=\"[field:arcurl/]\">[field:title/]</a></li>\n      ",10161,10332);
$z[30][4]['flag']="c";
$z[30][4]['titlelen']="42";
$z[30][4]['row']="16";
$z[30][4]['tagid']="dedecms";
$z[30][4]['pagesize']="8";
$z[31]=Array("mda","",10438,10464);
$z[31][4]['name']="250x250";
$z[32]=Array("arclist","\n      <li class='dotline'><a href=\"[field:arcurl/]\">[field:title/]</a></li>\n      ",10634,10787);
$z[32][4]['sort']="hot";
$z[32][4]['subday']="30";
$z[32][4]['titlelen']="42";
$z[32][4]['row']="6";
$z[33]=Array("global","",10975,11000);
$z[33][4]['name']="cfg_cmsurl";
$z[34]=Array("qrcode","",11069,11083);
$z[35]=Array("flinktype","\n			<a href=\"#\" _for=\"flink_[field:id/]\">[field:typename/]</a> \n		",11241,11355);
$z[35][4]['type']="dedecms";
$z[36]=Array("flinktype","\n  <dd id=\"flink_[field:id/]\">\n    <ul class=\"f5\">\n		{dede:flink/}\n    </ul>\n  </dd>\n  ",11492,11627);
$z[36][4]['type']="dedecms";
$z[37]=Array("mda","",11713,11738);
$z[37][4]['name']="728x90";
$z[38]=Array("include","",11745,11782);
$z[38][4]['filename']="footer.htm";

?>