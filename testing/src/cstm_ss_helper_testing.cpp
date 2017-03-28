#include "cstm_ss_helper_testing.hpp"

void test_cstm_ss_helper_ne( const string_view& to_test )
{
	cstm_ss_helper_ne ss_helper(to_test);
	
	for ( size_t i=0; i<to_test.size(); )
	{
		const size_t start = ss_helper.find_start_of_word(i);
		if ( i < to_test.size() )
		{
			const size_t pos_after_end 
				= ss_helper.find_pos_after_end_of_word(i);
			
			//show_misc_output( to_test.substr( start, 
			//	ss_helper.get_substr_size( start, pos_after_end ) ),
			//	"\t\t" );
			show_misc_output( start, " ", pos_after_end, "\t\t", 
				to_test.substr( start, ss_helper.get_substr_size( start, 
				pos_after_end ) ), "\n" );
			//show_misc_output( to_test.substr( start, 
			//	ss_helper.get_substr_size( start, pos_after_end ) ), 
			//	"\n" );
		}
	}
	
	show_misc_output("\n");
	
}


void test_cstm_ss_helper_we( const string_view& to_test )
{
	cstm_ss_helper_we ss_helper(to_test);
	
	for ( size_t i=0; i<to_test.size(); )
	{
		const size_t start = ss_helper.find_start_of_word(i);
		if ( i < to_test.size() )
		{
			const size_t pos_after_end 
				= ss_helper.find_pos_after_end_of_word(i);
			
			//show_misc_output( to_test.substr( start, 
			//	ss_helper.get_substr_size( start, pos_after_end ) ),
			//	"\t\t" );
			show_misc_output( start, " ", pos_after_end, "\t\t", 
				to_test.substr( start, ss_helper.get_substr_size( start, 
				pos_after_end ) ), "\n" );
			//show_misc_output( to_test.substr( start, 
			//	ss_helper.get_substr_size( start, pos_after_end ) ), 
			//	"\n" );
		}
	}
	
	show_misc_output("\n");
	
}
