# show master status

# mask out the binlog position
-- replace_column 2 # 3 <Binlog_Do_DB> 4 <Binlog_Ignore_DB> 5 #
show master status;