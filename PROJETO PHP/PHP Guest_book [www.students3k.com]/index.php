<?php
	

/***
--------------------------------------------------------------------------------
An Easy GuestBook 0.2
     
	 This file is part of An Easy GuestBook.

    An Easy GuestBook is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    An Easy GuestBook is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with An Easy GuestBook; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA


This program is provided under the GNU/GPL license.
See LICENSE file for more informations

Website: http://www.students3k.com
Author: Karthikh Venkat
--------------------------------------------------------------------------------
*/

	//ini_set("error_reporting","-1");
	//ini_set("display_errors","On");
	require_once("conf.php");
	require_once("gb.php");
	require_once("db.class.php");
    $ss="gb";

/*
	if(isset($style) && ($style=='1' || $style=='2'))
		$ss=$ss.$style;

*/
function display_navigation($start,$num_pages) {
	// this function is used to display navigation bar to navigate to different pages
	//if display_single_page is set to FALSE in configuration file
	print "<div class='page_nav'>\n";
	print "<div class='total'>Total Entries: ".$GLOBALS['gb']->total."</div>";
	print "		<div class='page'> Pages:&nbsp;&nbsp;&nbsp;</div>\n";
	print"		<div class='page_no'>";
				if($start > 1  && $start <=$num_pages)
	print"			<a href='".$_SERVER['PHP_SELF']."?start=".($start-1)."' class='pages'>Prev&lt;&lt;</a>&nbsp;&nbsp;\n";
				for($j=1;$j<=$num_pages;$j++) {
					if($start==$j)
	print"			<a href='".$_SERVER['PHP_SELF']."?start=".$j."' class='current'>".($j)."</a>&nbsp;&nbsp;\n";
					else
	print"			<a href='".$_SERVER['PHP_SELF']."?start=".$j."' class='pages'>".($j)."</a>&nbsp;&nbsp;\n";
				 }
				 if(!isset($start) || $start <=0)
					$l=1;
				else
					$l=$start+1;
				if($l<=$num_pages)
	print"			<a href='".$_SERVER['PHP_SELF']."?start=".$l."' class='pages'>&gt;&gt;Next</a>&nbsp;\n";
	print"			</div>\n";
	print"</div>\n";
	}



print <<<HTML_HEADER
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html><head>

<link rel="stylesheet" href="{$ss}.css" type="text/css">


<title>
An Easy GuestBook 0.2</title>

</head>
<body>

<div class='top_nav'>
    <div class='gb_title'>
        An Easy GuestBook 0.2 (Updated) 
    </div>
    <div class='top_nav_link'>
        <div class='title_link'><a href='{$_SERVER['PHP_SELF']}' class='title_link'>View GuestBook</a>&nbsp;&nbsp;|
		&nbsp;&nbsp;<a href='{$_SERVER['PHP_SELF']}?action=add' class='title_link'>Sign GuestBook</a> 
		</div>
       
    </div>
</div>

HTML_HEADER;


//	global $db;
	$db=new db($db_database,$db_host,$db_user,$db_passwd);
	$gb=new GuestBook();
	if(!isset($_GET['start']))
		$start=1;
    else
	   $start=$_GET['start'];

	$action=$_GET['action'];
	$submit=$_POST['submit'];
	if(($submit=="submit") || ($submit=="Submit"))  {
		$error="";
		$ok=true;
		if(trim($_POST['entry_name'])==""){
			$ok=false;
			$error .="Enter your name <br>";
		}
		if(trim($_POST['entry_email'])==""){
			$ok=false;
			$error .="Enter your email address <br>";
		}
		if(trim($_POST['entry_comments'])==""){
			$ok=false;
			$error .="Enter comments/suggestions <br>";
		}
		$gb->entry_dob=$_POST['entry_dob'];
			$gb->entry_location=$_POST['entry_location'];
			$gb->entry_author=$_POST['entry_name'];
			$gb->entry_email=$_POST['entry_email'];
			$gb->entry_url=$_POST['entry_website'];
			$gb->entry_comments=$_POST['entry_comments'];
			$gb->referer=$_POST['entry_referer'];
			$gb->entry_ip=$_SERVER['REMOTE_ADDR'];
		if($ok) {
			$gb->entry_id=$gb->next_id();
			//$this->entry_title=$_POST[''];
			
			$gb->add_entry();
			$gb->update_total();
			$action='list';
		 } else {
			$action='add';

		 }


	}

	
		switch($action) {
	
			case "add":
					  
					  $gb->display_add_form($error);
					  break;
			
			case "s":
					$id=$_GET['id'];
					if($gb->retrieve_entry($id)) {
						$gb->display_entry();

					} else {
						print" No Such Entry Exists";

					}
					break;
			case "d":
				    $id=$_GET['id'];
					if($gb->delete_entry($id)) 
						print"Entry Deleted Succefully";
					else
						print"unable to delete Entry";
			case "list":
			default:
				   if($gb->total > 0) { 
						if(!$display_single_page) {
						/* if(display_single_page is set to False calculate total number of pages to display
							$display number of  entries on a single page 
						*/
                        
				         // calculate total number of pages
						 if ($gb->total > $display) {// More than 1 page.
							$num_pages = ceil ($gb->total/$display);
						 } else {	
							$num_pages = 1;
						 }
	 					 
						 display_navigation($start,$num_pages);

					     if(!isset($start) || $start <=0)
					         $start=1;
							 $s=($start-1)*$display;
							 if($s>$gb->total) 
							     $s=0;
						  	$gb->display_n_entries($s,$display);
							display_navigation($start,$num_pages);
						 } else {
						
							$gb->display_n_entries(-1,-1);

					     }
			       } else {
						print"<div class='message'>The Guestbook is empty. Please fill my Guestbook.</div>";	
                   }
					break;



		}
	

print <<<FOOTER

</body>
</HTML>
FOOTER;






?>
