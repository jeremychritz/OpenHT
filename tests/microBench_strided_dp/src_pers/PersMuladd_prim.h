#pragma once

// state for add clocked primitive
ht_state struct muladd_prm_state {
	uint64_t	res[11];
	ht_uint7	htId[11];
	bool    	vld[11];
};

// 32-bit mult, clocked primitive
//   function definition located in .cpp file
ht_prim ht_clk("ck") void muladd_wrap (
	bool const & rst,
	uint64_t const & i_a, 
	uint64_t const & i_b, 
	uint64_t const & i_c, 
	ht_uint7 const & i_htId,
	bool const & i_vld,
	bool & o_rdy,
	uint64_t & o_res, 
	ht_uint7 & o_htId,
	bool & o_vld,
	muladd_prm_state &s);
