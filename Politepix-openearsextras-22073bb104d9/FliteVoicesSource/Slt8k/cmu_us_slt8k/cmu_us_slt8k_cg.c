/*****************************************************/
/**  Autogenerated clustergen voice for cmu_us_slt8k    */
/*****************************************************/

#include <OpenEars/cst_string.h>
#include <OpenEars/cst_cg.h>
#include <OpenEars/cst_cart.h>

extern const cst_cart * const cmu_us_slt8k_f0_carts[];

extern const cst_cart * const cmu_us_slt8k_single_mcep_carts[];
#define cmu_us_slt8k_single_num_channels 52
#define cmu_us_slt8k_single_num_frames 4451
extern const unsigned short * const cmu_us_slt8k_single_model_vectors[];
extern const dur_stat * const cmu_us_slt8k_dur_stats[];
extern const cst_cart cmu_us_slt8k_dur_cart;
extern const char * const *cmu_us_slt8k_phone_states[];

const char * const cmu_us_slt8k_types[] = {
   "zh_204",
   "zh_205",
   "zh_206",
   "oy_131",
   "oy_132",
   "oy_133",
   "ch_41",
   "ch_42",
   "ch_43",
   "aw_21",
   "aw_22",
   "aw_23",
   "ow_126",
   "ow_127",
   "ow_128",
   "b_36",
   "b_37",
   "b_38",
   "g_76",
   "g_77",
   "g_78",
   "ng_121",
   "ng_122",
   "ng_123",
   "uw_179",
   "uw_180",
   "uw_181",
   "sh_156",
   "sh_157",
   "sh_158",
   "uh_174",
   "uh_175",
   "uh_176",
   "hh_81",
   "hh_82",
   "hh_83",
   "ae_6",
   "ae_7",
   "ae_8",
   "y_194",
   "y_195",
   "y_196",
   "k_101",
   "k_102",
   "k_103",
   "aa_1",
   "aa_2",
   "aa_3",
   "ay_31",
   "ay_32",
   "ay_33",
   "w_189",
   "w_190",
   "w_191",
   "m_111",
   "m_112",
   "m_113",
   "ao_16",
   "ao_17",
   "ao_18",
   "th_169",
   "th_170",
   "th_171",
   "ah_11",
   "ah_12",
   "ah_13",
   "v_184",
   "v_185",
   "v_186",
   "dh_51",
   "dh_52",
   "dh_53",
   "d_46",
   "d_47",
   "d_48",
   "n_116",
   "n_117",
   "n_118",
   "jh_96",
   "jh_97",
   "jh_98",
   "r_146",
   "r_147",
   "r_148",
   "ey_66",
   "ey_67",
   "ey_68",
   "pau_142",
   "f_71",
   "f_72",
   "f_73",
   "ih_86",
   "ih_87",
   "ih_88",
   "p_136",
   "p_137",
   "p_138",
   "iy_91",
   "iy_92",
   "iy_93",
   "l_106",
   "l_107",
   "l_108",
   "z_199",
   "z_200",
   "z_201",
   "pau_161",
   "s_151",
   "s_152",
   "s_153",
   "eh_56",
   "eh_57",
   "eh_58",
   "t_164",
   "t_165",
   "t_166",
   "er_61",
   "er_62",
   "er_63",
   "ax_26",
   "ax_27",
   "ax_28",
   "pau_141",
   "pau_143",
   NULL};
#define cmu_us_slt8k_num_types  124

const float cmu_us_slt8k_model_min[] = { 
   -0.039216,
   0.000000,
   1.011380,
   0.109271,
   -0.821360,
   0.091773,
   -1.862280,
   0.086352,
   -0.919762,
   0.073467,
   -1.157400,
   0.076689,
   -0.887954,
   0.076025,
   -0.867869,
   0.074189,
   -0.795365,
   0.055069,
   -0.680934,
   0.050240,
   -0.523316,
   0.055921,
   -0.613673,
   0.061335,
   -0.345391,
   0.061357,
   -1.365570,
   0.032427,
   -0.765593,
   0.049076,
   -0.650488,
   0.038803,
   -0.563144,
   0.032527,
   -0.387462,
   0.034913,
   -0.252226,
   0.035928,
   -0.288738,
   0.030664,
   -0.276699,
   0.028324,
   -0.218596,
   0.027062,
   -0.139186,
   0.025488,
   -0.149229,
   0.023104,
   -0.106104,
   0.022387,
   0.000000,
   0.000000,
};
const float cmu_us_slt8k_model_range[] = { 
   385.709229,
   136.751999,
   6.562350,
   1.805289,
   3.542880,
   0.980097,
   3.205240,
   0.705960,
   1.842420,
   0.523397,
   1.939135,
   0.531285,
   1.486652,
   0.287122,
   1.307482,
   0.325299,
   1.149986,
   0.295276,
   0.907608,
   0.273360,
   0.765688,
   0.207805,
   0.754265,
   0.202664,
   0.792120,
   0.182936,
   3.695560,
   1.219743,
   1.583481,
   0.447010,
   1.188337,
   0.321498,
   0.989634,
   0.252725,
   0.710349,
   0.192937,
   0.472352,
   0.161389,
   0.529042,
   0.163822,
   0.480486,
   0.136617,
   0.374350,
   0.114480,
   0.270944,
   0.093783,
   0.297854,
   0.126205,
   0.211713,
   0.093346,
   10.000000,
   5.050760,
};
const float cmu_us_slt8k_dynwin[] = { -0.5, 0.0, 0.5 };
#define cmu_us_slt8k_dynwinsize 3
const cst_cg_db cmu_us_slt8k_cg_db = {
  "cmu_us_slt8k",
  cmu_us_slt8k_types,
  cmu_us_slt8k_num_types,
  16000,
  277.000000,55.000000,
  cmu_us_slt8k_f0_carts,
  cmu_us_slt8k_single_mcep_carts,
  NULL,NULL,
  cmu_us_slt8k_single_num_channels,
  cmu_us_slt8k_single_num_frames,
  cmu_us_slt8k_single_model_vectors,
  0,0,NULL,
  0,0,NULL,
  cmu_us_slt8k_model_min,
  cmu_us_slt8k_model_range,
  0.005000, /* frame_advance */
  cmu_us_slt8k_dur_stats,
  &cmu_us_slt8k_dur_cart,
  cmu_us_slt8k_phone_states,
  1, /* 1 if mlpg required */
  cmu_us_slt8k_dynwin,
  cmu_us_slt8k_dynwinsize,
  0.420000, /* mlsa_alpha */
  0.400000, /* mlsa_beta */
  0, /* cg:multimodel */
  0, /* cg:mixed_excitation */
  0,0, /* cg:mixed_excitation */
  NULL 
};
