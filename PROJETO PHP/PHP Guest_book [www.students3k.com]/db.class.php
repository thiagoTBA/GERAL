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
/// Defines class to handle database connections and queries.


class db {
    var $link;  ///

    /// Create new database connection, possibly using server-provided password.
    function db($database, $host = "localhost", $user = "", $password = "") {
        $this->connect($host, $user, $password);
        $this->select_db($database);
    }

    /// Connect to database.
    function connect($host, $user, $password) {
       if ($password == "") {
        $this->link = mysql_pconnect($host, $user)
                      or die(mysql_error($this->link));
       } else {
	  $this->link = mysql_pconnect($host, $user, $password)
	                or die(mysql_error($this->link));
       }
    }

    /// Select database.
    function select_db($database) {
        mysql_select_db($database, $this->link)
            or die(mysql_error($this->link));
    }

    /// Execute SQL query.
    function query($sql) {
		//print"<br>$sql<br>";
        return mysql_query($sql, $this->link);
    }

    /// Return number of rows in result.
    function num_rows($query_result) {
        return mysql_num_rows($query_result);
    }

    /// Return result as an object.
    function fetch_object($query_result) {
        return mysql_fetch_object($query_result);
    }

    /// Free spaced used by result.
    function free_result($query_result) {
        return mysql_free_result($query_result);
    }

    /// Seek to a given row of result.
    function data_seek($query_result, $rowindex = 0) {
        return mysql_data_seek($query_result, $rowindex);
    }
}
?>
