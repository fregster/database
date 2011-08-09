<?php

class database_maintenance_mysql extends database_maintenance
{
	/**
	 * Default storage engine
	 *
	 * Use MyISAM for a small performance improvment over InnoDB in light situations
	 * Use InnoDB anywhere where you need clustering, caching data, higher concurrency, background flushes
	 */

	//protected $default_table_engine = 'MYISAM';
	protected $default_table_engine = 'INNODB';
	protected $archive_table_engine = 'ARCHIVE';
	//protected $archive_table_engine = 'MYISAM';
	protected $full_text_search_table_engine = 'MYISAM';
	protected $cache_table_engine = 'MEMORY';
	protected $default_charset = 'latin1';
	protected $long_text = 'LONGTEXT';
	protected $tiny_int = 'TINYINT';
	protected $full_text = 'FULLTEXT';
	protected $full_text_enabled = true;
	protected $allow_unique_keys = true;
	
	public function optimize()
	{
		$alltables = database::singleton()->direct_sql('SHOW TABLES');
		
		while ($table = mysql_fetch_assoc($alltables))
		{
		   foreach ($table as $db => $tablename)
		   {
		   		database::singleton()->direct_sql("OPTIMIZE TABLE '".$tablename."'");
		   }
		}
	}
}