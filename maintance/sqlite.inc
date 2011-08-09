<?php

class database_maintenance_mysqli extends database_maintenance_mysql
{
	protected $default_table_engine = false;
	protected $archive_table_engine = false;
	protected $full_text_search_table_engine = false;
	protected $cache_table_engine = false;
	protected $default_charset = false;
	protected $full_text_enabled = false;
	protected $allow_unique_keys = false;
	
	protected $long_text = 'TEXT';
	protected $full_text = 'TEXT';
	protected $tiny_int = 'INTEGER';
	protected $int = 'INTEGER';
	protected $increment = 'AUTOINCREMENT';
	protected $varchar = 'TEXT';
	protected $primary_key_in_define = true;
	protected $strip_unsigned_ints = true;
	
	protected $create_db_users = false;
	
}