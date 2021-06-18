<?
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
Email: students3k.com@gmail.com

--------------------------------------------------------------------------------
*/



	//configuration file for guestbook 

   $db_host="localhost"; //name of the database host
   $db_user="bharat"; //database username
   $db_passwd=""; //password
   
   //database name give the name of the database where u created entry_detail table using egb_sql.sql file
   $db_database="gb"; //databasename 

   /* create a table for storing entries with the following structure and set ENTRY_TABLE to reflect the name 
    of table . 
	CREATE TABLE `entry_detail` (
		`entry_id` int(11) NOT NULL default '0',
		`entry_author` varchar(50) NOT NULL default '',
		`entry_dob` varchar(50) NOT NULL default '',
		`entry_email` varchar(100) NOT NULL default '',
	    `entry_url` varchar(100) NOT NULL default '',
	    `entry_location` varchar(50) NOT NULL default '',
		`entry_date` datetime NOT NULL default '0000-00-00 00:00:00',
		`entry_comments` text NOT NULL,
		`entry_referer` varchar(50) NOT NULL default '',
		`entry_ip` varchar(15) NOT NULL default '',
		`entry_hidden` enum('0','1') NOT NULL default '0'
	) TYPE=MyISAM;

	
	
	
	*/



   define(ENTRY_TABLE,"entry_detail");
   
   //set this variable to FALSE if you want to display only a certain number
   //of entries of guestbook.
   $display_single_page=FALSE; 
		//if above variable is FALSE following number of entries will be displayed at once.
		$display=5;

	
	//admin login and password for deleting entries required for page 
	// admin.php
  $admin_login="admin";
  $admin_password="admin";

?>
